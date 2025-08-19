#include "StructForgeJsonObject.h"
#include "STRUCTFORGE.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

UStructForgeJsonObject::UStructForgeJsonObject()
{
    JsonObject = MakeShareable(new FJsonObject());
}

void UStructForgeJsonObject::SetJsonObject(TSharedPtr<FJsonObject> InJsonObject)
{
    if (InJsonObject.IsValid())
    {
        JsonObject = InJsonObject;
    }
}

TSharedPtr<FJsonObject> UStructForgeJsonObject::GetJsonObject() const
{
    return JsonObject;
}

bool UStructForgeJsonObject::IsValid() const
{
    return JsonObject.IsValid();
}

FString UStructForgeJsonObject::ToString(bool bPrettyPrint) const
{
    if (!JsonObject.IsValid())
    {
        return TEXT("{}");
    }
    
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = bPrettyPrint
        ? TJsonWriterFactory<>::Create(&OutputString)
        : TJsonWriterFactory<>::Create(&OutputString, 0);
    
    if (FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
    {
        return OutputString;
    }
    
    return TEXT("{}");
}

void UStructForgeJsonObject::Clear()
{
    if (JsonObject.IsValid())
    {
        JsonObject->Values.Empty();
    }
}

int32 UStructForgeJsonObject::GetFieldCount() const
{
    if (!JsonObject.IsValid())
    {
        return 0;
    }
    
    return JsonObject->Values.Num();
}

bool UStructForgeJsonObject::HasField(const FString& FieldName) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObject->HasField(FieldName);
}

void UStructForgeJsonObject::RemoveField(const FString& FieldName)
{
    if (JsonObject.IsValid())
    {
        JsonObject->RemoveField(FieldName);
    }
}

TArray<FString> UStructForgeJsonObject::GetFieldNames() const
{
    TArray<FString> FieldNames;
    
    if (JsonObject.IsValid())
    {
        for (const auto& Field : JsonObject->Values)
        {
            FieldNames.Add(Field.Key);
        }
    }
    
    return FieldNames;
}

void UStructForgeJsonObject::CopyFrom(const UStructForgeJsonObject* Other)
{
    if (!Other || !Other->IsValid())
    {
        return;
    }
    
    JsonObject = MakeShareable(new FJsonObject(*Other->GetJsonObject()));
}

void UStructForgeJsonObject::MergeWith(const UStructForgeJsonObject* Other, bool bOverwriteExisting)
{
    if (!Other || !Other->IsValid() || !JsonObject.IsValid())
    {
        return;
    }
    
    TSharedPtr<FJsonObject> OtherObject = Other->GetJsonObject();
    for (const auto& Field : OtherObject->Values)
    {
        if (bOverwriteExisting || !JsonObject->HasField(Field.Key))
        {
            JsonObject->SetField(Field.Key, Field.Value);
        }
    }
}

UStructForgeJsonObject* UStructForgeJsonObject::Clone() const
{
    UStructForgeJsonObject* ClonedObject = NewObject<UStructForgeJsonObject>();
    if (ClonedObject && JsonObject.IsValid())
    {
        ClonedObject->SetJsonObject(MakeShareable(new FJsonObject(*JsonObject)));
    }
    return ClonedObject;
}

void UStructForgeJsonObject::SetStringField(const FString& FieldName, const FString& StringValue)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetStringField(FieldName, StringValue);
    }
}

void UStructForgeJsonObject::SetNumberField(const FString& FieldName, double NumberValue)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetNumberField(FieldName, NumberValue);
    }
}

void UStructForgeJsonObject::SetBoolField(const FString& FieldName, bool BoolValue)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetBoolField(FieldName, BoolValue);
    }
}

void UStructForgeJsonObject::SetObjectField(const FString& FieldName, const UStructForgeJsonObject* InJsonObject)
{
    if (JsonObject.IsValid() && InJsonObject && InJsonObject->IsValid())
    {
        JsonObject->SetObjectField(FieldName, InJsonObject->GetJsonObject());
    }
}

void UStructForgeJsonObject::SetArrayField(const FString& FieldName, const TArray<TSharedPtr<FJsonValue>>& Array)
{
    if (JsonObject.IsValid())
    {
        JsonObject->SetArrayField(FieldName, Array);
    }
}

bool UStructForgeJsonObject::TryGetStringField(const FString& FieldName, FString& OutString) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetStringField(FieldName, OutString);
}

bool UStructForgeJsonObject::TryGetNumberField(const FString& FieldName, double& OutNumber) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetNumberField(FieldName, OutNumber);
}

bool UStructForgeJsonObject::TryGetBoolField(const FString& FieldName, bool& OutBool) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetBoolField(FieldName, OutBool);
}

