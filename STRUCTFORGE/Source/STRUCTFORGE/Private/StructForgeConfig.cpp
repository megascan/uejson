#include "StructForgeConfig.h"

FString UStructForgeConfig::GetJsonFieldName(const FString& StructName, const FString& FieldName) const
{
    for (const FStructFieldMapping& Mapping : FieldMappings)
    {
        if (Mapping.StructName == StructName && Mapping.FieldName == FieldName)
        {
            return Mapping.JsonFieldName.IsEmpty() ? FieldName : Mapping.JsonFieldName;
        }
    }
    return FieldName;
}

bool UStructForgeConfig::ShouldSerializeField(const FString& StructName, const FString& FieldName) const
{
    for (const FStructFieldMapping& Mapping : FieldMappings)
    {
        if (Mapping.StructName == StructName && Mapping.FieldName == FieldName)
        {
            return Mapping.bSerialize;
        }
    }
    return true; // Default to serializing if not specified
}