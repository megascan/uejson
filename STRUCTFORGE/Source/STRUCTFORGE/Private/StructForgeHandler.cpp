#include "StructForgeHandler.h"
#include "StructForgeJsonObject.h"
#include "STRUCTFORGE.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Async/Async.h"

UStructForgeHandler::UStructForgeHandler()
{
}


FStructForgeResult UStructForgeHandler::SerializePlayerData(const FPlayerData& PlayerData, bool bPrettyPrint)
{
    FString JsonString;
    if (FJsonObjectConverter::UStructToJsonObjectString(PlayerData, JsonString, 0, 0, 0, nullptr, bPrettyPrint))
    {
        return FStructForgeResult::Success(JsonString);
    }
    
    return FStructForgeResult::Failure(EStructForgeErrorCode::TypeMismatch, TEXT("Failed to serialize player data"));
}

bool UStructForgeHandler::DeserializePlayerData(const FString& JsonString, FPlayerData& OutPlayerData, FString& OutError)
{
    if (JsonString.IsEmpty())
    {
        OutError = TEXT("JSON string is empty");
        return false;
    }
    
    if (!FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &OutPlayerData, 0, 0))
    {
        OutError = TEXT("Failed to deserialize JSON to PlayerData struct");
        return false;
    }
    
    return true;
}

FStructForgeResult UStructForgeHandler::SerializeGameSettings(const FGameSettings& Settings, bool bPrettyPrint)
{
    FString JsonString;
    if (FJsonObjectConverter::UStructToJsonObjectString(Settings, JsonString, 0, 0, 0, nullptr, bPrettyPrint))
    {
        return FStructForgeResult::Success(JsonString);
    }
    
    return FStructForgeResult::Failure(EStructForgeErrorCode::TypeMismatch, TEXT("Failed to serialize game settings"));
}

bool UStructForgeHandler::DeserializeGameSettings(const FString& JsonString, FGameSettings& OutSettings, FString& OutError)
{
    if (JsonString.IsEmpty())
    {
        OutError = TEXT("JSON string is empty");
        return false;
    }
    
    if (!FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &OutSettings, 0, 0))
    {
        OutError = TEXT("Failed to deserialize JSON to GameSettings struct");
        return false;
    }
    
    return true;
}

UStructForgeJsonObject* UStructForgeHandler::CreateJsonObject()
{
    UStructForgeJsonObject* JsonWrapper = NewObject<UStructForgeJsonObject>();
    if (JsonWrapper)
    {
        JsonWrapper->SetJsonObject(MakeShareable(new FJsonObject()));
    }
    return JsonWrapper;
}

UStructForgeJsonObject* UStructForgeHandler::ParseJsonString(const FString& JsonString)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        UStructForgeJsonObject* JsonWrapper = NewObject<UStructForgeJsonObject>();
        if (JsonWrapper)
        {
            JsonWrapper->SetJsonObject(JsonObject);
            return JsonWrapper;
        }
    }
    
    return nullptr;
}

FStructForgeResult UStructForgeHandler::SaveJsonToFile(const FString& JsonString, const FString& FilePath, bool bOverwrite)
{
    if (JsonString.IsEmpty())
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::InvalidJson, TEXT("JSON string is empty"));
    }
    
    if (!bOverwrite && FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::FileSaveFailed, TEXT("File already exists and overwrite is disabled"));
    }
    
    if (!FFileHelper::SaveStringToFile(JsonString, *FilePath))
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::FileSaveFailed, FString::Printf(TEXT("Failed to save JSON to file: %s"), *FilePath));
    }
    
    UE_LOG(LogStructForge, Log, TEXT("JSON saved successfully to: %s"), *FilePath);
    return FStructForgeResult::Success(FilePath);
}

