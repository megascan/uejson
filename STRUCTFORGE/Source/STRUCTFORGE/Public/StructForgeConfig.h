#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StructForgeConfig.generated.h"

USTRUCT(BlueprintType)
struct FStructFieldMapping
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Field Mapping")
    FString StructName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Field Mapping")
    FString FieldName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Field Mapping")
    FString JsonFieldName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Field Mapping")
    bool bSerialize = true;
};

/**
 * Configuration asset for STRUCTFORGE JSON field mappings
 * Create this as a Data Asset in the editor to configure JSON serialization
 */
UCLASS(BlueprintType)
class STRUCTFORGE_API UStructForgeConfig : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "JSON Configuration")
    TArray<FStructFieldMapping> FieldMappings;

    UFUNCTION(BlueprintCallable, Category = "StructForge|Config")
    FString GetJsonFieldName(const FString& StructName, const FString& FieldName) const;

    UFUNCTION(BlueprintCallable, Category = "StructForge|Config")
    bool ShouldSerializeField(const FString& StructName, const FString& FieldName) const;
};