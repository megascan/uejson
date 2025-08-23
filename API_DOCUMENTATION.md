# STRUCTFORGE API Documentation

Complete reference for all Blueprint nodes and C++ functions provided by STRUCTFORGE.

## Table of Contents
- [Core JSON Operations](#core-json-operations)
- [Getters](#getters)
- [Setters](#setters)
- [Array Operations](#array-operations)
- [Struct Serialization](#struct-serialization)
- [File I/O](#file-io)
- [Validation & Utilities](#validation--utilities)
- [Advanced Features](#advanced-features)

---

## Core JSON Operations

### 1. Create Empty JSON Object
**Blueprint Node:** `Create Empty JSON Object`  
**C++ Function:** `UStructForgeJsonObject::CreateEmpty()` or `UStructForgeBlueprintLibrary::CreateJsonObject()`

Creates a new, empty JSON object.

**C++ Example:**
```cpp
// Method 1: Direct creation
UStructForgeJsonObject* JsonObj = UStructForgeJsonObject::CreateEmpty();

// Method 2: Via Blueprint Library
UStructForgeJsonObject* JsonObj = UStructForgeBlueprintLibrary::CreateJsonObject();
```

### 2. Parse JSON String
**Blueprint Node:** `Parse JSON String`  
**C++ Function:** `UStructForgeBlueprintLibrary::ParseJsonString()`

Parses a JSON string into a JSON object.

**Parameters:**
- `JsonString` (FString): The JSON string to parse
- `OutJsonObject` (UStructForgeJsonObject*&): The resulting JSON object

**Returns:** `bool` - Success/failure

**C++ Example:**
```cpp
FString JsonString = TEXT("{\"name\":\"John\",\"age\":30}");
UStructForgeJsonObject* JsonObj = nullptr;
bool bSuccess = UStructForgeBlueprintLibrary::ParseJsonString(JsonString, JsonObj);
if (bSuccess && JsonObj)
{
    // Use JsonObj
}
```

### 3. JSON Object to String
**Blueprint Node:** `JSON to String`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonObjectToString()`

Converts a JSON object to a string representation.

**Parameters:**
- `JsonObject` (UStructForgeJsonObject*): The JSON object to convert
- `bPrettyPrint` (bool): Whether to format with indentation

**Returns:** `FString` - The JSON string

**C++ Example:**
```cpp
UStructForgeJsonObject* JsonObj = CreateJsonObject();
FString JsonString = UStructForgeBlueprintLibrary::JsonObjectToString(JsonObj, true);
```

---

## Getters

### 4. Get String from JSON
**Blueprint Node:** `Get String from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonString()`

Retrieves a string value from a JSON object.

**Parameters:**
- `JsonObject` (UStructForgeJsonObject*): The JSON object
- `Key` (FString): The field name
- `DefaultValue` (FString): Value to return if key not found
- `bFound` (bool&): Whether the key was found

**Returns:** `FString` - The value or default

**C++ Example:**
```cpp
bool bFound;
FString Name = UStructForgeBlueprintLibrary::GetJsonString(
    JsonObj, 
    TEXT("name"), 
    TEXT("Unknown"), 
    bFound
);
```

### 5. Get Integer from JSON
**Blueprint Node:** `Get Integer from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonInt()`

**Parameters:**
- `JsonObject` (UStructForgeJsonObject*): The JSON object
- `Key` (FString): The field name
- `DefaultValue` (int32): Value to return if key not found
- `bFound` (bool&): Whether the key was found

**Returns:** `int32` - The value or default

**C++ Example:**
```cpp
bool bFound;
int32 Age = UStructForgeBlueprintLibrary::GetJsonInt(JsonObj, TEXT("age"), 0, bFound);
```

### 6. Get Float from JSON
**Blueprint Node:** `Get Float from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonFloat()`

**C++ Example:**
```cpp
bool bFound;
float Price = UStructForgeBlueprintLibrary::GetJsonFloat(JsonObj, TEXT("price"), 0.0f, bFound);
```

### 7. Get Boolean from JSON
**Blueprint Node:** `Get Boolean from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonBool()`

**C++ Example:**
```cpp
bool bFound;
bool bIsActive = UStructForgeBlueprintLibrary::GetJsonBool(JsonObj, TEXT("active"), false, bFound);
```

### 8. Get Text from JSON
**Blueprint Node:** `Get Text from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonText()`

**C++ Example:**
```cpp
bool bFound;
FText Description = UStructForgeBlueprintLibrary::GetJsonText(
    JsonObj, 
    TEXT("description"), 
    FText::GetEmpty(), 
    bFound
);
```

### 9. Get Vector from JSON
**Blueprint Node:** `Get Vector from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonVector()`

Retrieves a vector from a JSON object (expects X, Y, Z fields).

**C++ Example:**
```cpp
bool bFound;
FVector Position = UStructForgeBlueprintLibrary::GetJsonVector(
    JsonObj, 
    TEXT("position"), 
    FVector::ZeroVector, 
    bFound
);
```

### 10. Get Rotator from JSON
**Blueprint Node:** `Get Rotator from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonRotator()`

Retrieves a rotator from a JSON object (expects Pitch, Yaw, Roll fields).

**C++ Example:**
```cpp
bool bFound;
FRotator Rotation = UStructForgeBlueprintLibrary::GetJsonRotator(
    JsonObj, 
    TEXT("rotation"), 
    FRotator::ZeroRotator, 
    bFound
);
```

### 11. Get Transform from JSON
**Blueprint Node:** `Get Transform from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonTransform()`

Retrieves a transform from a JSON object (expects Location, Rotation, Scale fields).

**C++ Example:**
```cpp
bool bFound;
FTransform Transform = UStructForgeBlueprintLibrary::GetJsonTransform(
    JsonObj, 
    TEXT("transform"), 
    FTransform::Identity, 
    bFound
);
```

---

## Setters

### 12. Set String in JSON
**Blueprint Node:** `Set String in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonString()`

**C++ Example:**
```cpp
UStructForgeBlueprintLibrary::SetJsonString(JsonObj, TEXT("name"), TEXT("John Doe"));
```

### 13. Set Integer in JSON
**Blueprint Node:** `Set Integer in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonInt()`

**C++ Example:**
```cpp
UStructForgeBlueprintLibrary::SetJsonInt(JsonObj, TEXT("score"), 1000);
```

### 14. Set Float in JSON
**Blueprint Node:** `Set Float in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonFloat()`

**C++ Example:**
```cpp
UStructForgeBlueprintLibrary::SetJsonFloat(JsonObj, TEXT("health"), 75.5f);
```

### 15. Set Boolean in JSON
**Blueprint Node:** `Set Boolean in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonBool()`

**C++ Example:**
```cpp
UStructForgeBlueprintLibrary::SetJsonBool(JsonObj, TEXT("isAlive"), true);
```

### 16. Set Text in JSON
**Blueprint Node:** `Set Text in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonText()`

**C++ Example:**
```cpp
FText LocalizedText = NSLOCTEXT("Game", "Welcome", "Welcome to the game!");
UStructForgeBlueprintLibrary::SetJsonText(JsonObj, TEXT("message"), LocalizedText);
```

### 17. Set Vector in JSON
**Blueprint Node:** `Set Vector in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonVector()`

**C++ Example:**
```cpp
FVector Position(100.0f, 200.0f, 50.0f);
UStructForgeBlueprintLibrary::SetJsonVector(JsonObj, TEXT("spawn_position"), Position);
```

### 18. Set Rotator in JSON
**Blueprint Node:** `Set Rotator in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonRotator()`

**C++ Example:**
```cpp
FRotator Rotation(0.0f, 90.0f, 0.0f);
UStructForgeBlueprintLibrary::SetJsonRotator(JsonObj, TEXT("spawn_rotation"), Rotation);
```

### 19. Set Transform in JSON
**Blueprint Node:** `Set Transform in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonTransform()`

**C++ Example:**
```cpp
FTransform Transform(FRotator(0, 45, 0), FVector(100, 100, 0), FVector(1, 1, 1));
UStructForgeBlueprintLibrary::SetJsonTransform(JsonObj, TEXT("world_transform"), Transform);
```

---

## Array Operations

### 20. Get String Array from JSON
**Blueprint Node:** `Get String Array from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonStringArray()`

**C++ Example:**
```cpp
TArray<FString> Tags;
bool bSuccess = UStructForgeBlueprintLibrary::GetJsonStringArray(JsonObj, TEXT("tags"), Tags);
```

### 21. Set String Array in JSON
**Blueprint Node:** `Set String Array in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonStringArray()`

**C++ Example:**
```cpp
TArray<FString> Tags = {TEXT("RPG"), TEXT("Adventure"), TEXT("Multiplayer")};
UStructForgeBlueprintLibrary::SetJsonStringArray(JsonObj, TEXT("tags"), Tags);
```

### 22. Get Int Array from JSON
**Blueprint Node:** `Get Int Array from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonIntArray()`

**C++ Example:**
```cpp
TArray<int32> Scores;
bool bSuccess = UStructForgeBlueprintLibrary::GetJsonIntArray(JsonObj, TEXT("scores"), Scores);
```

### 23. Set Int Array in JSON
**Blueprint Node:** `Set Int Array in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonIntArray()`

**C++ Example:**
```cpp
TArray<int32> Levels = {1, 5, 10, 15, 20};
UStructForgeBlueprintLibrary::SetJsonIntArray(JsonObj, TEXT("unlocked_levels"), Levels);
```

### 24. Get Float Array from JSON
**Blueprint Node:** `Get Float Array from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonFloatArray()`

**C++ Example:**
```cpp
TArray<float> Weights;
bool bSuccess = UStructForgeBlueprintLibrary::GetJsonFloatArray(JsonObj, TEXT("weights"), Weights);
```

### 25. Set Float Array in JSON
**Blueprint Node:** `Set Float Array in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonFloatArray()`

**C++ Example:**
```cpp
TArray<float> Multipliers = {1.0f, 1.5f, 2.0f, 2.5f};
UStructForgeBlueprintLibrary::SetJsonFloatArray(JsonObj, TEXT("damage_multipliers"), Multipliers);
```

### 26. Get Bool Array from JSON
**Blueprint Node:** `Get Bool Array from JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetJsonBoolArray()`

**C++ Example:**
```cpp
TArray<bool> Flags;
bool bSuccess = UStructForgeBlueprintLibrary::GetJsonBoolArray(JsonObj, TEXT("feature_flags"), Flags);
```

### 27. Set Bool Array in JSON
**Blueprint Node:** `Set Bool Array in JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::SetJsonBoolArray()`

**C++ Example:**
```cpp
TArray<bool> Unlocked = {true, true, false, false, true};
UStructForgeBlueprintLibrary::SetJsonBoolArray(JsonObj, TEXT("achievements"), Unlocked);
```

---

## Struct Serialization

### 28. Struct to JSON String (Generic)
**Blueprint Node:** `Struct to JSON String`  
**C++ Function:** `UStructForgeBlueprintLibrary::StructToJsonString()` (CustomThunk)

Serializes any USTRUCT to JSON. In Blueprint, accepts wildcard struct pins.

**C++ Example:**
```cpp
// Define your struct
USTRUCT()
struct FMyGameData
{
    GENERATED_BODY()
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    int32 Score;
    
    UPROPERTY()
    TArray<FString> Inventory;
};

// Serialize it
FMyGameData GameData;
GameData.PlayerName = TEXT("Hero");
GameData.Score = 5000;
GameData.Inventory = {TEXT("Sword"), TEXT("Shield")};

FString JsonString;
bool bSuccess = FJsonObjectConverter::UStructToJsonObjectString(
    GameData, 
    JsonString, 
    0, 0, 0, nullptr, 
    true // pretty print
);
```

### 29. JSON String to Struct (Generic)
**Blueprint Node:** `JSON String to Struct`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonStringToStruct()` (CustomThunk)

Deserializes JSON to any USTRUCT.

**C++ Example:**
```cpp
FString JsonString = TEXT("{\"PlayerName\":\"Hero\",\"Score\":5000}");
FMyGameData LoadedData;

bool bSuccess = FJsonObjectConverter::JsonObjectStringToUStruct(
    JsonString, 
    &LoadedData, 
    0, 0
);
```

### 30. Player Data to JSON
**Blueprint Node:** `Player Data to JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::PlayerDataToJson()`

Specialized serialization for FPlayerData struct.

**C++ Example:**
```cpp
FPlayerData PlayerData;
// ... populate player data ...
FString JsonString;
bool bSuccess = UStructForgeBlueprintLibrary::PlayerDataToJson(PlayerData, JsonString, true);
```

### 31. JSON to Player Data
**Blueprint Node:** `JSON to Player Data`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonToPlayerData()`

**C++ Example:**
```cpp
FString JsonString = LoadFromFile(); // Your JSON source
FPlayerData PlayerData;
bool bSuccess = UStructForgeBlueprintLibrary::JsonToPlayerData(JsonString, PlayerData);
```

### 32. Game Settings to JSON
**Blueprint Node:** `Game Settings to JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::GameSettingsToJson()`

**C++ Example:**
```cpp
FGameSettings Settings;
Settings.ResolutionX = 1920;
Settings.ResolutionY = 1080;
Settings.bFullscreen = true;

FString JsonString;
bool bSuccess = UStructForgeBlueprintLibrary::GameSettingsToJson(Settings, JsonString, true);
```

### 33. JSON to Game Settings
**Blueprint Node:** `JSON to Game Settings`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonToGameSettings()`

**C++ Example:**
```cpp
FString JsonString = LoadSettingsFile();
FGameSettings Settings;
bool bSuccess = UStructForgeBlueprintLibrary::JsonToGameSettings(JsonString, Settings);
```

### 34. Inventory Item to JSON
**Blueprint Node:** `Inventory Item to JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::InventoryItemToJson()`

**C++ Example:**
```cpp
FInventoryItem Item;
Item.ItemId = TEXT("sword_01");
Item.ItemName = TEXT("Iron Sword");
Item.Quantity = 1;

FString JsonString;
bool bSuccess = UStructForgeBlueprintLibrary::InventoryItemToJson(Item, JsonString, false);
```

### 35. JSON to Inventory Item
**Blueprint Node:** `JSON to Inventory Item`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonToInventoryItem()`

**C++ Example:**
```cpp
FString JsonString = TEXT("{\"ItemId\":\"sword_01\",\"Quantity\":1}");
FInventoryItem Item;
bool bSuccess = UStructForgeBlueprintLibrary::JsonToInventoryItem(JsonString, Item);
```

---

## File I/O

### 36. Save JSON to File
**Blueprint Node:** `Save JSON to File`  
**C++ Function:** `UStructForgeBlueprintLibrary::SaveJsonToFile()`

Saves a JSON string to a file on disk.

**C++ Example:**
```cpp
FString JsonString = TEXT("{\"level\":5,\"xp\":1500}");
FString FilePath = FPaths::ProjectSavedDir() / TEXT("GameData.json");
bool bSuccess = UStructForgeBlueprintLibrary::SaveJsonToFile(JsonString, FilePath);
```

### 37. Load JSON from File
**Blueprint Node:** `Load JSON from File`  
**C++ Function:** `UStructForgeBlueprintLibrary::LoadJsonFromFile()`

Loads a JSON string from a file.

**C++ Example:**
```cpp
FString FilePath = FPaths::ProjectSavedDir() / TEXT("GameData.json");
FString JsonString;
bool bSuccess = UStructForgeBlueprintLibrary::LoadJsonFromFile(FilePath, JsonString);
```

### 38. Save Player Data to File
**Blueprint Node:** `Save Player Data to File`  
**C++ Function:** `UStructForgeBlueprintLibrary::SavePlayerDataToFile()`

**C++ Example:**
```cpp
FPlayerData PlayerData;
// ... populate data ...
FString FilePath = FPaths::ProjectSavedDir() / TEXT("PlayerSave.json");
bool bSuccess = UStructForgeBlueprintLibrary::SavePlayerDataToFile(PlayerData, FilePath, true);
```

### 39. Load Player Data from File
**Blueprint Node:** `Load Player Data from File`  
**C++ Function:** `UStructForgeBlueprintLibrary::LoadPlayerDataFromFile()`

**C++ Example:**
```cpp
FString FilePath = FPaths::ProjectSavedDir() / TEXT("PlayerSave.json");
FPlayerData PlayerData;
bool bSuccess = UStructForgeBlueprintLibrary::LoadPlayerDataFromFile(FilePath, PlayerData);
```

### 40. Save Game Settings to File
**Blueprint Node:** `Save Game Settings to File`  
**C++ Function:** `UStructForgeBlueprintLibrary::SaveGameSettingsToFile()`

**C++ Example:**
```cpp
FGameSettings Settings;
// ... configure settings ...
FString FilePath = FPaths::ProjectConfigDir() / TEXT("Settings.json");
bool bSuccess = UStructForgeBlueprintLibrary::SaveGameSettingsToFile(Settings, FilePath, true);
```

### 41. Load Game Settings from File
**Blueprint Node:** `Load Game Settings from File`  
**C++ Function:** `UStructForgeBlueprintLibrary::LoadGameSettingsFromFile()`

**C++ Example:**
```cpp
FString FilePath = FPaths::ProjectConfigDir() / TEXT("Settings.json");
FGameSettings Settings;
bool bSuccess = UStructForgeBlueprintLibrary::LoadGameSettingsFromFile(FilePath, Settings);
```

---

## Validation & Utilities

### 42. Is Valid JSON?
**Blueprint Node:** `Is Valid JSON?`  
**C++ Function:** `UStructForgeBlueprintLibrary::IsValidJson()`

Validates whether a string contains valid JSON.

**C++ Example:**
```cpp
FString TestJson = TEXT("{\"valid\":true}");
bool bIsValid = UStructForgeBlueprintLibrary::IsValidJson(TestJson);
```

### 43. Get All Keys
**Blueprint Node:** `Get All Keys`  
**C++ Function:** `UStructForgeBlueprintLibrary::GetAllJsonKeys()`

Returns all keys in a JSON object.

**C++ Example:**
```cpp
TArray<FString> Keys = UStructForgeBlueprintLibrary::GetAllJsonKeys(JsonObj);
for (const FString& Key : Keys)
{
    UE_LOG(LogTemp, Log, TEXT("Key: %s"), *Key);
}
```

### 44. Has Key?
**Blueprint Node:** `Has Key?`  
**C++ Function:** `UStructForgeBlueprintLibrary::HasJsonKey()`

Checks if a JSON object contains a specific key.

**C++ Example:**
```cpp
bool bHasName = UStructForgeBlueprintLibrary::HasJsonKey(JsonObj, TEXT("name"));
```

### 45. Remove Key
**Blueprint Node:** `Remove Key`  
**C++ Function:** `UStructForgeBlueprintLibrary::RemoveJsonKey()`

Removes a key-value pair from a JSON object.

**C++ Example:**
```cpp
bool bRemoved = UStructForgeBlueprintLibrary::RemoveJsonKey(JsonObj, TEXT("temp_data"));
```

### 46. Merge JSON Objects
**Blueprint Node:** `Merge JSON Objects`  
**C++ Function:** `UStructForgeBlueprintLibrary::MergeJsonObjects()`

Merges two JSON objects into one.

**C++ Example:**
```cpp
UStructForgeJsonObject* BaseObj = CreateJsonObject();
UStructForgeJsonObject* UpdateObj = CreateJsonObject();
// ... populate objects ...

UStructForgeJsonObject* MergedObj = UStructForgeBlueprintLibrary::MergeJsonObjects(
    BaseObj, 
    UpdateObj, 
    true // overwrite existing
);
```

### 47. Pretty Print JSON
**Blueprint Node:** `Pretty Print JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::PrettyPrintJson()`

Formats a JSON string with indentation for readability.

**C++ Example:**
```cpp
FString CompactJson = TEXT("{\"a\":1,\"b\":2}");
FString PrettyJson = UStructForgeBlueprintLibrary::PrettyPrintJson(CompactJson);
```

### 48. Minify JSON
**Blueprint Node:** `Minify JSON`  
**C++ Function:** `UStructForgeBlueprintLibrary::MinifyJson()`

Removes unnecessary whitespace from JSON.

**C++ Example:**
```cpp
FString PrettyJson = TEXT("{\n    \"a\": 1,\n    \"b\": 2\n}");
FString MinifiedJson = UStructForgeBlueprintLibrary::MinifyJson(PrettyJson);
```

---

## Test Data Generators

### 49. Create Sample Player Data
**Blueprint Node:** `Create Sample Player Data`  
**C++ Function:** `UStructForgeBlueprintLibrary::CreateSamplePlayerData()`

Generates sample player data for testing.

**C++ Example:**
```cpp
FPlayerData SampleData = UStructForgeBlueprintLibrary::CreateSamplePlayerData();
// Use for testing serialization
```

### 50. Create Sample Game Settings
**Blueprint Node:** `Create Sample Game Settings`  
**C++ Function:** `UStructForgeBlueprintLibrary::CreateSampleGameSettings()`

**C++ Example:**
```cpp
FGameSettings SampleSettings = UStructForgeBlueprintLibrary::CreateSampleGameSettings();
```

### 51. Create Sample Inventory
**Blueprint Node:** `Create Sample Inventory`  
**C++ Function:** `UStructForgeBlueprintLibrary::CreateSampleInventory()`

**C++ Example:**
```cpp
TArray<FInventoryItem> SampleInventory = UStructForgeBlueprintLibrary::CreateSampleInventory();
```

---

## Advanced Features

### 52. Struct to JSON String (With Config)
**Blueprint Node:** `Struct to JSON String (With Config)`  
**C++ Function:** `UStructForgeBlueprintLibrary::StructToJsonStringWithConfig()` (CustomThunk)

Serializes a struct using custom field mapping configuration.

**C++ Example:**
```cpp
// Create or load a config asset
UStructForgeConfig* Config = LoadObject<UStructForgeConfig>(
    nullptr, 
    TEXT("/Game/Data/MyJsonConfig")
);

// Use config for serialization
FMyStruct Data;
FString JsonString;
// This would typically be called through Blueprint due to CustomThunk implementation
```

### 53. JSON String to Struct (With Config)
**Blueprint Node:** `JSON String to Struct (With Config)`  
**C++ Function:** `UStructForgeBlueprintLibrary::JsonStringToStructWithConfig()` (CustomThunk)

Deserializes JSON using custom field mapping configuration.

---

## Handler Functions (C++ Only)

### Serialize String Array
**C++ Function:** `UStructForgeHandler::SerializeStringArray()`

```cpp
TArray<FString> StringArray = {TEXT("One"), TEXT("Two"), TEXT("Three")};
FString JsonArray = UStructForgeHandler::SerializeStringArray(StringArray, true);
```

### Deserialize String Array
**C++ Function:** `UStructForgeHandler::DeserializeStringArray()`

```cpp
FString JsonArray = TEXT("[\"One\",\"Two\",\"Three\"]");
TArray<FString> StringArray;
bool bSuccess = UStructForgeHandler::DeserializeStringArray(JsonArray, StringArray);
```

### Serialize Int Array
**C++ Function:** `UStructForgeHandler::SerializeIntArray()`

```cpp
TArray<int32> Numbers = {1, 2, 3, 4, 5};
FString JsonArray = UStructForgeHandler::SerializeIntArray(Numbers, false);
```

### Serialize String Map
**C++ Function:** `UStructForgeHandler::SerializeStringMap()`

```cpp
TMap<FString, FString> StringMap;
StringMap.Add(TEXT("Key1"), TEXT("Value1"));
StringMap.Add(TEXT("Key2"), TEXT("Value2"));
FString JsonObject = UStructForgeHandler::SerializeStringMap(StringMap, true);
```

### Get JSON Depth
**C++ Function:** `UStructForgeHandler::GetJsonDepth()`

```cpp
FString DeepJson = TEXT("{\"a\":{\"b\":{\"c\":{\"d\":1}}}}");
int32 Depth = UStructForgeHandler::GetJsonDepth(DeepJson);
// Returns 4
```

### Get JSON Size
**C++ Function:** `UStructForgeHandler::GetJsonSize()`

```cpp
FString JsonString = TEXT("{\"data\":\"value\"}");
int32 Size = UStructForgeHandler::GetJsonSize(JsonString);
// Returns character count
```

### Async Operations
**C++ Functions:** 
- `UStructForgeHandler::SerializePlayerDataAsync()`
- `UStructForgeHandler::LoadPlayerDataAsync()`

```cpp
// Async save example
FPlayerData PlayerData;
FString FilePath = FPaths::ProjectSavedDir() / TEXT("AsyncSave.json");

FOnStructForgeAsyncComplete OnComplete;
OnComplete.BindLambda([](bool bSuccess, const FString& Result)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("Async save completed: %s"), *Result);
    }
});

UStructForgeHandler::SerializePlayerDataAsync(PlayerData, FilePath, OnComplete);
```

### Metadata-Based Serialization
**C++ Functions:**
- `UStructForgeHandler::SerializeUStructToJsonObjectStringWithMetadata()`
- `UStructForgeHandler::DeserializeJsonObjectStringToUStructWithMetadata()`

```cpp
// Define struct with metadata
USTRUCT()
struct FMyConfigurableStruct
{
    GENERATED_BODY()
    
    UPROPERTY(meta=(JsonFieldName="player_name"))
    FString PlayerName;
    
    UPROPERTY(meta=(JsonSerialize="false"))
    FString InternalData; // Won't be serialized
    
    UPROPERTY()
    int32 Score;
};

// Serialize with metadata
FMyConfigurableStruct Data;
Data.PlayerName = TEXT("Hero");
Data.InternalData = TEXT("Secret");
Data.Score = 100;

FString JsonString;
UStructForgeHandler::SerializeUStructToJsonObjectStringWithMetadata(
    FMyConfigurableStruct::StaticStruct(),
    &Data,
    JsonString,
    true
);
// Result: {"player_name":"Hero","Score":100}
// Note: InternalData is excluded
```

---

## Summary

STRUCTFORGE provides **53+ Blueprint nodes** and numerous C++ functions for comprehensive JSON handling in Unreal Engine 5:

- **15 Core Operations** (Create, Parse, Convert)
- **11 Getters** (String, Int, Float, Bool, Text, Vector, Rotator, Transform, Arrays)
- **11 Setters** (Matching getters)
- **8 Array Operations** (String, Int, Float, Bool arrays)
- **8 Struct Serialization** (Generic + specific structs)
- **6 File I/O** operations
- **7 Utilities** (Validation, Keys, Merge, Format)
- **3 Test Data Generators**
- **2 Config-based Operations**
- **Additional C++ only functions** for advanced use cases

All functions are designed to be intuitive, with consistent naming conventions and comprehensive error handling.