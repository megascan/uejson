#include "StructForgeBlueprintLibrary.h"
#include "StructForgeJsonObject.h"
#include "StructForgeHandler.h"
#include "StructForgeConfig.h"
#include "STRUCTFORGE.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"

UStructForgeJsonObject* UStructForgeBlueprintLibrary::CreateJsonObject()
{
    return UStructForgeJsonObject::CreateEmpty();
}

bool UStructForgeBlueprintLibrary::ParseJsonString(const FString& JsonString, UStructForgeJsonObject*& OutJsonObject)
{
    OutJsonObject = UStructForgeJsonObject::CreateFromJsonString(JsonString);
    return OutJsonObject != nullptr && OutJsonObject->IsValid();
}

FString UStructForgeBlueprintLibrary::JsonObjectToString(const UStructForgeJsonObject* JsonObject, bool bPrettyPrint)
{
    if (!JsonObject)
    {
        return TEXT("{}");
    }
    
    return JsonObject->ToString(bPrettyPrint);
}

FString UStructForgeBlueprintLibrary::GetJsonString(const UStructForgeJsonObject* JsonObject, const FString& Key, const FString& DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    FString Value;
    if (JsonObject->TryGetStringField(Key, Value))
    {
        bFound = true;
        return Value;
    }
    
    return DefaultValue;
}

int32 UStructForgeBlueprintLibrary::GetJsonInt(const UStructForgeJsonObject* JsonObject, const FString& Key, int32 DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    double Value;
    if (JsonObject->TryGetNumberField(Key, Value))
    {
        bFound = true;
        return FMath::RoundToInt(Value);
    }
    
    return DefaultValue;
}

float UStructForgeBlueprintLibrary::GetJsonFloat(const UStructForgeJsonObject* JsonObject, const FString& Key, float DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    double Value;
    if (JsonObject->TryGetNumberField(Key, Value))
    {
        bFound = true;
        return static_cast<float>(Value);
    }
    
    return DefaultValue;
}

bool UStructForgeBlueprintLibrary::GetJsonBool(const UStructForgeJsonObject* JsonObject, const FString& Key, bool DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    bool Value;
    if (JsonObject->TryGetBoolField(Key, Value))
    {
        bFound = true;
        return Value;
    }
    
    return DefaultValue;
}

FText UStructForgeBlueprintLibrary::GetJsonText(const UStructForgeJsonObject* JsonObject, const FString& Key, const FText& DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    FString Value;
    if (JsonObject->TryGetStringField(Key, Value))
    {
        bFound = true;
        return FText::FromString(Value);
    }
    
    return DefaultValue;
}

FVector UStructForgeBlueprintLibrary::GetJsonVector(const UStructForgeJsonObject* JsonObject, const FString& Key, const FVector& DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    UStructForgeJsonObject* VectorObject = nullptr;
    if (JsonObject->TryGetObjectField(Key, VectorObject) && VectorObject)
    {
        double X, Y, Z;
        if (VectorObject->TryGetNumberField(TEXT("X"), X) &&
            VectorObject->TryGetNumberField(TEXT("Y"), Y) &&
            VectorObject->TryGetNumberField(TEXT("Z"), Z))
        {
            bFound = true;
            return FVector(X, Y, Z);
        }
    }
    
    return DefaultValue;
}

FRotator UStructForgeBlueprintLibrary::GetJsonRotator(const UStructForgeJsonObject* JsonObject, const FString& Key, const FRotator& DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    UStructForgeJsonObject* RotatorObject = nullptr;
    if (JsonObject->TryGetObjectField(Key, RotatorObject) && RotatorObject)
    {
        double Pitch, Yaw, Roll;
        if (RotatorObject->TryGetNumberField(TEXT("Pitch"), Pitch) &&
            RotatorObject->TryGetNumberField(TEXT("Yaw"), Yaw) &&
            RotatorObject->TryGetNumberField(TEXT("Roll"), Roll))
        {
            bFound = true;
            return FRotator(Pitch, Yaw, Roll);
        }
    }
    
    return DefaultValue;
}

