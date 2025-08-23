#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dom/JsonObject.h"
#include "StructForgeTypes.h"
#include "StructForgeHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStructForgeOperationComplete, bool, bSuccess, const FString&, Message);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStructForgeAsyncComplete, bool, bSuccess, const FString&, Result);

UCLASS(BlueprintType, Blueprintable)
class STRUCTFORGE_API UStructForgeHandler : public UObject
{
    GENERATED_BODY()
    
public:
    UStructForgeHandler();
    
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Player Data", meta = (DisplayName = "Serialize Player Data"))
    static FStructForgeResult SerializePlayerData(const FPlayerData& PlayerData, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Player Data", meta = (DisplayName = "Deserialize Player Data"))
    static bool DeserializePlayerData(const FString& JsonString, FPlayerData& OutPlayerData, FString& OutError);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Game Settings", meta = (DisplayName = "Serialize Game Settings"))
    static FStructForgeResult SerializeGameSettings(const FGameSettings& Settings, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Game Settings", meta = (DisplayName = "Deserialize Game Settings"))
    static bool DeserializeGameSettings(const FString& JsonString, FGameSettings& OutSettings, FString& OutError);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Manual", meta = (DisplayName = "Create JSON Object"))
    static class UStructForgeJsonObject* CreateJsonObject();
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Manual", meta = (DisplayName = "Parse JSON String"))
    static class UStructForgeJsonObject* ParseJsonString(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Save JSON to File"))
    static FStructForgeResult SaveJsonToFile(const FString& JsonString, const FString& FilePath, bool bOverwrite = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Load JSON from File"))
    static FStructForgeResult LoadJsonFromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Save Player Data to File"))
    static bool SavePlayerDataToFile(const FPlayerData& PlayerData, const FString& FilePath, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|File IO", meta = (DisplayName = "Load Player Data from File"))
    static bool LoadPlayerDataFromFile(const FString& FilePath, FPlayerData& OutPlayerData, FString& OutError);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Validation", meta = (DisplayName = "Is Valid JSON"))
    static bool IsValidJsonString(const FString& JsonString);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|Validation", meta = (DisplayName = "Get JSON Depth"))
    static int32 GetJsonDepth(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Async", meta = (DisplayName = "Serialize Player Data Async"))
    void SerializePlayerDataAsync(const FPlayerData& PlayerData, const FString& FilePath, const FOnStructForgeAsyncComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Async", meta = (DisplayName = "Load Player Data Async"))
    void LoadPlayerDataAsync(const FString& FilePath, const FOnStructForgeAsyncComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Serialize String Array"))
    static FString SerializeStringArray(const TArray<FString>& StringArray, bool bPrettyPrint = false);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Deserialize String Array"))
    static bool DeserializeStringArray(const FString& JsonString, TArray<FString>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Serialize Int Array"))
    static FString SerializeIntArray(const TArray<int32>& IntArray, bool bPrettyPrint = false);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Arrays", meta = (DisplayName = "Deserialize Int Array"))
    static bool DeserializeIntArray(const FString& JsonString, TArray<int32>& OutArray);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Maps", meta = (DisplayName = "Serialize String Map"))
    static FString SerializeStringMap(const TMap<FString, FString>& StringMap, bool bPrettyPrint = false);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Maps", meta = (DisplayName = "Deserialize String Map"))
    static bool DeserializeStringMap(const FString& JsonString, TMap<FString, FString>& OutMap);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Batch", meta = (DisplayName = "Serialize Multiple Player Data"))
    static FString SerializePlayerDataArray(const TArray<FPlayerData>& Players, bool bPrettyPrint = true);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Batch", meta = (DisplayName = "Deserialize Multiple Player Data"))
    static bool DeserializePlayerDataArray(const FString& JsonString, TArray<FPlayerData>& OutPlayers);
    
    UPROPERTY(BlueprintAssignable, Category = "StructForge|Events")
    FOnStructForgeOperationComplete OnOperationComplete;
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Utilities", meta = (DisplayName = "Pretty Print JSON"))
    static FString PrettyPrintJson(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Utilities", meta = (DisplayName = "Minify JSON"))
    static FString MinifyJson(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Utilities", meta = (DisplayName = "Get JSON Size"))
    static int32 GetJsonSize(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|Utilities", meta = (DisplayName = "Merge JSON Objects"))
    static FString MergeJsonObjects(const FString& JsonA, const FString& JsonB, bool bOverwriteExisting = true);
    
public:
    static bool SerializeUStructToJsonObjectString(const UStruct* StructDefinition, const void* Struct, FString& OutJsonString, bool bPrettyPrint = false);
    static bool DeserializeJsonObjectStringToUStruct(const FString& JsonString, const UStruct* StructDefinition, void* OutStruct);
    
    static TSharedPtr<FJsonObject> UStructToJsonObject(const UStruct* StructDefinition, const void* Struct);
    static bool JsonObjectToUStruct(const TSharedPtr<FJsonObject>& JsonObject, const UStruct* StructDefinition, void* OutStruct);
    
    // Enhanced serialization with custom metadata support
    static bool SerializeUStructToJsonObjectStringWithMetadata(const UStruct* StructDefinition, const void* Struct, FString& OutJsonString, bool bPrettyPrint = false);
    static bool DeserializeJsonObjectStringToUStructWithMetadata(const FString& JsonString, const UStruct* StructDefinition, void* OutStruct);
    
    static TSharedPtr<FJsonObject> UStructToJsonObjectWithMetadata(const UStruct* StructDefinition, const void* Struct);
    static bool JsonObjectToUStructWithMetadata(const TSharedPtr<FJsonObject>& JsonObject, const UStruct* StructDefinition, void* OutStruct);
    
private:
    static bool ValidateJsonDepth(const TSharedPtr<FJsonObject>& JsonObject, int32 CurrentDepth, int32 MaxDepth);
    static int32 CalculateJsonDepth(const TSharedPtr<FJsonObject>& JsonObject, int32 CurrentDepth = 0);
    
    void ExecuteAsyncTask(TFunction<void()> Task);
    
    static constexpr int32 MAX_JSON_SIZE = 50 * 1024 * 1024;
    static constexpr int32 MAX_JSON_DEPTH = 100;
};