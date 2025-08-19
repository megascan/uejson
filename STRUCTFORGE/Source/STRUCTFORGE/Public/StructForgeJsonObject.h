#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "StructForgeJsonObject.generated.h"

UCLASS(BlueprintType)
class STRUCTFORGE_API UStructForgeJsonObject : public UObject
{
    GENERATED_BODY()
    
private:
    TSharedPtr<FJsonObject> JsonObject;
    
public:
    UStructForgeJsonObject();
    
    void SetJsonObject(TSharedPtr<FJsonObject> InJsonObject);
    TSharedPtr<FJsonObject> GetJsonObject() const;
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "Is Valid"))
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "To String"))
    FString ToString(bool bPrettyPrint = false) const;
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|JSON Object", meta = (DisplayName = "Clear"))
    void Clear();
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "Get Field Count"))
    int32 GetFieldCount() const;
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "Has Field"))
    bool HasField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|JSON Object", meta = (DisplayName = "Remove Field"))
    void RemoveField(const FString& FieldName);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "Get Field Names"))
    TArray<FString> GetFieldNames() const;
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|JSON Object", meta = (DisplayName = "Copy From"))
    void CopyFrom(const UStructForgeJsonObject* Other);
    
    UFUNCTION(BlueprintCallable, Category = "StructForge|JSON Object", meta = (DisplayName = "Merge With"))
    void MergeWith(const UStructForgeJsonObject* Other, bool bOverwriteExisting = true);
    
    UFUNCTION(BlueprintPure, Category = "StructForge|JSON Object", meta = (DisplayName = "Clone"))
    UStructForgeJsonObject* Clone() const;
    
    void SetStringField(const FString& FieldName, const FString& StringValue);
    void SetNumberField(const FString& FieldName, double NumberValue);
    void SetBoolField(const FString& FieldName, bool BoolValue);
    void SetObjectField(const FString& FieldName, const UStructForgeJsonObject* JsonObject);
    void SetArrayField(const FString& FieldName, const TArray<TSharedPtr<FJsonValue>>& Array);
    
    bool TryGetStringField(const FString& FieldName, FString& OutString) const;
    bool TryGetNumberField(const FString& FieldName, double& OutNumber) const;
    bool TryGetBoolField(const FString& FieldName, bool& OutBool) const;
    bool TryGetObjectField(const FString& FieldName, UStructForgeJsonObject*& OutObject) const;
    bool TryGetArrayField(const FString& FieldName, TArray<TSharedPtr<FJsonValue>>& OutArray) const;
    
    void SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray);
    void SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray);
    void SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray);
    
    bool TryGetStringArrayField(const FString& FieldName, TArray<FString>& OutStringArray) const;
    bool TryGetNumberArrayField(const FString& FieldName, TArray<float>& OutNumberArray) const;
    bool TryGetBoolArrayField(const FString& FieldName, TArray<bool>& OutBoolArray) const;
    
    static UStructForgeJsonObject* CreateFromJsonString(const FString& JsonString);
    static UStructForgeJsonObject* CreateEmpty();
};