FStructForgeResult UStructForgeHandler::LoadJsonFromFile(const FString& FilePath)
{
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::FileNotFound, FString::Printf(TEXT("File not found: %s"), *FilePath));
    }
    
    FString JsonString;
    if (!FFileHelper::LoadFileToString(JsonString, *FilePath))
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::FileNotFound, FString::Printf(TEXT("Failed to load JSON from file: %s"), *FilePath));
    }
    
    if (!IsValidJsonString(JsonString))
    {
        return FStructForgeResult::Failure(EStructForgeErrorCode::InvalidJson, TEXT("Loaded file contains invalid JSON"));
    }
    
    UE_LOG(LogStructForge, Log, TEXT("JSON loaded successfully from: %s"), *FilePath);
    return FStructForgeResult::Success(JsonString);
}

bool UStructForgeHandler::SavePlayerDataToFile(const FPlayerData& PlayerData, const FString& FilePath, bool bPrettyPrint)
{
    FStructForgeResult Result = SerializePlayerData(PlayerData, bPrettyPrint);
    if (!Result.bSuccess)
    {
        return false;
    }
    
    FStructForgeResult SaveResult = SaveJsonToFile(Result.Data, FilePath, true);
    return SaveResult.bSuccess;
}

bool UStructForgeHandler::LoadPlayerDataFromFile(const FString& FilePath, FPlayerData& OutPlayerData, FString& OutError)
{
    FStructForgeResult LoadResult = LoadJsonFromFile(FilePath);
    if (!LoadResult.bSuccess)
    {
        OutError = LoadResult.ErrorMessage;
        return false;
    }
    
    return DeserializePlayerData(LoadResult.Data, OutPlayerData, OutError);
}

bool UStructForgeHandler::IsValidJsonString(const FString& JsonString)
{
    if (JsonString.IsEmpty())
    {
        return false;
    }
    
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    return FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid();
}

int32 UStructForgeHandler::GetJsonDepth(const FString& JsonString)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        return CalculateJsonDepth(JsonObject);
    }
    
    return 0;
}

void UStructForgeHandler::SerializePlayerDataAsync(const FPlayerData& PlayerData, const FString& FilePath, const FOnStructForgeAsyncComplete& OnComplete)
{
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [PlayerData, FilePath, OnComplete]()
    {
        FString JsonString;
        bool bSuccess = FJsonObjectConverter::UStructToJsonObjectString(PlayerData, JsonString, 0, 0, 0, nullptr, true);
        
        if (bSuccess)
        {
            bSuccess = FFileHelper::SaveStringToFile(JsonString, *FilePath);
        }
        
        AsyncTask(ENamedThreads::GameThread, [bSuccess, JsonString, FilePath, OnComplete]()
        {
            OnComplete.ExecuteIfBound(bSuccess, bSuccess ? FilePath : TEXT("Failed to save"));
        });
    });
}

void UStructForgeHandler::LoadPlayerDataAsync(const FString& FilePath, const FOnStructForgeAsyncComplete& OnComplete)
{
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [FilePath, OnComplete]()
    {
        FString JsonString;
        bool bSuccess = FFileHelper::LoadFileToString(JsonString, *FilePath);
        
        AsyncTask(ENamedThreads::GameThread, [bSuccess, JsonString, OnComplete]()
        {
            OnComplete.ExecuteIfBound(bSuccess, bSuccess ? JsonString : TEXT("Failed to load"));
        });
    });
}

FString UStructForgeHandler::SerializeStringArray(const TArray<FString>& StringArray, bool bPrettyPrint)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const FString& Str : StringArray)
    {
        JsonArray.Add(MakeShareable(new FJsonValueString(Str)));
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint 
        ? TJsonWriterFactory<>::Create(&OutputString)
        : TJsonWriterFactory<>::Create(&OutputString, 0);
    
    FJsonSerializer::Serialize(JsonArray, Writer);
    return OutputString;
}

bool UStructForgeHandler::DeserializeStringArray(const FString& JsonString, TArray<FString>& OutArray)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonArray))
    {
        return false;
    }
    
    OutArray.Empty();
    for (const TSharedPtr<FJsonValue>& Value : JsonArray)
    {
        FString StringValue;
        if (Value->TryGetString(StringValue))
        {
            OutArray.Add(StringValue);
        }
    }
    
    return true;
}