FTransform UStructForgeBlueprintLibrary::GetJsonTransform(const UStructForgeJsonObject* JsonObject, const FString& Key, const FTransform& DefaultValue, bool& bFound)
{
    bFound = false;
    if (!JsonObject || !JsonObject->IsValid())
    {
        return DefaultValue;
    }
    
    UStructForgeJsonObject* TransformObject = nullptr;
    if (JsonObject->TryGetObjectField(Key, TransformObject) && TransformObject)
    {
        bool bLocationFound, bRotationFound, bScaleFound;
        FVector Location = GetJsonVector(TransformObject, TEXT("Location"), FVector::ZeroVector, bLocationFound);
        FRotator Rotation = GetJsonRotator(TransformObject, TEXT("Rotation"), FRotator::ZeroRotator, bRotationFound);
        FVector Scale = GetJsonVector(TransformObject, TEXT("Scale"), FVector::OneVector, bScaleFound);
        
        if (bLocationFound || bRotationFound || bScaleFound)
        {
            bFound = true;
            return FTransform(Rotation, Location, Scale);
        }
    }
    
    return DefaultValue;
}

void UStructForgeBlueprintLibrary::SetJsonString(UStructForgeJsonObject* JsonObject, const FString& Key, const FString& Value)
{
    if (JsonObject)
    {
        JsonObject->SetStringField(Key, Value);
    }
}

void UStructForgeBlueprintLibrary::SetJsonInt(UStructForgeJsonObject* JsonObject, const FString& Key, int32 Value)
{
    if (JsonObject)
    {
        JsonObject->SetNumberField(Key, static_cast<double>(Value));
    }
}

void UStructForgeBlueprintLibrary::SetJsonFloat(UStructForgeJsonObject* JsonObject, const FString& Key, float Value)
{
    if (JsonObject)
    {
        JsonObject->SetNumberField(Key, static_cast<double>(Value));
    }
}

void UStructForgeBlueprintLibrary::SetJsonBool(UStructForgeJsonObject* JsonObject, const FString& Key, bool Value)
{
    if (JsonObject)
    {
        JsonObject->SetBoolField(Key, Value);
    }
}

void UStructForgeBlueprintLibrary::SetJsonText(UStructForgeJsonObject* JsonObject, const FString& Key, const FText& Value)
{
    if (JsonObject)
    {
        JsonObject->SetStringField(Key, Value.ToString());
    }
}

void UStructForgeBlueprintLibrary::SetJsonVector(UStructForgeJsonObject* JsonObject, const FString& Key, const FVector& Value)
{
    if (!JsonObject)
    {
        return;
    }
    
    UStructForgeJsonObject* VectorObject = CreateJsonObject();
    if (VectorObject)
    {
        VectorObject->SetNumberField(TEXT("X"), Value.X);
        VectorObject->SetNumberField(TEXT("Y"), Value.Y);
        VectorObject->SetNumberField(TEXT("Z"), Value.Z);
        JsonObject->SetObjectField(Key, VectorObject);
    }
}

void UStructForgeBlueprintLibrary::SetJsonRotator(UStructForgeJsonObject* JsonObject, const FString& Key, const FRotator& Value)
{
    if (!JsonObject)
    {
        return;
    }
    
    UStructForgeJsonObject* RotatorObject = CreateJsonObject();
    if (RotatorObject)
    {
        RotatorObject->SetNumberField(TEXT("Pitch"), Value.Pitch);
        RotatorObject->SetNumberField(TEXT("Yaw"), Value.Yaw);
        RotatorObject->SetNumberField(TEXT("Roll"), Value.Roll);
        JsonObject->SetObjectField(Key, RotatorObject);
    }
}