bool UStructForgeJsonObject::TryGetObjectField(const FString& FieldName, UStructForgeJsonObject*& OutObject) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    const TSharedPtr<FJsonObject>* FieldObject;
    if (JsonObject->TryGetObjectField(FieldName, FieldObject))
    {
        OutObject = NewObject<UStructForgeJsonObject>();
        if (OutObject)
        {
            OutObject->SetJsonObject(*FieldObject);
            return true;
        }
    }
    
    return false;
}

bool UStructForgeJsonObject::TryGetArrayField(const FString& FieldName, TArray<TSharedPtr<FJsonValue>>& OutArray) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    const TArray<TSharedPtr<FJsonValue>>* ArrayField;
    if (JsonObject->TryGetArrayField(FieldName, ArrayField))
    {
        OutArray = *ArrayField;
        return true;
    }
    
    return false;
}

void UStructForgeJsonObject::SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray)
{
    if (!JsonObject.IsValid())
    {
        return;
    }
    
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const FString& Str : StringArray)
    {
        JsonArray.Add(MakeShareable(new FJsonValueString(Str)));
    }
    
    JsonObject->SetArrayField(FieldName, JsonArray);
}

void UStructForgeJsonObject::SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray)
{
    if (!JsonObject.IsValid())
    {
        return;
    }
    
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (float Number : NumberArray)
    {
        JsonArray.Add(MakeShareable(new FJsonValueNumber(Number)));
    }
    
    JsonObject->SetArrayField(FieldName, JsonArray);
}

void UStructForgeJsonObject::SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray)
{
    if (!JsonObject.IsValid())
    {
        return;
    }
    
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (bool BoolValue : BoolArray)
    {
        JsonArray.Add(MakeShareable(new FJsonValueBoolean(BoolValue)));
    }
    
    JsonObject->SetArrayField(FieldName, JsonArray);
}

bool UStructForgeJsonObject::TryGetStringArrayField(const FString& FieldName, TArray<FString>& OutStringArray) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    const TArray<TSharedPtr<FJsonValue>>* ArrayField;
    if (JsonObject->TryGetArrayField(FieldName, ArrayField))
    {
        OutStringArray.Empty();
        for (const TSharedPtr<FJsonValue>& Value : *ArrayField)
        {
            FString StringValue;
            if (Value->TryGetString(StringValue))
            {
                OutStringArray.Add(StringValue);
            }
        }
        return true;
    }
    
    return false;
}

bool UStructForgeJsonObject::TryGetNumberArrayField(const FString& FieldName, TArray<float>& OutNumberArray) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    const TArray<TSharedPtr<FJsonValue>>* ArrayField;
    if (JsonObject->TryGetArrayField(FieldName, ArrayField))
    {
        OutNumberArray.Empty();
        for (const TSharedPtr<FJsonValue>& Value : *ArrayField)
        {
            double NumberValue;
            if (Value->TryGetNumber(NumberValue))
            {
                OutNumberArray.Add(static_cast<float>(NumberValue));
            }
        }
        return true;
    }
    
    return false;
}

bool UStructForgeJsonObject::TryGetBoolArrayField(const FString& FieldName, TArray<bool>& OutBoolArray) const
{
    if (!JsonObject.IsValid())
    {
        return false;
    }
    
    const TArray<TSharedPtr<FJsonValue>>* ArrayField;
    if (JsonObject->TryGetArrayField(FieldName, ArrayField))
    {
        OutBoolArray.Empty();
        for (const TSharedPtr<FJsonValue>& Value : *ArrayField)
        {
            bool BoolValue;
            if (Value->TryGetBool(BoolValue))
            {
                OutBoolArray.Add(BoolValue);
            }
        }
        return true;
    }
    
    return false;
}

UStructForgeJsonObject* UStructForgeJsonObject::CreateFromJsonString(const FString& JsonString)
{
    TSharedPtr<FJsonObject> ParsedObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    
    if (FJsonSerializer::Deserialize(Reader, ParsedObject) && ParsedObject.IsValid())
    {
        UStructForgeJsonObject* JsonWrapper = NewObject<UStructForgeJsonObject>();
        if (JsonWrapper)
        {
            JsonWrapper->SetJsonObject(ParsedObject);
            return JsonWrapper;
        }
    }
    
    return nullptr;
}

UStructForgeJsonObject* UStructForgeJsonObject::CreateEmpty()
{
    UStructForgeJsonObject* JsonWrapper = NewObject<UStructForgeJsonObject>();
    if (JsonWrapper)
    {
        JsonWrapper->SetJsonObject(MakeShareable(new FJsonObject()));
    }
    return JsonWrapper;
}