FString UStructForgeHandler::SerializeIntArray(const TArray<int32>& IntArray, bool bPrettyPrint)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (int32 Value : IntArray)
    {
        JsonArray.Add(MakeShareable(new FJsonValueNumber(Value)));
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint 
        ? TJsonWriterFactory<>::Create(&OutputString)
        : TJsonWriterFactory<>::Create(&OutputString, 0);
    
    FJsonSerializer::Serialize(JsonArray, Writer);
    return OutputString;
}

bool UStructForgeHandler::DeserializeIntArray(const FString& JsonString, TArray<int32>& OutArray)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonArray))
    {
        return false;
    }
    
    OutArray.Empty();
    for (const TSharedPtr<FJsonValue>& Value : JsonArray)
    {
        int32 IntValue;
        if (Value->TryGetNumber(IntValue))
        {
            OutArray.Add(IntValue);
        }
    }
    
    return true;
}

FString UStructForgeHandler::SerializeStringMap(const TMap<FString, FString>& StringMap, bool bPrettyPrint)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    
    for (const auto& Pair : StringMap)
    {
        JsonObject->SetStringField(Pair.Key, Pair.Value);
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint 
        ? TJsonWriterFactory<>::Create(&OutputString)
        : TJsonWriterFactory<>::Create(&OutputString, 0);
    
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    return OutputString;
}

bool UStructForgeHandler::DeserializeStringMap(const FString& JsonString, TMap<FString, FString>& OutMap)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return false;
    }
    
    OutMap.Empty();
    for (const auto& Pair : JsonObject->Values)
    {
        FString StringValue;
        if (Pair.Value->TryGetString(StringValue))
        {
            OutMap.Add(Pair.Key, StringValue);
        }
    }
    
    return true;
}

FString UStructForgeHandler::SerializePlayerDataArray(const TArray<FPlayerData>& Players, bool bPrettyPrint)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    
    for (const FPlayerData& Player : Players)
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        if (FJsonObjectConverter::UStructToJsonObject(FPlayerData::StaticStruct(), &Player, JsonObject.ToSharedRef(), 0, 0))
        {
            JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
        }
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint 
        ? TJsonWriterFactory<>::Create(&OutputString)
        : TJsonWriterFactory<>::Create(&OutputString, 0);
    
    FJsonSerializer::Serialize(JsonArray, Writer);
    return OutputString;
}

bool UStructForgeHandler::DeserializePlayerDataArray(const FString& JsonString, TArray<FPlayerData>& OutPlayers)
{
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonArray))
    {
        return false;
    }
    
    OutPlayers.Empty();
    for (const TSharedPtr<FJsonValue>& Value : JsonArray)
    {
        const TSharedPtr<FJsonObject>* JsonObject;
        if (Value->TryGetObject(JsonObject) && JsonObject->IsValid())
        {
            FPlayerData Player;
            if (FJsonObjectConverter::JsonObjectToUStruct(JsonObject->ToSharedRef(), FPlayerData::StaticStruct(), &Player, 0, 0))
            {
                OutPlayers.Add(Player);
            }
        }
    }
    
    return true;
}

FString UStructForgeHandler::PrettyPrintJson(const FString& JsonString)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return JsonString;
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    
    return OutputString;
}

FString UStructForgeHandler::MinifyJson(const FString& JsonString)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return JsonString;
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString, 0);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    
    return OutputString;
}

int32 UStructForgeHandler::GetJsonSize(const FString& JsonString)
{
    return JsonString.Len();
}