void UStructForgeBlueprintLibrary::SetJsonTransform(UStructForgeJsonObject* JsonObject, const FString& Key, const FTransform& Value)
{
    if (!JsonObject)
    {
        return;
    }
    
    UStructForgeJsonObject* TransformObject = CreateJsonObject();
    if (TransformObject)
    {
        SetJsonVector(TransformObject, TEXT("Location"), Value.GetLocation());
        SetJsonRotator(TransformObject, TEXT("Rotation"), Value.Rotator());
        SetJsonVector(TransformObject, TEXT("Scale"), Value.GetScale3D());
        JsonObject->SetObjectField(Key, TransformObject);
    }
}

bool UStructForgeBlueprintLibrary::GetJsonStringArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<FString>& OutArray)
{
    if (!JsonObject || !JsonObject->IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetStringArrayField(Key, OutArray);
}

void UStructForgeBlueprintLibrary::SetJsonStringArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<FString>& Array)
{
    if (JsonObject)
    {
        JsonObject->SetStringArrayField(Key, Array);
    }
}

bool UStructForgeBlueprintLibrary::GetJsonIntArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<int32>& OutArray)
{
    if (!JsonObject || !JsonObject->IsValid())
    {
        return false;
    }
    
    TArray<float> FloatArray;
    if (JsonObject->TryGetNumberArrayField(Key, FloatArray))
    {
        OutArray.Empty();
        for (float Value : FloatArray)
        {
            OutArray.Add(FMath::RoundToInt(Value));
        }
        return true;
    }
    
    return false;
}

void UStructForgeBlueprintLibrary::SetJsonIntArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<int32>& Array)
{
    if (JsonObject)
    {
        TArray<float> FloatArray;
        for (int32 Value : Array)
        {
            FloatArray.Add(static_cast<float>(Value));
        }
        JsonObject->SetNumberArrayField(Key, FloatArray);
    }
}

bool UStructForgeBlueprintLibrary::GetJsonFloatArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<float>& OutArray)
{
    if (!JsonObject || !JsonObject->IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetNumberArrayField(Key, OutArray);
}

void UStructForgeBlueprintLibrary::SetJsonFloatArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<float>& Array)
{
    if (JsonObject)
    {
        JsonObject->SetNumberArrayField(Key, Array);
    }
}

bool UStructForgeBlueprintLibrary::GetJsonBoolArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<bool>& OutArray)
{
    if (!JsonObject || !JsonObject->IsValid())
    {
        return false;
    }
    
    return JsonObject->TryGetBoolArrayField(Key, OutArray);
}

void UStructForgeBlueprintLibrary::SetJsonBoolArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<bool>& Array)
{
    if (JsonObject)
    {
        JsonObject->SetBoolArrayField(Key, Array);
    }
}

bool UStructForgeBlueprintLibrary::PlayerDataToJson(const FPlayerData& PlayerData, FString& OutJsonString, bool bPrettyPrint)
{
    FStructForgeResult Result = UStructForgeHandler::SerializePlayerData(PlayerData, bPrettyPrint);
    if (Result.bSuccess)
    {
        OutJsonString = Result.Data;
        return true;
    }
    
    OutJsonString = TEXT("{}");
    return false;
}

bool UStructForgeBlueprintLibrary::JsonToPlayerData(const FString& JsonString, FPlayerData& OutPlayerData)
{
    FString Error;
    return UStructForgeHandler::DeserializePlayerData(JsonString, OutPlayerData, Error);
}

bool UStructForgeBlueprintLibrary::GameSettingsToJson(const FGameSettings& Settings, FString& OutJsonString, bool bPrettyPrint)
{
    FStructForgeResult Result = UStructForgeHandler::SerializeGameSettings(Settings, bPrettyPrint);
    if (Result.bSuccess)
    {
        OutJsonString = Result.Data;
        return true;
    }
    
    OutJsonString = TEXT("{}");
    return false;
}

bool UStructForgeBlueprintLibrary::JsonToGameSettings(const FString& JsonString, FGameSettings& OutSettings)
{
    FString Error;
    return UStructForgeHandler::DeserializeGameSettings(JsonString, OutSettings, Error);
}

