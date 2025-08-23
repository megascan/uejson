// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructForgeConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructForgeConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeConfig();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeConfig_NoRegister();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FStructFieldMapping();
UPackage* Z_Construct_UPackage__Script_STRUCTFORGE();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStructFieldMapping ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStructFieldMapping;
class UScriptStruct* FStructFieldMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStructFieldMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStructFieldMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructFieldMapping, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("StructFieldMapping"));
	}
	return Z_Registration_Info_UScriptStruct_FStructFieldMapping.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStructFieldMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[] = {
		{ "Category", "Field Mapping" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "Category", "Field Mapping" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonFieldName_MetaData[] = {
		{ "Category", "Field Mapping" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSerialize_MetaData[] = {
		{ "Category", "Field Mapping" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFieldName;
	static void NewProp_bSerialize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerialize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructFieldMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructFieldMapping, StructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructName_MetaData), NewProp_StructName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructFieldMapping, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_JsonFieldName = { "JsonFieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructFieldMapping, JsonFieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonFieldName_MetaData), NewProp_JsonFieldName_MetaData) };
void Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_bSerialize_SetBit(void* Obj)
{
	((FStructFieldMapping*)Obj)->bSerialize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_bSerialize = { "bSerialize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStructFieldMapping), &Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_bSerialize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSerialize_MetaData), NewProp_bSerialize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructFieldMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_JsonFieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewProp_bSerialize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructFieldMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructFieldMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"StructFieldMapping",
	Z_Construct_UScriptStruct_FStructFieldMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructFieldMapping_Statics::PropPointers),
	sizeof(FStructFieldMapping),
	alignof(FStructFieldMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructFieldMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructFieldMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructFieldMapping()
{
	if (!Z_Registration_Info_UScriptStruct_FStructFieldMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStructFieldMapping.InnerSingleton, Z_Construct_UScriptStruct_FStructFieldMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStructFieldMapping.InnerSingleton;
}
// ********** End ScriptStruct FStructFieldMapping *************************************************

// ********** Begin Class UStructForgeConfig Function GetJsonFieldName *****************************
struct Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics
{
	struct StructForgeConfig_eventGetJsonFieldName_Parms
	{
		FString StructName;
		FString FieldName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Config" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeConfig_eventGetJsonFieldName_Parms, StructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructName_MetaData), NewProp_StructName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeConfig_eventGetJsonFieldName_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeConfig_eventGetJsonFieldName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeConfig, nullptr, "GetJsonFieldName", Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::StructForgeConfig_eventGetJsonFieldName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::StructForgeConfig_eventGetJsonFieldName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeConfig::execGetJsonFieldName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StructName);
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetJsonFieldName(Z_Param_StructName,Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class UStructForgeConfig Function GetJsonFieldName *******************************

// ********** Begin Class UStructForgeConfig Function ShouldSerializeField *************************
struct Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics
{
	struct StructForgeConfig_eventShouldSerializeField_Parms
	{
		FString StructName;
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Config" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StructName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeConfig_eventShouldSerializeField_Parms, StructName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructName_MetaData), NewProp_StructName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeConfig_eventShouldSerializeField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeConfig_eventShouldSerializeField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeConfig_eventShouldSerializeField_Parms), &Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_StructName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeConfig, nullptr, "ShouldSerializeField", Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::StructForgeConfig_eventShouldSerializeField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::StructForgeConfig_eventShouldSerializeField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeConfig::execShouldSerializeField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StructName);
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSerializeField(Z_Param_StructName,Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class UStructForgeConfig Function ShouldSerializeField ***************************

// ********** Begin Class UStructForgeConfig *******************************************************
void UStructForgeConfig::StaticRegisterNativesUStructForgeConfig()
{
	UClass* Class = UStructForgeConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJsonFieldName", &UStructForgeConfig::execGetJsonFieldName },
		{ "ShouldSerializeField", &UStructForgeConfig::execShouldSerializeField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStructForgeConfig;
UClass* UStructForgeConfig::GetPrivateStaticClass()
{
	using TClass = UStructForgeConfig;
	if (!Z_Registration_Info_UClass_UStructForgeConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StructForgeConfig"),
			Z_Registration_Info_UClass_UStructForgeConfig.InnerSingleton,
			StaticRegisterNativesUStructForgeConfig,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UStructForgeConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UStructForgeConfig_NoRegister()
{
	return UStructForgeConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStructForgeConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Configuration asset for STRUCTFORGE JSON field mappings\n * Create this as a Data Asset in the editor to configure JSON serialization\n */" },
#endif
		{ "IncludePath", "StructForgeConfig.h" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration asset for STRUCTFORGE JSON field mappings\nCreate this as a Data Asset in the editor to configure JSON serialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldMappings_MetaData[] = {
		{ "Category", "JSON Configuration" },
		{ "ModuleRelativePath", "Public/StructForgeConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructForgeConfig_GetJsonFieldName, "GetJsonFieldName" }, // 576602621
		{ &Z_Construct_UFunction_UStructForgeConfig_ShouldSerializeField, "ShouldSerializeField" }, // 922955996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructForgeConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStructForgeConfig_Statics::NewProp_FieldMappings_Inner = { "FieldMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStructFieldMapping, METADATA_PARAMS(0, nullptr) }; // 3524787596
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStructForgeConfig_Statics::NewProp_FieldMappings = { "FieldMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStructForgeConfig, FieldMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldMappings_MetaData), NewProp_FieldMappings_MetaData) }; // 3524787596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructForgeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructForgeConfig_Statics::NewProp_FieldMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructForgeConfig_Statics::NewProp_FieldMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStructForgeConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructForgeConfig_Statics::ClassParams = {
	&UStructForgeConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStructForgeConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructForgeConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStructForgeConfig()
{
	if (!Z_Registration_Info_UClass_UStructForgeConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructForgeConfig.OuterSingleton, Z_Construct_UClass_UStructForgeConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructForgeConfig.OuterSingleton;
}
UStructForgeConfig::UStructForgeConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStructForgeConfig);
UStructForgeConfig::~UStructForgeConfig() {}
// ********** End Class UStructForgeConfig *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStructFieldMapping::StaticStruct, Z_Construct_UScriptStruct_FStructFieldMapping_Statics::NewStructOps, TEXT("StructFieldMapping"), &Z_Registration_Info_UScriptStruct_FStructFieldMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructFieldMapping), 3524787596U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStructForgeConfig, UStructForgeConfig::StaticClass, TEXT("UStructForgeConfig"), &Z_Registration_Info_UClass_UStructForgeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructForgeConfig), 2969752185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_2845266769(TEXT("/Script/STRUCTFORGE"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h__Script_STRUCTFORGE_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