FString UStructForgeHandler::MergeJsonObjects(const FString& JsonA, const FString& JsonB, bool bOverwriteExisting)
{
    TSharedPtr<FJsonObject> JsonObjectA;
    TSharedPtr<FJsonObject> JsonObjectB;
    
    TSharedRef<TJsonReader<>> ReaderA = TJsonReaderFactory<>::Create(JsonA);
    TSharedRef<TJsonReader<>> ReaderB = TJsonReaderFactory<>::Create(JsonB);
    
    if (!FJsonSerializer::Deserialize(ReaderA, JsonObjectA) || !JsonObjectA.IsValid() ||
        !FJsonSerializer::Deserialize(ReaderB, JsonObjectB) || !JsonObjectB.IsValid())
    {
        return TEXT("{}");
    }
    
    TSharedPtr<FJsonObject> MergedObject = MakeShareable(new FJsonObject(*JsonObjectA));
    
    for (const auto& Pair : JsonObjectB->Values)
    {
        if (bOverwriteExisting || !MergedObject->HasField(Pair.Key))
        {
            MergedObject->SetField(Pair.Key, Pair.Value);
        }
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(MergedObject.ToSharedRef(), Writer);
    
    return OutputString;
}

bool UStructForgeHandler::SerializeUStructToJsonObjectString(const UStruct* StructDefinition, const void* Struct, FString& OutJsonString, bool bPrettyPrint)
{
    if (!StructDefinition || !Struct)
    {
        return false;
    }
    
    TSharedPtr<FJsonObject> JsonObject = UStructToJsonObject(StructDefinition, Struct);
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint
        ? TJsonWriterFactory<>::Create(&OutJsonString)
        : TJsonWriterFactory<>::Create(&OutJsonString, 0);
    
    return FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
}

bool UStructForgeHandler::DeserializeJsonObjectStringToUStruct(const FString& JsonString, const UStruct* StructDefinition, void* OutStruct)
{
    if (JsonString.IsEmpty() || !StructDefinition || !OutStruct)
    {
        return false;
    }
    
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObjectToUStruct(JsonObject, StructDefinition, OutStruct);
}

TSharedPtr<FJsonObject> UStructForgeHandler::UStructToJsonObject(const UStruct* StructDefinition, const void* Struct)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    
    if (FJsonObjectConverter::UStructToJsonObject(StructDefinition, Struct, JsonObject.ToSharedRef(), 0, 0))
    {
        return JsonObject;
    }
    
    return nullptr;
}

bool UStructForgeHandler::JsonObjectToUStruct(const TSharedPtr<FJsonObject>& JsonObject, const UStruct* StructDefinition, void* OutStruct)
{
    if (!JsonObject.IsValid() || !StructDefinition || !OutStruct)
    {
        return false;
    }
    
    return FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), StructDefinition, OutStruct, 0, 0);
}