bool UStructForgeBlueprintLibrary::InventoryItemToJson(const FInventoryItem& Item, FString& OutJsonString, bool bPrettyPrint)
{
    return FJsonObjectConverter::UStructToJsonObjectString(Item, OutJsonString, 0, 0, 0, nullptr, bPrettyPrint);
}

bool UStructForgeBlueprintLibrary::JsonToInventoryItem(const FString& JsonString, FInventoryItem& OutItem)
{
    return FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &OutItem, 0, 0);
}

bool UStructForgeBlueprintLibrary::SaveJsonToFile(const FString& JsonString, const FString& FilePath)
{
    FStructForgeResult Result = UStructForgeHandler::SaveJsonToFile(JsonString, FilePath, true);
    return Result.bSuccess;
}

bool UStructForgeBlueprintLibrary::LoadJsonFromFile(const FString& FilePath, FString& OutJsonString)
{
    FStructForgeResult Result = UStructForgeHandler::LoadJsonFromFile(FilePath);
    if (Result.bSuccess)
    {
        OutJsonString = Result.Data;
        return true;
    }
    
    OutJsonString = TEXT("");
    return false;
}

bool UStructForgeBlueprintLibrary::SavePlayerDataToFile(const FPlayerData& PlayerData, const FString& FilePath, bool bPrettyPrint)
{
    return UStructForgeHandler::SavePlayerDataToFile(PlayerData, FilePath, bPrettyPrint);
}

bool UStructForgeBlueprintLibrary::LoadPlayerDataFromFile(const FString& FilePath, FPlayerData& OutPlayerData)
{
    FString Error;
    return UStructForgeHandler::LoadPlayerDataFromFile(FilePath, OutPlayerData, Error);
}

bool UStructForgeBlueprintLibrary::SaveGameSettingsToFile(const FGameSettings& Settings, const FString& FilePath, bool bPrettyPrint)
{
    FStructForgeResult Result = UStructForgeHandler::SerializeGameSettings(Settings, bPrettyPrint);
    if (!Result.bSuccess)
    {
        return false;
    }
    
    FStructForgeResult SaveResult = UStructForgeHandler::SaveJsonToFile(Result.Data, FilePath, true);
    return SaveResult.bSuccess;
}

bool UStructForgeBlueprintLibrary::LoadGameSettingsFromFile(const FString& FilePath, FGameSettings& OutSettings)
{
    FStructForgeResult LoadResult = UStructForgeHandler::LoadJsonFromFile(FilePath);
    if (!LoadResult.bSuccess)
    {
        return false;
    }
    
    FString Error;
    return UStructForgeHandler::DeserializeGameSettings(LoadResult.Data, OutSettings, Error);
}

bool UStructForgeBlueprintLibrary::IsValidJson(const FString& JsonString)
{
    return UStructForgeHandler::IsValidJsonString(JsonString);
}

TArray<FString> UStructForgeBlueprintLibrary::GetAllJsonKeys(const UStructForgeJsonObject* JsonObject)
{
    if (!JsonObject)
    {
        return TArray<FString>();
    }
    
    return JsonObject->GetFieldNames();
}

bool UStructForgeBlueprintLibrary::HasJsonKey(const UStructForgeJsonObject* JsonObject, const FString& Key)
{
    if (!JsonObject)
    {
        return false;
    }
    
    return JsonObject->HasField(Key);
}

bool UStructForgeBlueprintLibrary::RemoveJsonKey(UStructForgeJsonObject* JsonObject, const FString& Key)
{
    if (!JsonObject || !JsonObject->HasField(Key))
    {
        return false;
    }
    
    JsonObject->RemoveField(Key);
    return true;
}

UStructForgeJsonObject* UStructForgeBlueprintLibrary::MergeJsonObjects(const UStructForgeJsonObject* JsonA, const UStructForgeJsonObject* JsonB, bool bOverwriteExisting)
{
    if (!JsonA || !JsonB)
    {
        return nullptr;
    }
    
    UStructForgeJsonObject* MergedObject = JsonA->Clone();
    if (MergedObject)
    {
        MergedObject->MergeWith(JsonB, bOverwriteExisting);
    }
    
    return MergedObject;
}

