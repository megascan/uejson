// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructForgeJsonObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructForgeJsonObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_STRUCTFORGE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStructForgeJsonObject Function Clear ************************************
struct Z_Construct_UFunction_UStructForgeJsonObject_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Clear" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function Clear **************************************

// ********** Begin Class UStructForgeJsonObject Function Clone ************************************
struct Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics
{
	struct StructForgeJsonObject_eventClone_Parms
	{
		UStructForgeJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Clone" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventClone_Parms, ReturnValue), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "Clone", Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::StructForgeJsonObject_eventClone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::StructForgeJsonObject_eventClone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_Clone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_Clone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execClone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStructForgeJsonObject**)Z_Param__Result=P_THIS->Clone();
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function Clone **************************************

// ********** Begin Class UStructForgeJsonObject Function CopyFrom *********************************
struct Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics
{
	struct StructForgeJsonObject_eventCopyFrom_Parms
	{
		const UStructForgeJsonObject* Other;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Copy From" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventCopyFrom_Parms, Other), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::NewProp_Other,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "CopyFrom", Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::StructForgeJsonObject_eventCopyFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::StructForgeJsonObject_eventCopyFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execCopyFrom)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyFrom(Z_Param_Other);
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function CopyFrom ***********************************

// ********** Begin Class UStructForgeJsonObject Function GetFieldCount ****************************
struct Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics
{
	struct StructForgeJsonObject_eventGetFieldCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Get Field Count" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventGetFieldCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "GetFieldCount", Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::StructForgeJsonObject_eventGetFieldCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::StructForgeJsonObject_eventGetFieldCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execGetFieldCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFieldCount();
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function GetFieldCount ******************************

// ********** Begin Class UStructForgeJsonObject Function GetFieldNames ****************************
struct Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics
{
	struct StructForgeJsonObject_eventGetFieldNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Get Field Names" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "GetFieldNames", Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::StructForgeJsonObject_eventGetFieldNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::StructForgeJsonObject_eventGetFieldNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execGetFieldNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function GetFieldNames ******************************

// ********** Begin Class UStructForgeJsonObject Function HasField *********************************
struct Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics
{
	struct StructForgeJsonObject_eventHasField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Has Field" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeJsonObject_eventHasField_Parms), &Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "HasField", Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::StructForgeJsonObject_eventHasField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::StructForgeJsonObject_eventHasField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_HasField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_HasField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execHasField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function HasField ***********************************

// ********** Begin Class UStructForgeJsonObject Function IsValid **********************************
struct Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics
{
	struct StructForgeJsonObject_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeJsonObject_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeJsonObject_eventIsValid_Parms), &Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "IsValid", Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::StructForgeJsonObject_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::StructForgeJsonObject_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function IsValid ************************************

// ********** Begin Class UStructForgeJsonObject Function MergeWith ********************************
struct Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics
{
	struct StructForgeJsonObject_eventMergeWith_Parms
	{
		const UStructForgeJsonObject* Other;
		bool bOverwriteExisting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "CPP_Default_bOverwriteExisting", "true" },
		{ "DisplayName", "Merge With" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static void NewProp_bOverwriteExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExisting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventMergeWith_Parms, Other), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
void Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_bOverwriteExisting_SetBit(void* Obj)
{
	((StructForgeJsonObject_eventMergeWith_Parms*)Obj)->bOverwriteExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_bOverwriteExisting = { "bOverwriteExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeJsonObject_eventMergeWith_Parms), &Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_bOverwriteExisting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::NewProp_bOverwriteExisting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "MergeWith", Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::StructForgeJsonObject_eventMergeWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::StructForgeJsonObject_eventMergeWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_MergeWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_MergeWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execMergeWith)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_Other);
	P_GET_UBOOL(Z_Param_bOverwriteExisting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MergeWith(Z_Param_Other,Z_Param_bOverwriteExisting);
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function MergeWith **********************************

// ********** Begin Class UStructForgeJsonObject Function RemoveField ******************************
struct Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics
{
	struct StructForgeJsonObject_eventRemoveField_Parms
	{
		FString FieldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "DisplayName", "Remove Field" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "RemoveField", Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::StructForgeJsonObject_eventRemoveField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::StructForgeJsonObject_eventRemoveField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_RemoveField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_RemoveField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execRemoveField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveField(Z_Param_FieldName);
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function RemoveField ********************************

// ********** Begin Class UStructForgeJsonObject Function ToString *********************************
struct Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics
{
	struct StructForgeJsonObject_eventToString_Parms
	{
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|JSON Object" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeJsonObject_eventToString_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeJsonObject_eventToString_Parms), &Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeJsonObject_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeJsonObject, nullptr, "ToString", Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::StructForgeJsonObject_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::StructForgeJsonObject_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeJsonObject_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeJsonObject_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeJsonObject::execToString)
{
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString(Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeJsonObject Function ToString ***********************************

// ********** Begin Class UStructForgeJsonObject ***************************************************
void UStructForgeJsonObject::StaticRegisterNativesUStructForgeJsonObject()
{
	UClass* Class = UStructForgeJsonObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UStructForgeJsonObject::execClear },
		{ "Clone", &UStructForgeJsonObject::execClone },
		{ "CopyFrom", &UStructForgeJsonObject::execCopyFrom },
		{ "GetFieldCount", &UStructForgeJsonObject::execGetFieldCount },
		{ "GetFieldNames", &UStructForgeJsonObject::execGetFieldNames },
		{ "HasField", &UStructForgeJsonObject::execHasField },
		{ "IsValid", &UStructForgeJsonObject::execIsValid },
		{ "MergeWith", &UStructForgeJsonObject::execMergeWith },
		{ "RemoveField", &UStructForgeJsonObject::execRemoveField },
		{ "ToString", &UStructForgeJsonObject::execToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStructForgeJsonObject;
UClass* UStructForgeJsonObject::GetPrivateStaticClass()
{
	using TClass = UStructForgeJsonObject;
	if (!Z_Registration_Info_UClass_UStructForgeJsonObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StructForgeJsonObject"),
			Z_Registration_Info_UClass_UStructForgeJsonObject.InnerSingleton,
			StaticRegisterNativesUStructForgeJsonObject,
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
	return Z_Registration_Info_UClass_UStructForgeJsonObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister()
{
	return UStructForgeJsonObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStructForgeJsonObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StructForgeJsonObject.h" },
		{ "ModuleRelativePath", "Public/StructForgeJsonObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructForgeJsonObject_Clear, "Clear" }, // 2293695084
		{ &Z_Construct_UFunction_UStructForgeJsonObject_Clone, "Clone" }, // 4271514298
		{ &Z_Construct_UFunction_UStructForgeJsonObject_CopyFrom, "CopyFrom" }, // 2692191124
		{ &Z_Construct_UFunction_UStructForgeJsonObject_GetFieldCount, "GetFieldCount" }, // 4231554508
		{ &Z_Construct_UFunction_UStructForgeJsonObject_GetFieldNames, "GetFieldNames" }, // 4004382474
		{ &Z_Construct_UFunction_UStructForgeJsonObject_HasField, "HasField" }, // 2368398566
		{ &Z_Construct_UFunction_UStructForgeJsonObject_IsValid, "IsValid" }, // 1263654984
		{ &Z_Construct_UFunction_UStructForgeJsonObject_MergeWith, "MergeWith" }, // 2267042759
		{ &Z_Construct_UFunction_UStructForgeJsonObject_RemoveField, "RemoveField" }, // 3771137169
		{ &Z_Construct_UFunction_UStructForgeJsonObject_ToString, "ToString" }, // 673767093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructForgeJsonObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStructForgeJsonObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeJsonObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructForgeJsonObject_Statics::ClassParams = {
	&UStructForgeJsonObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructForgeJsonObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStructForgeJsonObject()
{
	if (!Z_Registration_Info_UClass_UStructForgeJsonObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructForgeJsonObject.OuterSingleton, Z_Construct_UClass_UStructForgeJsonObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructForgeJsonObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStructForgeJsonObject);
UStructForgeJsonObject::~UStructForgeJsonObject() {}
// ********** End Class UStructForgeJsonObject *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h__Script_STRUCTFORGE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStructForgeJsonObject, UStructForgeJsonObject::StaticClass, TEXT("UStructForgeJsonObject"), &Z_Registration_Info_UClass_UStructForgeJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructForgeJsonObject), 2063798499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h__Script_STRUCTFORGE_3761491334(TEXT("/Script/STRUCTFORGE"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h__Script_STRUCTFORGE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h__Script_STRUCTFORGE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