bool UStructForgeHandler::ValidateJsonDepth(const TSharedPtr<FJsonObject>& JsonObject, int32 CurrentDepth, int32 MaxDepth)
{
    if (CurrentDepth >= MaxDepth)
    {
        return false;
    }
    
    for (const auto& Field : JsonObject->Values)
    {
        if (Field.Value->Type == EJson::Object)
        {
            const TSharedPtr<FJsonObject>* NestedObject;
            if (Field.Value->TryGetObject(NestedObject) && NestedObject->IsValid())
            {
                if (!ValidateJsonDepth(*NestedObject, CurrentDepth + 1, MaxDepth))
                {
                    return false;
                }
            }
        }
        else if (Field.Value->Type == EJson::Array)
        {
            const TArray<TSharedPtr<FJsonValue>>* ArrayField;
            if (Field.Value->TryGetArray(ArrayField))
            {
                for (const auto& ArrayElement : *ArrayField)
                {
                    if (ArrayElement->Type == EJson::Object)
                    {
                        const TSharedPtr<FJsonObject>* ArrayObject;
                        if (ArrayElement->TryGetObject(ArrayObject) && ArrayObject->IsValid())
                        {
                            if (!ValidateJsonDepth(*ArrayObject, CurrentDepth + 1, MaxDepth))
                            {
                                return false;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return true;
}

int32 UStructForgeHandler::CalculateJsonDepth(const TSharedPtr<FJsonObject>& JsonObject, int32 CurrentDepth)
{
    int32 MaxDepth = CurrentDepth;
    
    for (const auto& Field : JsonObject->Values)
    {
        if (Field.Value->Type == EJson::Object)
        {
            const TSharedPtr<FJsonObject>* NestedObject;
            if (Field.Value->TryGetObject(NestedObject) && NestedObject->IsValid())
            {
                int32 NestedDepth = CalculateJsonDepth(*NestedObject, CurrentDepth + 1);
                MaxDepth = FMath::Max(MaxDepth, NestedDepth);
            }
        }
        else if (Field.Value->Type == EJson::Array)
        {
            const TArray<TSharedPtr<FJsonValue>>* ArrayField;
            if (Field.Value->TryGetArray(ArrayField))
            {
                for (const auto& ArrayElement : *ArrayField)
                {
                    if (ArrayElement->Type == EJson::Object)
                    {
                        const TSharedPtr<FJsonObject>* ArrayObject;
                        if (ArrayElement->TryGetObject(ArrayObject) && ArrayObject->IsValid())
                        {
                            int32 ArrayDepth = CalculateJsonDepth(*ArrayObject, CurrentDepth + 1);
                            MaxDepth = FMath::Max(MaxDepth, ArrayDepth);
                        }
                    }
                }
            }
        }
    }
    
    return MaxDepth;
}

void UStructForgeHandler::ExecuteAsyncTask(TFunction<void()> Task)
{
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, Task);
}

TSharedPtr<FJsonObject> UStructForgeHandler::UStructToJsonObjectWithMetadata(const UStruct* StructDefinition, const void* Struct)
{
    if (!StructDefinition || !Struct)
    {
        return nullptr;
    }
    
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    
    // Iterate through all properties
    for (TFieldIterator<FProperty> PropIt(StructDefinition); PropIt; ++PropIt)
    {
        FProperty* Property = *PropIt;
        
        // Check if property should be serialized
        const FString* JsonSerializeMeta = Property->FindMetaData(TEXT("JsonSerialize"));
        if (JsonSerializeMeta && JsonSerializeMeta->Equals(TEXT("false"), ESearchCase::IgnoreCase))
        {
            UE_LOG(LogStructForge, Verbose, TEXT("Skipping property %s (JsonSerialize=false)"), *Property->GetName());
            continue; // Skip this property
        }
        
        // Get custom JSON field name or use property name
        const FString* JsonFieldNameMeta = Property->FindMetaData(TEXT("JsonFieldName"));
        FString FieldName = JsonFieldNameMeta && !JsonFieldNameMeta->IsEmpty() ? *JsonFieldNameMeta : Property->GetName();
        
        // Get property value pointer
        const void* ValueAddress = Property->ContainerPtrToValuePtr<const void>(Struct);
        
        // Handle different property types
        if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
        {
            if (NumericProperty->IsFloatingPoint())
            {
                double Value = NumericProperty->GetFloatingPointPropertyValue(ValueAddress);
                JsonObject->SetNumberField(FieldName, Value);
            }
            else if (NumericProperty->IsInteger())
            {
                int64 Value = NumericProperty->GetSignedIntPropertyValue(ValueAddress);
                JsonObject->SetNumberField(FieldName, Value);
            }
        }
        else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
        {
            bool Value = BoolProperty->GetPropertyValue(ValueAddress);
            JsonObject->SetBoolField(FieldName, Value);
        }
        else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
        {
            FString Value = StringProperty->GetPropertyValue(ValueAddress);
            JsonObject->SetStringField(FieldName, Value);
        }
        else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
        {
            FName Value = NameProperty->GetPropertyValue(ValueAddress);
            JsonObject->SetStringField(FieldName, Value.ToString());
        }
        else if (FTextProperty* TextProperty = CastField<FTextProperty>(Property))
        {
            FText Value = TextProperty->GetPropertyValue(ValueAddress);
            JsonObject->SetStringField(FieldName, Value.ToString());
        }
        else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
        {
            FScriptArrayHelper ArrayHelper(ArrayProperty, ValueAddress);
            TArray<TSharedPtr<FJsonValue>> JsonArray;
            
            for (int32 i = 0; i < ArrayHelper.Num(); ++i)
            {
                const void* ElementValue = ArrayHelper.GetRawPtr(i);
                
                // Handle array element based on inner property type
                if (FNumericProperty* InnerNumeric = CastField<FNumericProperty>(ArrayProperty->Inner))
                {
                    if (InnerNumeric->IsFloatingPoint())
                    {
                        double Value = InnerNumeric->GetFloatingPointPropertyValue(ElementValue);
                        JsonArray.Add(MakeShareable(new FJsonValueNumber(Value)));
                    }
                    else
                    {
                        int64 Value = InnerNumeric->GetSignedIntPropertyValue(ElementValue);
                        JsonArray.Add(MakeShareable(new FJsonValueNumber(Value)));
                    }
                }
                else if (FBoolProperty* InnerBool = CastField<FBoolProperty>(ArrayProperty->Inner))
                {
                    bool Value = InnerBool->GetPropertyValue(ElementValue);
                    JsonArray.Add(MakeShareable(new FJsonValueBoolean(Value)));
                }
                else if (FStrProperty* InnerString = CastField<FStrProperty>(ArrayProperty->Inner))
                {
                    FString Value = InnerString->GetPropertyValue(ElementValue);
                    JsonArray.Add(MakeShareable(new FJsonValueString(Value)));
                }
                else if (FStructProperty* InnerStruct = CastField<FStructProperty>(ArrayProperty->Inner))
                {
                    TSharedPtr<FJsonObject> InnerJsonObject = UStructToJsonObjectWithMetadata(InnerStruct->Struct, ElementValue);
                    if (InnerJsonObject.IsValid())
                    {
                        JsonArray.Add(MakeShareable(new FJsonValueObject(InnerJsonObject)));
                    }
                }
            }
            
            JsonObject->SetArrayField(FieldName, JsonArray);
        }
        else if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
        {
            // Recursively handle nested structs
            TSharedPtr<FJsonObject> NestedJsonObject = UStructToJsonObjectWithMetadata(StructProperty->Struct, ValueAddress);
            if (NestedJsonObject.IsValid())
            {
                JsonObject->SetObjectField(FieldName, NestedJsonObject);
            }
        }
        else if (FMapProperty* MapProperty = CastField<FMapProperty>(Property))
        {
            // Handle map properties
            FScriptMapHelper MapHelper(MapProperty, ValueAddress);
            TSharedPtr<FJsonObject> MapJsonObject = MakeShareable(new FJsonObject);
            
            for (int32 i = 0; i < MapHelper.Num(); ++i)
            {
                const void* KeyValue = MapHelper.GetKeyPtr(i);
                const void* MapValue = MapHelper.GetValuePtr(i);
                
                // For simplicity, assuming string keys
                if (FStrProperty* KeyProp = CastField<FStrProperty>(MapProperty->KeyProp))
                {
                    FString Key = KeyProp->GetPropertyValue(KeyValue);
                    
                    if (FStrProperty* ValueProp = CastField<FStrProperty>(MapProperty->ValueProp))
                    {
                        FString Value = ValueProp->GetPropertyValue(MapValue);
                        MapJsonObject->SetStringField(Key, Value);
                    }
                    else if (FNumericProperty* NumValueProp = CastField<FNumericProperty>(MapProperty->ValueProp))
                    {
                        if (NumValueProp->IsFloatingPoint())
                        {
                            double Value = NumValueProp->GetFloatingPointPropertyValue(MapValue);
                            MapJsonObject->SetNumberField(Key, Value);
                        }
                        else
                        {
                            int64 Value = NumValueProp->GetSignedIntPropertyValue(MapValue);
                            MapJsonObject->SetNumberField(Key, Value);
                        }
                    }
                }
            }
            
            JsonObject->SetObjectField(FieldName, MapJsonObject);
        }
        
        UE_LOG(LogStructForge, Verbose, TEXT("Serialized property %s as JSON field %s"), *Property->GetName(), *FieldName);
    }
    
    return JsonObject;
}

bool UStructForgeHandler::SerializeUStructToJsonObjectStringWithMetadata(const UStruct* StructDefinition, const void* Struct, FString& OutJsonString, bool bPrettyPrint)
{
    TSharedPtr<FJsonObject> JsonObject = UStructToJsonObjectWithMetadata(StructDefinition, Struct);
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint 
        ? TJsonWriterFactory<>::Create(&OutJsonString)
        : TJsonWriterFactory<>::Create(&OutJsonString, 0);
    
    return FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
}

bool UStructForgeHandler::JsonObjectToUStructWithMetadata(const TSharedPtr<FJsonObject>& JsonObject, const UStruct* StructDefinition, void* OutStruct)
{
    if (!JsonObject.IsValid() || !StructDefinition || !OutStruct)
    {
        return false;
    }
    
    // Clear the struct first
    StructDefinition->InitializeStruct(OutStruct);
    
    // Iterate through all properties in the struct
    for (TFieldIterator<FProperty> PropIt(StructDefinition); PropIt; ++PropIt)
    {
        FProperty* Property = *PropIt;
        
        // Check if property should be deserialized
        const FString* JsonSerializeMeta = Property->FindMetaData(TEXT("JsonSerialize"));
        if (JsonSerializeMeta && JsonSerializeMeta->Equals(TEXT("false"), ESearchCase::IgnoreCase))
        {
            UE_LOG(LogStructForge, Verbose, TEXT("Skipping deserialization of property %s (JsonSerialize=false)"), *Property->GetName());
            continue;
        }
        
        // Get custom JSON field name or use property name
        const FString* JsonFieldNameMeta = Property->FindMetaData(TEXT("JsonFieldName"));
        FString FieldName = JsonFieldNameMeta && !JsonFieldNameMeta->IsEmpty() ? *JsonFieldNameMeta : Property->GetName();
        
        // Check if JSON has this field
        if (!JsonObject->HasField(FieldName))
        {
            UE_LOG(LogStructForge, Verbose, TEXT("JSON does not have field %s for property %s"), *FieldName, *Property->GetName());
            continue;
        }
        
        // Get property value pointer
        void* ValueAddress = Property->ContainerPtrToValuePtr<void>(OutStruct);
        TSharedPtr<FJsonValue> JsonValue = JsonObject->TryGetField(FieldName);
        
        if (!JsonValue.IsValid())
        {
            continue;
        }
        
        // Handle different property types
        if (FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
        {
            double NumValue;
            if (JsonValue->TryGetNumber(NumValue))
            {
                if (NumericProperty->IsFloatingPoint())
                {
                    NumericProperty->SetFloatingPointPropertyValue(ValueAddress, NumValue);
                }
                else if (NumericProperty->IsInteger())
                {
                    NumericProperty->SetIntPropertyValue(ValueAddress, (int64)NumValue);
                }
            }
        }
        else if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property))
        {
            bool BoolValue;
            if (JsonValue->TryGetBool(BoolValue))
            {
                BoolProperty->SetPropertyValue(ValueAddress, BoolValue);
            }
        }
        else if (FStrProperty* StringProperty = CastField<FStrProperty>(Property))
        {
            FString StringValue;
            if (JsonValue->TryGetString(StringValue))
            {
                StringProperty->SetPropertyValue(ValueAddress, StringValue);
            }
        }
        else if (FNameProperty* NameProperty = CastField<FNameProperty>(Property))
        {
            FString StringValue;
            if (JsonValue->TryGetString(StringValue))
            {
                NameProperty->SetPropertyValue(ValueAddress, FName(*StringValue));
            }
        }
        else if (FTextProperty* TextProperty = CastField<FTextProperty>(Property))
        {
            FString StringValue;
            if (JsonValue->TryGetString(StringValue))
            {
                TextProperty->SetPropertyValue(ValueAddress, FText::FromString(StringValue));
            }
        }
        else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
        {
            const TArray<TSharedPtr<FJsonValue>>* JsonArray;
            if (JsonValue->TryGetArray(JsonArray))
            {
                FScriptArrayHelper ArrayHelper(ArrayProperty, ValueAddress);
                ArrayHelper.EmptyAndAddValues(JsonArray->Num());
                
                for (int32 i = 0; i < JsonArray->Num(); ++i)
                {
                    void* ElementValue = ArrayHelper.GetRawPtr(i);
                    const TSharedPtr<FJsonValue>& ArrayElement = (*JsonArray)[i];
                    
                    if (FNumericProperty* InnerNumeric = CastField<FNumericProperty>(ArrayProperty->Inner))
                    {
                        double NumValue;
                        if (ArrayElement->TryGetNumber(NumValue))
                        {
                            if (InnerNumeric->IsFloatingPoint())
                            {
                                InnerNumeric->SetFloatingPointPropertyValue(ElementValue, NumValue);
                            }
                            else
                            {
                                InnerNumeric->SetIntPropertyValue(ElementValue, (int64)NumValue);
                            }
                        }
                    }
                    else if (FBoolProperty* InnerBool = CastField<FBoolProperty>(ArrayProperty->Inner))
                    {
                        bool BoolValue;
                        if (ArrayElement->TryGetBool(BoolValue))
                        {
                            InnerBool->SetPropertyValue(ElementValue, BoolValue);
                        }
                    }
                    else if (FStrProperty* InnerString = CastField<FStrProperty>(ArrayProperty->Inner))
                    {
                        FString StringValue;
                        if (ArrayElement->TryGetString(StringValue))
                        {
                            InnerString->SetPropertyValue(ElementValue, StringValue);
                        }
                    }
                    else if (FStructProperty* InnerStruct = CastField<FStructProperty>(ArrayProperty->Inner))
                    {
                        const TSharedPtr<FJsonObject>* InnerJsonObject;
                        if (ArrayElement->TryGetObject(InnerJsonObject))
                        {
                            JsonObjectToUStructWithMetadata(*InnerJsonObject, InnerStruct->Struct, ElementValue);
                        }
                    }
                }
            }
        }
        else if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
        {
            const TSharedPtr<FJsonObject>* NestedJsonObject;
            if (JsonValue->TryGetObject(NestedJsonObject))
            {
                JsonObjectToUStructWithMetadata(*NestedJsonObject, StructProperty->Struct, ValueAddress);
            }
        }
        else if (FMapProperty* MapProperty = CastField<FMapProperty>(Property))
        {
            const TSharedPtr<FJsonObject>* MapJsonObject;
            if (JsonValue->TryGetObject(MapJsonObject))
            {
                FScriptMapHelper MapHelper(MapProperty, ValueAddress);
                MapHelper.EmptyValues();
                
                for (const auto& Pair : (*MapJsonObject)->Values)
                {
                    // Assuming string keys
                    if (FStrProperty* KeyProp = CastField<FStrProperty>(MapProperty->KeyProp))
                    {
                        int32 NewIndex = MapHelper.AddDefaultValue_Invalid_NeedsRehash();
                        MapHelper.Rehash();
                        
                        void* KeyValue = MapHelper.GetKeyPtr(NewIndex);
                        void* MapValue = MapHelper.GetValuePtr(NewIndex);
                        
                        KeyProp->SetPropertyValue(KeyValue, Pair.Key);
                        
                        if (FStrProperty* ValueProp = CastField<FStrProperty>(MapProperty->ValueProp))
                        {
                            FString StringValue;
                            if (Pair.Value->TryGetString(StringValue))
                            {
                                ValueProp->SetPropertyValue(MapValue, StringValue);
                            }
                        }
                        else if (FNumericProperty* NumValueProp = CastField<FNumericProperty>(MapProperty->ValueProp))
                        {
                            double NumValue;
                            if (Pair.Value->TryGetNumber(NumValue))
                            {
                                if (NumValueProp->IsFloatingPoint())
                                {
                                    NumValueProp->SetFloatingPointPropertyValue(MapValue, NumValue);
                                }
                                else
                                {
                                    NumValueProp->SetIntPropertyValue(MapValue, (int64)NumValue);
                                }
                            }
                        }
                    }
                }
            }
        }
        
        UE_LOG(LogStructForge, Verbose, TEXT("Deserialized JSON field %s to property %s"), *FieldName, *Property->GetName());
    }
    
    return true;
}

bool UStructForgeHandler::DeserializeJsonObjectStringToUStructWithMetadata(const FString& JsonString, const UStruct* StructDefinition, void* OutStruct)
{
    if (JsonString.IsEmpty() || !StructDefinition || !OutStruct)
    {
        return false;
    }
    
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObjectToUStructWithMetadata(JsonObject, StructDefinition, OutStruct);
}