FString UStructForgeBlueprintLibrary::PrettyPrintJson(const FString& JsonString)
{
    return UStructForgeHandler::PrettyPrintJson(JsonString);
}

FString UStructForgeBlueprintLibrary::MinifyJson(const FString& JsonString)
{
    return UStructForgeHandler::MinifyJson(JsonString);
}

FPlayerData UStructForgeBlueprintLibrary::CreateSamplePlayerData()
{
    FPlayerData SampleData;
    
    SampleData.PlayerId = TEXT("PLAYER_001");
    SampleData.PlayerName = TEXT("John Hero");
    SampleData.Level = 25;
    SampleData.Experience = 125000;
    SampleData.PlayerClass = EPlayerClass::Paladin;
    
    SampleData.Stats.Health = 750;
    SampleData.Stats.MaxHealth = 1000;
    SampleData.Stats.Mana = 250;
    SampleData.Stats.MaxMana = 300;
    SampleData.Stats.AttackPower = 85.5f;
    SampleData.Stats.DefenseRating = 62.3f;
    SampleData.Stats.CriticalChance = 0.25f;
    SampleData.Stats.MovementSpeed = 650.0f;
    
    SampleData.Location.Position = FVector(1000.0f, -500.0f, 250.0f);
    SampleData.Location.Rotation = FRotator(0.0f, 45.0f, 0.0f);
    SampleData.Location.MapName = TEXT("CastleEntrance");
    SampleData.Location.ZoneName = TEXT("NorthernKingdom");
    
    FInventoryItem Sword;
    Sword.ItemId = TEXT("ITEM_SWORD_001");
    Sword.ItemName = TEXT("Legendary Sword of Light");
    Sword.Quantity = 1;
    Sword.Weight = 5.5f;
    Sword.Value = 10000.0f;
    Sword.bIsEquipped = true;
    Sword.Attributes.Add(TEXT("Damage"), TEXT("150"));
    Sword.Attributes.Add(TEXT("Rarity"), TEXT("Legendary"));
    SampleData.Inventory.Add(Sword);
    
    FInventoryItem Potion;
    Potion.ItemId = TEXT("ITEM_POTION_001");
    Potion.ItemName = TEXT("Health Potion");
    Potion.Quantity = 10;
    Potion.Weight = 0.5f;
    Potion.Value = 50.0f;
    Potion.bIsEquipped = false;
    SampleData.Inventory.Add(Potion);
    
    FQuestData Quest;
    Quest.QuestId = TEXT("QUEST_MAIN_001");
    Quest.QuestName = TEXT("The Dragon's Lair");
    Quest.Description = FText::FromString(TEXT("Defeat the ancient dragon and save the kingdom"));
    Quest.bIsCompleted = false;
    Quest.CurrentProgress = 3;
    Quest.RequiredProgress = 5;
    Quest.Objectives.Add(TEXT("Find the dragon's lair"));
    Quest.Objectives.Add(TEXT("Collect the ancient artifacts"));
    Quest.Objectives.Add(TEXT("Defeat the dragon"));
    SampleData.ActiveQuests.Add(Quest);
    
    SampleData.Skills.Add(TEXT("Swordsmanship"), 95.0f);
    SampleData.Skills.Add(TEXT("Magic"), 60.0f);
    SampleData.Skills.Add(TEXT("Archery"), 45.0f);
    
    SampleData.Currencies.Add(TEXT("Gold"), 5000);
    SampleData.Currencies.Add(TEXT("Gems"), 50);
    
    SampleData.bIsOnline = true;
    SampleData.LastLoginTime = FDateTime::Now();
    
    return SampleData;
}

