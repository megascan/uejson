#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StructForgeTypes.h"
#include "StructForgeBlueprintLibrary.generated.h"

UCLASS()
class STRUCTFORGE_API UStructForgeBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
    
public:
    UFUNCTION(BlueprintCallable, Category = "StructForge|Core", meta = (DisplayName = "Create Empty JSON Object"))
    static class UStructForgeJsonObject* CreateJsonObject();
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Core", meta = (DisplayName = "Parse JSON String"))
    static bool ParseJsonString(const FString& JsonString, UStructForgeJsonObject*& OutJsonObject);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Core", meta = (DisplayName = "JSON to String", CompactNodeTitle = "->String"))
    static FString JsonObjectToString(const UStructForgeJsonObject* JsonObject, bool bPrettyPrint = false);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get String from JSON"))
    static FString GetJsonString(const UStructForgeJsonObject* JsonObject, const FString& Key, const FString& DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Integer from JSON"))
    static int32 GetJsonInt(const UStructForgeJsonObject* JsonObject, const FString& Key, int32 DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Float from JSON"))
    static float GetJsonFloat(const UStructForgeJsonObject* JsonObject, const FString& Key, float DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Boolean from JSON"))
    static bool GetJsonBool(const UStructForgeJsonObject* JsonObject, const FString& Key, bool DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Text from JSON"))
    static FText GetJsonText(const UStructForgeJsonObject* JsonObject, const FString& Key, const FText& DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Vector from JSON"))
    static FVector GetJsonVector(const UStructForgeJsonObject* JsonObject, const FString& Key, const FVector& DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Rotator from JSON"))
    static FRotator GetJsonRotator(const UStructForgeJsonObject* JsonObject, const FString& Key, const FRotator& DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Getters", meta = (DisplayName = "Get Transform from JSON"))
    static FTransform GetJsonTransform(const UStructForgeJsonObject* JsonObject, const FString& Key, const FTransform& DefaultValue, bool& bFound);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set String in JSON"))
    static void SetJsonString(UStructForgeJsonObject* JsonObject, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Integer in JSON"))
    static void SetJsonInt(UStructForgeJsonObject* JsonObject, const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Float in JSON"))
    static void SetJsonFloat(UStructForgeJsonObject* JsonObject, const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Boolean in JSON"))
    static void SetJsonBool(UStructForgeJsonObject* JsonObject, const FString& Key, bool Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Text in JSON"))
    static void SetJsonText(UStructForgeJsonObject* JsonObject, const FString& Key, const FText& Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Vector in JSON"))
    static void SetJsonVector(UStructForgeJsonObject* JsonObject, const FString& Key, const FVector& Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Rotator in JSON"))
    static void SetJsonRotator(UStructForgeJsonObject* JsonObject, const FString& Key, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Setters", meta = (DisplayName = "Set Transform in JSON"))
    static void SetJsonTransform(UStructForgeJsonObject* JsonObject, const FString& Key, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Get String Array from JSON"))
    static bool GetJsonStringArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<FString>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Set String Array in JSON"))
    static void SetJsonStringArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Get Int Array from JSON"))
    static bool GetJsonIntArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<int32>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Set Int Array in JSON"))
    static void SetJsonIntArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Get Float Array from JSON"))
    static bool GetJsonFloatArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<float>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Set Float Array in JSON"))
    static void SetJsonFloatArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Get Bool Array from JSON"))
    static bool GetJsonBoolArray(const UStructForgeJsonObject* JsonObject, const FString& Key, TArray<bool>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Set Bool Array in JSON"))
    static void SetJsonBoolArray(UStructForgeJsonObject* JsonObject, const FString& Key, const TArray<bool>& Array);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "Player Data to JSON"))
    static bool PlayerDataToJson(const FPlayerData& PlayerData, FString& OutJsonString, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "JSON to Player Data"))
    static bool JsonToPlayerData(const FString& JsonString, FPlayerData& OutPlayerData);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "Game Settings to JSON"))
    static bool GameSettingsToJson(const FGameSettings& Settings, FString& OutJsonString, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "JSON to Game Settings"))
    static bool JsonToGameSettings(const FString& JsonString, FGameSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "Inventory Item to JSON"))
    static bool InventoryItemToJson(const FInventoryItem& Item, FString& OutJsonString, bool bPrettyPrint = false);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Structs", meta = (DisplayName = "JSON to Inventory Item"))
    static bool JsonToInventoryItem(const FString& JsonString, FInventoryItem& OutItem);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Save JSON to File"))
    static bool SaveJsonToFile(const FString& JsonString, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Load JSON from File"))
    static bool LoadJsonFromFile(const FString& FilePath, FString& OutJsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Save Player Data to File"))
    static bool SavePlayerDataToFile(const FPlayerData& PlayerData, const FString& FilePath, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Load Player Data from File"))
    static bool LoadPlayerDataFromFile(const FString& FilePath, FPlayerData& OutPlayerData);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Save Game Settings to File"))
    static bool SaveGameSettingsToFile(const FGameSettings& Settings, const FString& FilePath, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Load Game Settings from File"))
    static bool LoadGameSettingsFromFile(const FString& FilePath, FGameSettings& OutSettings);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Validation", meta = (DisplayName = "Is Valid JSON?", CompactNodeTitle = "Valid?"))
    static bool IsValidJson(const FString& JsonString);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Utilities", meta = (DisplayName = "Get All Keys"))
    static TArray<FString> GetAllJsonKeys(const UStructForgeJsonObject* JsonObject);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Utilities", meta = (DisplayName = "Has Key?"))
    static bool HasJsonKey(const UStructForgeJsonObject* JsonObject, const FString& Key);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Utilities", meta = (DisplayName = "Remove Key"))
    static bool RemoveJsonKey(UStructForgeJsonObject* JsonObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Utilities", meta = (DisplayName = "Merge JSON Objects"))
    static UStructForgeJsonObject* MergeJsonObjects(const UStructForgeJsonObject* JsonA, const UStructForgeJsonObject* JsonB, bool bOverwriteExisting = true);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Utilities", meta = (DisplayName = "Pretty Print JSON"))
    static FString PrettyPrintJson(const FString& JsonString);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Utilities", meta = (DisplayName = "Minify JSON"))
    static FString MinifyJson(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Testing", meta = (DisplayName = "Create Sample Player Data"))
    static FPlayerData CreateSamplePlayerData();
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Testing", meta = (DisplayName = "Create Sample Game Settings"))
    static FGameSettings CreateSampleGameSettings();
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Testing", meta = (DisplayName = "Create Sample Inventory"))
    static TArray<FInventoryItem> CreateSampleInventory();
    
    // Generic struct serialization with wildcard support
    UFUNCTION(BlueprintCallable, Category = "StructForge|Core", CustomThunk, meta = (DisplayName = "Struct to JSON String", CustomStructureParam = "StructIn", CallInEditor = "true"))
    static bool StructToJsonString(const UStruct* StructIn, FString& JsonString, bool bPrettyPrint = false);
    DECLARE_FUNCTION(execStructToJsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Core", CustomThunk, meta = (DisplayName = "JSON String to Struct", CustomStructureParam = "StructOut", CallInEditor = "true"))
    static bool JsonStringToStruct(const FString& JsonString, UStruct* StructOut);
    DECLARE_FUNCTION(execJsonStringToStruct);
    
    // Configuration-based serialization
    UFUNCTION(BlueprintCallable, Category = "StructForge|Config", CustomThunk,
              meta = (DisplayName = "Struct to JSON String (With Config)", CustomStructureParam = "StructIn", CallInEditor = "true"))
    static bool StructToJsonStringWithConfig(const UStruct* StructIn, class UStructForgeConfig* Config, FString& JsonString, bool bPrettyPrint = false);
    DECLARE_FUNCTION(execStructToJsonStringWithConfig);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Config", CustomThunk,
              meta = (DisplayName = "JSON String to Struct (With Config)", CustomStructureParam = "StructOut", CallInEditor = "true"))
    static bool JsonStringToStructWithConfig(const FString& JsonString, class UStructForgeConfig* Config, UStruct* StructOut);
    DECLARE_FUNCTION(execJsonStringToStructWithConfig);
};