FGameSettings UStructForgeBlueprintLibrary::CreateSampleGameSettings()
{
    FGameSettings SampleSettings;
    
    SampleSettings.ResolutionX = 1920;
    SampleSettings.ResolutionY = 1080;
    SampleSettings.bFullscreen = false;
    SampleSettings.GraphicsQuality = 4;
    
    SampleSettings.MasterVolume = 0.8f;
    SampleSettings.MusicVolume = 0.6f;
    SampleSettings.SFXVolume = 1.0f;
    
    SampleSettings.MouseSensitivity = 1.5f;
    SampleSettings.bInvertYAxis = false;
    
    SampleSettings.KeyBindings.Add(TEXT("MoveForward"), TEXT("W"));
    SampleSettings.KeyBindings.Add(TEXT("MoveBackward"), TEXT("S"));
    SampleSettings.KeyBindings.Add(TEXT("MoveLeft"), TEXT("A"));
    SampleSettings.KeyBindings.Add(TEXT("MoveRight"), TEXT("D"));
    SampleSettings.KeyBindings.Add(TEXT("Jump"), TEXT("Space"));
    SampleSettings.KeyBindings.Add(TEXT("Attack"), TEXT("LeftMouseButton"));
    
    return SampleSettings;
}

TArray<FInventoryItem> UStructForgeBlueprintLibrary::CreateSampleInventory()
{
    TArray<FInventoryItem> SampleInventory;
    
    FInventoryItem Item1;
    Item1.ItemId = TEXT("ITEM_ARMOR_001");
    Item1.ItemName = TEXT("Steel Plate Armor");
    Item1.Quantity = 1;
    Item1.Weight = 15.0f;
    Item1.Value = 2500.0f;
    Item1.bIsEquipped = true;
    Item1.Attributes.Add(TEXT("Defense"), TEXT("50"));
    Item1.Attributes.Add(TEXT("Durability"), TEXT("100"));
    SampleInventory.Add(Item1);
    
    FInventoryItem Item2;
    Item2.ItemId = TEXT("ITEM_RING_001");
    Item2.ItemName = TEXT("Ring of Power");
    Item2.Quantity = 1;
    Item2.Weight = 0.1f;
    Item2.Value = 5000.0f;
    Item2.bIsEquipped = true;
    Item2.Attributes.Add(TEXT("MagicBoost"), TEXT("25"));
    SampleInventory.Add(Item2);
    
    FInventoryItem Item3;
    Item3.ItemId = TEXT("ITEM_FOOD_001");
    Item3.ItemName = TEXT("Bread");
    Item3.Quantity = 5;
    Item3.Weight = 0.3f;
    Item3.Value = 10.0f;
    Item3.bIsEquipped = false;
    SampleInventory.Add(Item3);
    
    return SampleInventory;
}

bool UStructForgeBlueprintLibrary::StructToJsonString(const UStruct* StructIn, FString& JsonString, bool bPrettyPrint)
{
    // This function should never be called directly - the CustomThunk handles it
    checkNoEntry();
    return false;
}

bool UStructForgeBlueprintLibrary::JsonStringToStruct(const FString& JsonString, UStruct* StructOut)
{
    // This function should never be called directly - the CustomThunk handles it
    checkNoEntry();
    return false;
}

DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execStructToJsonString)
{
    // Step through the stack to get the struct parameter
    Stack.MostRecentPropertyAddress = nullptr;
    Stack.Step(Stack.Object, nullptr);
    FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
    void* StructAddress = Stack.MostRecentPropertyAddress;
    
    // Get the output JSON string parameter
    P_GET_PROPERTY_REF(FStrProperty, JsonString);
    
    // Get the pretty print parameter
    P_GET_UBOOL(bPrettyPrint);
    
    P_FINISH;
    
    // Perform the serialization
    bool bSuccess = false;
    if (StructProperty && StructAddress)
    {
        UScriptStruct* Struct = StructProperty->Struct;
        bSuccess = FJsonObjectConverter::UStructToJsonObjectString(Struct, StructAddress, JsonString, 0, 0, 0, nullptr, bPrettyPrint);
    }
    
    *(bool*)RESULT_PARAM = bSuccess;
}

DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonStringToStruct)
{
    // Get the JSON string parameter
    P_GET_PROPERTY(FStrProperty, JsonString);
    
    // Step through the stack to get the output struct parameter
    Stack.MostRecentPropertyAddress = nullptr;
    Stack.Step(Stack.Object, nullptr);
    FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
    void* StructAddress = Stack.MostRecentPropertyAddress;
    
    P_FINISH;
    
    // Perform the deserialization
    bool bSuccess = false;
    if (StructProperty && StructAddress)
    {
        UScriptStruct* Struct = StructProperty->Struct;
        // Use the helper function from StructForgeHandler for deserialization
        bSuccess = UStructForgeHandler::DeserializeJsonObjectStringToUStruct(JsonString, Struct, StructAddress);
    }
    
    *(bool*)RESULT_PARAM = bSuccess;
}

bool UStructForgeBlueprintLibrary::StructToJsonStringWithConfig(const UStruct* StructIn, class UStructForgeConfig* Config, FString& JsonString, bool bPrettyPrint)
{
    // This function body is just a placeholder - actual implementation is in execStructToJsonStringWithConfig
    return false;
}

DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execStructToJsonStringWithConfig)
{
    // Step through the stack to get the input struct parameter
    Stack.MostRecentPropertyAddress = nullptr;
    Stack.Step(Stack.Object, nullptr);
    FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
    void* StructAddress = Stack.MostRecentPropertyAddress;
    
    // Get the config parameter
    P_GET_OBJECT(UStructForgeConfig, Config);
    
    // Get the output JSON string parameter
    P_GET_PROPERTY_REF(FStrProperty, JsonString);
    
    // Get the pretty print parameter
    P_GET_UBOOL(bPrettyPrint);
    
    P_FINISH;
    
    // Perform the serialization with config
    bool bSuccess = false;
    if (StructProperty && StructAddress)
    {
        UScriptStruct* Struct = StructProperty->Struct;
        
        // If we have a config, use it to customize serialization
        if (Config)
        {
            // TODO: Implement config-based serialization using the mappings
            // For now, fallback to metadata-based serialization
            bSuccess = UStructForgeHandler::SerializeUStructToJsonObjectStringWithMetadata(Struct, StructAddress, JsonString, bPrettyPrint);
        }
        else
        {
            // No config, use standard serialization
            bSuccess = FJsonObjectConverter::UStructToJsonObjectString(Struct, StructAddress, JsonString, 0, 0, 0, nullptr, bPrettyPrint);
        }
    }
    
    *(bool*)RESULT_PARAM = bSuccess;
}

bool UStructForgeBlueprintLibrary::JsonStringToStructWithConfig(const FString& JsonString, class UStructForgeConfig* Config, UStruct* StructOut)
{
    // This function body is just a placeholder - actual implementation is in execJsonStringToStructWithConfig
    return false;
}

DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonStringToStructWithConfig)
{
    // Get the JSON string parameter
    P_GET_PROPERTY(FStrProperty, JsonString);
    
    // Get the config parameter
    P_GET_OBJECT(UStructForgeConfig, Config);
    
    // Step through the stack to get the output struct parameter
    Stack.MostRecentPropertyAddress = nullptr;
    Stack.Step(Stack.Object, nullptr);
    FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
    void* StructAddress = Stack.MostRecentPropertyAddress;
    
    P_FINISH;
    
    // Perform the deserialization with config
    bool bSuccess = false;
    if (StructProperty && StructAddress)
    {
        UScriptStruct* Struct = StructProperty->Struct;
        
        // If we have a config, use it to customize deserialization
        if (Config)
        {
            // TODO: Implement config-based deserialization using the mappings
            // For now, fallback to metadata-based deserialization
            bSuccess = UStructForgeHandler::DeserializeJsonObjectStringToUStructWithMetadata(JsonString, Struct, StructAddress);
        }
        else
        {
            // No config, use standard deserialization
            bSuccess = UStructForgeHandler::DeserializeJsonObjectStringToUStruct(JsonString, Struct, StructAddress);
        }
    }
    
    *(bool*)RESULT_PARAM = bSuccess;
}