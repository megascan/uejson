// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructForgeBlueprintLibrary.h"
#include "StructForgeJsonObject.h"
#include "StructForgeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructForgeBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary_NoRegister();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeConfig_NoRegister();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettings();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
UPackage* Z_Construct_UPackage__Script_STRUCTFORGE();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStructForgeBlueprintLibrary Function CreateJsonObject *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics
{
	struct StructForgeBlueprintLibrary_eventCreateJsonObject_Parms
	{
		UStructForgeJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Core" },
		{ "DisplayName", "Create Empty JSON Object" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventCreateJsonObject_Parms, ReturnValue), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "CreateJsonObject", Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::StructForgeBlueprintLibrary_eventCreateJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::StructForgeBlueprintLibrary_eventCreateJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execCreateJsonObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStructForgeJsonObject**)Z_Param__Result=UStructForgeBlueprintLibrary::CreateJsonObject();
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function CreateJsonObject *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function CreateSampleGameSettings ***********
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics
{
	struct StructForgeBlueprintLibrary_eventCreateSampleGameSettings_Parms
	{
		FGameSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Testing" },
		{ "DisplayName", "Create Sample Game Settings" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventCreateSampleGameSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(0, nullptr) }; // 1248772219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "CreateSampleGameSettings", Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::StructForgeBlueprintLibrary_eventCreateSampleGameSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::StructForgeBlueprintLibrary_eventCreateSampleGameSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execCreateSampleGameSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameSettings*)Z_Param__Result=UStructForgeBlueprintLibrary::CreateSampleGameSettings();
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function CreateSampleGameSettings *************

// ********** Begin Class UStructForgeBlueprintLibrary Function CreateSampleInventory **************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics
{
	struct StructForgeBlueprintLibrary_eventCreateSampleInventory_Parms
	{
		TArray<FInventoryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Testing" },
		{ "DisplayName", "Create Sample Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2732628929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventCreateSampleInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2732628929
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "CreateSampleInventory", Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::StructForgeBlueprintLibrary_eventCreateSampleInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::StructForgeBlueprintLibrary_eventCreateSampleInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execCreateSampleInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryItem>*)Z_Param__Result=UStructForgeBlueprintLibrary::CreateSampleInventory();
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function CreateSampleInventory ****************

// ********** Begin Class UStructForgeBlueprintLibrary Function CreateSamplePlayerData *************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics
{
	struct StructForgeBlueprintLibrary_eventCreateSamplePlayerData_Parms
	{
		FPlayerData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Testing" },
		{ "DisplayName", "Create Sample Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventCreateSamplePlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "CreateSamplePlayerData", Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::StructForgeBlueprintLibrary_eventCreateSamplePlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::StructForgeBlueprintLibrary_eventCreateSamplePlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execCreateSamplePlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerData*)Z_Param__Result=UStructForgeBlueprintLibrary::CreateSamplePlayerData();
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function CreateSamplePlayerData ***************

// ********** Begin Class UStructForgeBlueprintLibrary Function GameSettingsToJson *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics
{
	struct StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms
	{
		FGameSettings Settings;
		FString OutJsonString;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Game Settings to JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms, Settings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1248772219
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GameSettingsToJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::StructForgeBlueprintLibrary_eventGameSettingsToJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGameSettingsToJson)
{
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GameSettingsToJson(Z_Param_Out_Settings,Z_Param_Out_OutJsonString,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GameSettingsToJson *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetAllJsonKeys *********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics
{
	struct StructForgeBlueprintLibrary_eventGetAllJsonKeys_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Get All Keys" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetAllJsonKeys_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetAllJsonKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetAllJsonKeys", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::StructForgeBlueprintLibrary_eventGetAllJsonKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::StructForgeBlueprintLibrary_eventGetAllJsonKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetAllJsonKeys)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UStructForgeBlueprintLibrary::GetAllJsonKeys(Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetAllJsonKeys ***********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonBool ************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonBool_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		bool DefaultValue;
		bool bFound;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Boolean from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonBool_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonBool_Parms*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonBool_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonBool_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonBool_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonBool_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonBool", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::StructForgeBlueprintLibrary_eventGetJsonBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::StructForgeBlueprintLibrary_eventGetJsonBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonBool)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonBool(Z_Param_JsonObject,Z_Param_Key,Z_Param_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonBool **************************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonBoolArray *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<bool> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Get Bool Array from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonBoolArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::StructForgeBlueprintLibrary_eventGetJsonBoolArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonBoolArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(bool,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonBoolArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonBoolArray *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonFloat ***********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonFloat_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		float DefaultValue;
		bool bFound;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Float from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloat_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloat_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonFloat_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonFloat_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonFloat", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::StructForgeBlueprintLibrary_eventGetJsonFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::StructForgeBlueprintLibrary_eventGetJsonFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonFloat)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonFloat(Z_Param_JsonObject,Z_Param_Key,Z_Param_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonFloat *************************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonFloatArray ******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<float> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Get Float Array from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonFloatArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::StructForgeBlueprintLibrary_eventGetJsonFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonFloatArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonFloatArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonFloatArray ********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonInt *************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonInt_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		int32 DefaultValue;
		bool bFound;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Integer from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonInt_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonInt_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonInt_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonInt_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonInt", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::StructForgeBlueprintLibrary_eventGetJsonInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::StructForgeBlueprintLibrary_eventGetJsonInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonInt)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonInt(Z_Param_JsonObject,Z_Param_Key,Z_Param_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonInt ***************************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonIntArray ********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<int32> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Get Int Array from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonIntArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::StructForgeBlueprintLibrary_eventGetJsonIntArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonIntArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonIntArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonIntArray **********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonRotator *********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonRotator_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		FRotator DefaultValue;
		bool bFound;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Rotator from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonRotator_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonRotator_Parms, DefaultValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonRotator_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonRotator_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonRotator", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::StructForgeBlueprintLibrary_eventGetJsonRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::StructForgeBlueprintLibrary_eventGetJsonRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonRotator)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonRotator(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonRotator ***********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonString **********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonString_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		FString DefaultValue;
		bool bFound;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get String from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonString_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonString_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonString_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonString_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonString", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::StructForgeBlueprintLibrary_eventGetJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::StructForgeBlueprintLibrary_eventGetJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonString)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonString(Z_Param_JsonObject,Z_Param_Key,Z_Param_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonString ************************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonStringArray *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<FString> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Get String Array from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonStringArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::StructForgeBlueprintLibrary_eventGetJsonStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonStringArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonStringArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonStringArray *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonText ************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonText_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		FText DefaultValue;
		bool bFound;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Text from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonText_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonText_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonText_Parms, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonText_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonText_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonText", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::StructForgeBlueprintLibrary_eventGetJsonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::StructForgeBlueprintLibrary_eventGetJsonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonText)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonText(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonText **************************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonTransform *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonTransform_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		FTransform DefaultValue;
		bool bFound;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Transform from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonTransform_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonTransform_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonTransform_Parms, DefaultValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonTransform_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonTransform_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonTransform", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::StructForgeBlueprintLibrary_eventGetJsonTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::StructForgeBlueprintLibrary_eventGetJsonTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonTransform)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonTransform(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonTransform *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function GetJsonVector **********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics
{
	struct StructForgeBlueprintLibrary_eventGetJsonVector_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		FVector DefaultValue;
		bool bFound;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Getters" },
		{ "DisplayName", "Get Vector from JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonVector_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonVector_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventGetJsonVector_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventGetJsonVector_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventGetJsonVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "GetJsonVector", Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::StructForgeBlueprintLibrary_eventGetJsonVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::StructForgeBlueprintLibrary_eventGetJsonVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execGetJsonVector)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DefaultValue);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UStructForgeBlueprintLibrary::GetJsonVector(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_DefaultValue,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function GetJsonVector ************************

// ********** Begin Class UStructForgeBlueprintLibrary Function HasJsonKey *************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics
{
	struct StructForgeBlueprintLibrary_eventHasJsonKey_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Has Key?" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventHasJsonKey_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventHasJsonKey_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventHasJsonKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventHasJsonKey_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "HasJsonKey", Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::StructForgeBlueprintLibrary_eventHasJsonKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::StructForgeBlueprintLibrary_eventHasJsonKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execHasJsonKey)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::HasJsonKey(Z_Param_JsonObject,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function HasJsonKey ***************************

// ********** Begin Class UStructForgeBlueprintLibrary Function InventoryItemToJson ****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics
{
	struct StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms
	{
		FInventoryItem Item;
		FString OutJsonString;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "Inventory Item to JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2732628929
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "InventoryItemToJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::StructForgeBlueprintLibrary_eventInventoryItemToJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execInventoryItemToJson)
{
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_Item);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::InventoryItemToJson(Z_Param_Out_Item,Z_Param_Out_OutJsonString,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function InventoryItemToJson ******************

// ********** Begin Class UStructForgeBlueprintLibrary Function IsValidJson ************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics
{
	struct StructForgeBlueprintLibrary_eventIsValidJson_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Validation" },
		{ "CompactNodeTitle", "Valid?" },
		{ "DisplayName", "Is Valid JSON?" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventIsValidJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventIsValidJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventIsValidJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "IsValidJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::StructForgeBlueprintLibrary_eventIsValidJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::StructForgeBlueprintLibrary_eventIsValidJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execIsValidJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::IsValidJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function IsValidJson **************************

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonObjectToString *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonObjectToString_Parms
	{
		const UStructForgeJsonObject* JsonObject;
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Core" },
		{ "CompactNodeTitle", "->String" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "JSON to String" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonObjectToString_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonObject_MetaData), NewProp_JsonObject_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonObjectToString_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonObjectToString_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonObjectToString", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::StructForgeBlueprintLibrary_eventJsonObjectToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::StructForgeBlueprintLibrary_eventJsonObjectToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonObjectToString)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeBlueprintLibrary::JsonObjectToString(Z_Param_JsonObject,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonObjectToString *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonStringToStruct *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms
	{
		FString JsonString;
		UStruct* StructOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StructForge|Core" },
		{ "CustomStructureParam", "StructOut" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "JSON String to Struct" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_StructOut = { "StructOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms, StructOut), Z_Construct_UClass_UStruct, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_StructOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonStringToStruct", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::StructForgeBlueprintLibrary_eventJsonStringToStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonStringToStruct *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonStringToStructWithConfig *******
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms
	{
		FString JsonString;
		UStructForgeConfig* Config;
		UStruct* StructOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StructForge|Config" },
		{ "CustomStructureParam", "StructOut" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "JSON String to Struct (With Config)" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms, Config), Z_Construct_UClass_UStructForgeConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_StructOut = { "StructOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms, StructOut), Z_Construct_UClass_UStruct, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_StructOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonStringToStructWithConfig", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::StructForgeBlueprintLibrary_eventJsonStringToStructWithConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonStringToStructWithConfig *********

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonToGameSettings *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms
	{
		FString JsonString;
		FGameSettings OutSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "DisplayName", "JSON to Game Settings" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms, OutSettings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(0, nullptr) }; // 1248772219
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_OutSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonToGameSettings", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::StructForgeBlueprintLibrary_eventJsonToGameSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonToGameSettings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_OutSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::JsonToGameSettings(Z_Param_JsonString,Z_Param_Out_OutSettings);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonToGameSettings *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonToInventoryItem ****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms
	{
		FString JsonString;
		FInventoryItem OutItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "DisplayName", "JSON to Inventory Item" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_OutItem = { "OutItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms, OutItem), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2732628929
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_OutItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonToInventoryItem", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::StructForgeBlueprintLibrary_eventJsonToInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonToInventoryItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_OutItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::JsonToInventoryItem(Z_Param_JsonString,Z_Param_Out_OutItem);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonToInventoryItem ******************

// ********** Begin Class UStructForgeBlueprintLibrary Function JsonToPlayerData *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics
{
	struct StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms
	{
		FString JsonString;
		FPlayerData OutPlayerData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "DisplayName", "JSON to Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_OutPlayerData = { "OutPlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms, OutPlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_OutPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "JsonToPlayerData", Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::StructForgeBlueprintLibrary_eventJsonToPlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execJsonToPlayerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_OutPlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::JsonToPlayerData(Z_Param_JsonString,Z_Param_Out_OutPlayerData);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function JsonToPlayerData *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function LoadGameSettingsFromFile ***********
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics
{
	struct StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms
	{
		FString FilePath;
		FGameSettings OutSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Load Game Settings from File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms, OutSettings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(0, nullptr) }; // 1248772219
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_OutSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "LoadGameSettingsFromFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::StructForgeBlueprintLibrary_eventLoadGameSettingsFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execLoadGameSettingsFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_OutSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::LoadGameSettingsFromFile(Z_Param_FilePath,Z_Param_Out_OutSettings);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function LoadGameSettingsFromFile *************

// ********** Begin Class UStructForgeBlueprintLibrary Function LoadJsonFromFile *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics
{
	struct StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms
	{
		FString FilePath;
		FString OutJsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Load JSON from File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "LoadJsonFromFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::StructForgeBlueprintLibrary_eventLoadJsonFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execLoadJsonFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::LoadJsonFromFile(Z_Param_FilePath,Z_Param_Out_OutJsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function LoadJsonFromFile *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function LoadPlayerDataFromFile *************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics
{
	struct StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms
	{
		FString FilePath;
		FPlayerData OutPlayerData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Load Player Data from File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_OutPlayerData = { "OutPlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms, OutPlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_OutPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "LoadPlayerDataFromFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::StructForgeBlueprintLibrary_eventLoadPlayerDataFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execLoadPlayerDataFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_OutPlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::LoadPlayerDataFromFile(Z_Param_FilePath,Z_Param_Out_OutPlayerData);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function LoadPlayerDataFromFile ***************

// ********** Begin Class UStructForgeBlueprintLibrary Function MergeJsonObjects *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics
{
	struct StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms
	{
		const UStructForgeJsonObject* JsonA;
		const UStructForgeJsonObject* JsonB;
		bool bOverwriteExisting;
		UStructForgeJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "CPP_Default_bOverwriteExisting", "true" },
		{ "DisplayName", "Merge JSON Objects" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonB;
	static void NewProp_bOverwriteExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExisting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_JsonA = { "JsonA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms, JsonA), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonA_MetaData), NewProp_JsonA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_JsonB = { "JsonB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms, JsonB), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonB_MetaData), NewProp_JsonB_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_bOverwriteExisting_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms*)Obj)->bOverwriteExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_bOverwriteExisting = { "bOverwriteExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_bOverwriteExisting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms, ReturnValue), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_JsonA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_JsonB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_bOverwriteExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "MergeJsonObjects", Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::StructForgeBlueprintLibrary_eventMergeJsonObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execMergeJsonObjects)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonA);
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonB);
	P_GET_UBOOL(Z_Param_bOverwriteExisting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStructForgeJsonObject**)Z_Param__Result=UStructForgeBlueprintLibrary::MergeJsonObjects(Z_Param_JsonA,Z_Param_JsonB,Z_Param_bOverwriteExisting);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function MergeJsonObjects *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function MinifyJson *************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics
{
	struct StructForgeBlueprintLibrary_eventMinifyJson_Parms
	{
		FString JsonString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Minify JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventMinifyJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventMinifyJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "MinifyJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::StructForgeBlueprintLibrary_eventMinifyJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::StructForgeBlueprintLibrary_eventMinifyJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execMinifyJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeBlueprintLibrary::MinifyJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function MinifyJson ***************************

// ********** Begin Class UStructForgeBlueprintLibrary Function ParseJsonString ********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics
{
	struct StructForgeBlueprintLibrary_eventParseJsonString_Parms
	{
		FString JsonString;
		UStructForgeJsonObject* OutJsonObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Core" },
		{ "DisplayName", "Parse JSON String" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutJsonObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventParseJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_OutJsonObject = { "OutJsonObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventParseJsonString_Parms, OutJsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventParseJsonString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventParseJsonString_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_OutJsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "ParseJsonString", Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::StructForgeBlueprintLibrary_eventParseJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::StructForgeBlueprintLibrary_eventParseJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execParseJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_OBJECT_REF(UStructForgeJsonObject,Z_Param_Out_OutJsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::ParseJsonString(Z_Param_JsonString,P_ARG_GC_BARRIER(Z_Param_Out_OutJsonObject));
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function ParseJsonString **********************

// ********** Begin Class UStructForgeBlueprintLibrary Function PlayerDataToJson *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics
{
	struct StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms
	{
		FPlayerData PlayerData;
		FString OutJsonString;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Structs" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Player Data to JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms, OutJsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_OutJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "PlayerDataToJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::StructForgeBlueprintLibrary_eventPlayerDataToJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execPlayerDataToJson)
{
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_PlayerData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::PlayerDataToJson(Z_Param_Out_PlayerData,Z_Param_Out_OutJsonString,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function PlayerDataToJson *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function PrettyPrintJson ********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics
{
	struct StructForgeBlueprintLibrary_eventPrettyPrintJson_Parms
	{
		FString JsonString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Pretty Print JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventPrettyPrintJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventPrettyPrintJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "PrettyPrintJson", Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::StructForgeBlueprintLibrary_eventPrettyPrintJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::StructForgeBlueprintLibrary_eventPrettyPrintJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execPrettyPrintJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeBlueprintLibrary::PrettyPrintJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function PrettyPrintJson **********************

// ********** Begin Class UStructForgeBlueprintLibrary Function RemoveJsonKey **********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics
{
	struct StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Remove Key" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "RemoveJsonKey", Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::StructForgeBlueprintLibrary_eventRemoveJsonKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execRemoveJsonKey)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::RemoveJsonKey(Z_Param_JsonObject,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function RemoveJsonKey ************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SaveGameSettingsToFile *************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics
{
	struct StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms
	{
		FGameSettings Settings;
		FString FilePath;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Save Game Settings to File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms, Settings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1248772219
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SaveGameSettingsToFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::StructForgeBlueprintLibrary_eventSaveGameSettingsToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSaveGameSettingsToFile)
{
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::SaveGameSettingsToFile(Z_Param_Out_Settings,Z_Param_FilePath,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SaveGameSettingsToFile ***************

// ********** Begin Class UStructForgeBlueprintLibrary Function SaveJsonToFile *********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics
{
	struct StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms
	{
		FString JsonString;
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Save JSON to File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SaveJsonToFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::StructForgeBlueprintLibrary_eventSaveJsonToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSaveJsonToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::SaveJsonToFile(Z_Param_JsonString,Z_Param_FilePath);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SaveJsonToFile ***********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SavePlayerDataToFile ***************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics
{
	struct StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms
	{
		FPlayerData PlayerData;
		FString FilePath;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Save Player Data to File" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SavePlayerDataToFile", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::StructForgeBlueprintLibrary_eventSavePlayerDataToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSavePlayerDataToFile)
{
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_PlayerData);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeBlueprintLibrary::SavePlayerDataToFile(Z_Param_Out_PlayerData,Z_Param_FilePath,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SavePlayerDataToFile *****************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonBool ************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonBool_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Boolean in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonBool_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventSetJsonBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventSetJsonBool_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonBool", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::StructForgeBlueprintLibrary_eventSetJsonBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::StructForgeBlueprintLibrary_eventSetJsonBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonBool)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonBool(Z_Param_JsonObject,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonBool **************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonBoolArray *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<bool> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Set Bool Array in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonBoolArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::StructForgeBlueprintLibrary_eventSetJsonBoolArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonBoolArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(bool,Z_Param_Out_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonBoolArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Array);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonBoolArray *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonFloat ***********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonFloat_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Float in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloat_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonFloat", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::StructForgeBlueprintLibrary_eventSetJsonFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::StructForgeBlueprintLibrary_eventSetJsonFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonFloat)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonFloat(Z_Param_JsonObject,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonFloat *************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonFloatArray ******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<float> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Set Float Array in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonFloatArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::StructForgeBlueprintLibrary_eventSetJsonFloatArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonFloatArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(float,Z_Param_Out_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonFloatArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Array);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonFloatArray ********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonInt *************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonInt_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Integer in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonInt_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonInt", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::StructForgeBlueprintLibrary_eventSetJsonInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::StructForgeBlueprintLibrary_eventSetJsonInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonInt)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonInt(Z_Param_JsonObject,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonInt ***************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonIntArray ********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<int32> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Set Int Array in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonIntArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::StructForgeBlueprintLibrary_eventSetJsonIntArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonIntArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonIntArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Array);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonIntArray **********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonRotator *********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonRotator_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		FRotator Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Rotator in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonRotator_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonRotator", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::StructForgeBlueprintLibrary_eventSetJsonRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::StructForgeBlueprintLibrary_eventSetJsonRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonRotator)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonRotator(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonRotator ***********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonString **********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonString_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set String in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonString_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonString", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::StructForgeBlueprintLibrary_eventSetJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::StructForgeBlueprintLibrary_eventSetJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonString)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonString(Z_Param_JsonObject,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonString ************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonStringArray *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		TArray<FString> Array;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Set String Array in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonStringArray", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::StructForgeBlueprintLibrary_eventSetJsonStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonStringArray)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonStringArray(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Array);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonStringArray *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonText ************************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonText_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Text in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonText_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonText_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonText_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonText", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::StructForgeBlueprintLibrary_eventSetJsonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::StructForgeBlueprintLibrary_eventSetJsonText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonText)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonText(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonText **************************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonTransform *******************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonTransform_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		FTransform Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Transform in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonTransform_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonTransform_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonTransform_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonTransform", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::StructForgeBlueprintLibrary_eventSetJsonTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::StructForgeBlueprintLibrary_eventSetJsonTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonTransform)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonTransform(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonTransform *********************

// ********** Begin Class UStructForgeBlueprintLibrary Function SetJsonVector **********************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics
{
	struct StructForgeBlueprintLibrary_eventSetJsonVector_Parms
	{
		UStructForgeJsonObject* JsonObject;
		FString Key;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Setters" },
		{ "DisplayName", "Set Vector in JSON" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonVector_Parms, JsonObject), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventSetJsonVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "SetJsonVector", Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::StructForgeBlueprintLibrary_eventSetJsonVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::StructForgeBlueprintLibrary_eventSetJsonVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeBlueprintLibrary::execSetJsonVector)
{
	P_GET_OBJECT(UStructForgeJsonObject,Z_Param_JsonObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructForgeBlueprintLibrary::SetJsonVector(Z_Param_JsonObject,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UStructForgeBlueprintLibrary Function SetJsonVector ************************

// ********** Begin Class UStructForgeBlueprintLibrary Function StructToJsonString *****************
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics
{
	struct StructForgeBlueprintLibrary_eventStructToJsonString_Parms
	{
		const UStruct* StructIn;
		FString JsonString;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StructForge|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic struct serialization with wildcard support\n" },
#endif
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "CustomStructureParam", "StructIn" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Struct to JSON String" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic struct serialization with wildcard support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructIn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_StructIn = { "StructIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventStructToJsonString_Parms, StructIn), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructIn_MetaData), NewProp_StructIn_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventStructToJsonString_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventStructToJsonString_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventStructToJsonString_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventStructToJsonString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventStructToJsonString_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_StructIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "StructToJsonString", Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::StructForgeBlueprintLibrary_eventStructToJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::StructForgeBlueprintLibrary_eventStructToJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructForgeBlueprintLibrary Function StructToJsonString *******************

// ********** Begin Class UStructForgeBlueprintLibrary Function StructToJsonStringWithConfig *******
struct Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics
{
	struct StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms
	{
		const UStruct* StructIn;
		UStructForgeConfig* Config;
		FString JsonString;
		bool bPrettyPrint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "StructForge|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration-based serialization\n" },
#endif
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "CustomStructureParam", "StructIn" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Struct to JSON String (With Config)" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration-based serialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_StructIn = { "StructIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms, StructIn), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructIn_MetaData), NewProp_StructIn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms, Config), Z_Construct_UClass_UStructForgeConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms), &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_StructIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeBlueprintLibrary, nullptr, "StructToJsonStringWithConfig", Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::StructForgeBlueprintLibrary_eventStructToJsonStringWithConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructForgeBlueprintLibrary Function StructToJsonStringWithConfig *********

// ********** Begin Class UStructForgeBlueprintLibrary *********************************************
void UStructForgeBlueprintLibrary::StaticRegisterNativesUStructForgeBlueprintLibrary()
{
	UClass* Class = UStructForgeBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateJsonObject", &UStructForgeBlueprintLibrary::execCreateJsonObject },
		{ "CreateSampleGameSettings", &UStructForgeBlueprintLibrary::execCreateSampleGameSettings },
		{ "CreateSampleInventory", &UStructForgeBlueprintLibrary::execCreateSampleInventory },
		{ "CreateSamplePlayerData", &UStructForgeBlueprintLibrary::execCreateSamplePlayerData },
		{ "GameSettingsToJson", &UStructForgeBlueprintLibrary::execGameSettingsToJson },
		{ "GetAllJsonKeys", &UStructForgeBlueprintLibrary::execGetAllJsonKeys },
		{ "GetJsonBool", &UStructForgeBlueprintLibrary::execGetJsonBool },
		{ "GetJsonBoolArray", &UStructForgeBlueprintLibrary::execGetJsonBoolArray },
		{ "GetJsonFloat", &UStructForgeBlueprintLibrary::execGetJsonFloat },
		{ "GetJsonFloatArray", &UStructForgeBlueprintLibrary::execGetJsonFloatArray },
		{ "GetJsonInt", &UStructForgeBlueprintLibrary::execGetJsonInt },
		{ "GetJsonIntArray", &UStructForgeBlueprintLibrary::execGetJsonIntArray },
		{ "GetJsonRotator", &UStructForgeBlueprintLibrary::execGetJsonRotator },
		{ "GetJsonString", &UStructForgeBlueprintLibrary::execGetJsonString },
		{ "GetJsonStringArray", &UStructForgeBlueprintLibrary::execGetJsonStringArray },
		{ "GetJsonText", &UStructForgeBlueprintLibrary::execGetJsonText },
		{ "GetJsonTransform", &UStructForgeBlueprintLibrary::execGetJsonTransform },
		{ "GetJsonVector", &UStructForgeBlueprintLibrary::execGetJsonVector },
		{ "HasJsonKey", &UStructForgeBlueprintLibrary::execHasJsonKey },
		{ "InventoryItemToJson", &UStructForgeBlueprintLibrary::execInventoryItemToJson },
		{ "IsValidJson", &UStructForgeBlueprintLibrary::execIsValidJson },
		{ "JsonObjectToString", &UStructForgeBlueprintLibrary::execJsonObjectToString },
		{ "JsonStringToStruct", &UStructForgeBlueprintLibrary::execJsonStringToStruct },
		{ "JsonStringToStructWithConfig", &UStructForgeBlueprintLibrary::execJsonStringToStructWithConfig },
		{ "JsonToGameSettings", &UStructForgeBlueprintLibrary::execJsonToGameSettings },
		{ "JsonToInventoryItem", &UStructForgeBlueprintLibrary::execJsonToInventoryItem },
		{ "JsonToPlayerData", &UStructForgeBlueprintLibrary::execJsonToPlayerData },
		{ "LoadGameSettingsFromFile", &UStructForgeBlueprintLibrary::execLoadGameSettingsFromFile },
		{ "LoadJsonFromFile", &UStructForgeBlueprintLibrary::execLoadJsonFromFile },
		{ "LoadPlayerDataFromFile", &UStructForgeBlueprintLibrary::execLoadPlayerDataFromFile },
		{ "MergeJsonObjects", &UStructForgeBlueprintLibrary::execMergeJsonObjects },
		{ "MinifyJson", &UStructForgeBlueprintLibrary::execMinifyJson },
		{ "ParseJsonString", &UStructForgeBlueprintLibrary::execParseJsonString },
		{ "PlayerDataToJson", &UStructForgeBlueprintLibrary::execPlayerDataToJson },
		{ "PrettyPrintJson", &UStructForgeBlueprintLibrary::execPrettyPrintJson },
		{ "RemoveJsonKey", &UStructForgeBlueprintLibrary::execRemoveJsonKey },
		{ "SaveGameSettingsToFile", &UStructForgeBlueprintLibrary::execSaveGameSettingsToFile },
		{ "SaveJsonToFile", &UStructForgeBlueprintLibrary::execSaveJsonToFile },
		{ "SavePlayerDataToFile", &UStructForgeBlueprintLibrary::execSavePlayerDataToFile },
		{ "SetJsonBool", &UStructForgeBlueprintLibrary::execSetJsonBool },
		{ "SetJsonBoolArray", &UStructForgeBlueprintLibrary::execSetJsonBoolArray },
		{ "SetJsonFloat", &UStructForgeBlueprintLibrary::execSetJsonFloat },
		{ "SetJsonFloatArray", &UStructForgeBlueprintLibrary::execSetJsonFloatArray },
		{ "SetJsonInt", &UStructForgeBlueprintLibrary::execSetJsonInt },
		{ "SetJsonIntArray", &UStructForgeBlueprintLibrary::execSetJsonIntArray },
		{ "SetJsonRotator", &UStructForgeBlueprintLibrary::execSetJsonRotator },
		{ "SetJsonString", &UStructForgeBlueprintLibrary::execSetJsonString },
		{ "SetJsonStringArray", &UStructForgeBlueprintLibrary::execSetJsonStringArray },
		{ "SetJsonText", &UStructForgeBlueprintLibrary::execSetJsonText },
		{ "SetJsonTransform", &UStructForgeBlueprintLibrary::execSetJsonTransform },
		{ "SetJsonVector", &UStructForgeBlueprintLibrary::execSetJsonVector },
		{ "StructToJsonString", &UStructForgeBlueprintLibrary::execStructToJsonString },
		{ "StructToJsonStringWithConfig", &UStructForgeBlueprintLibrary::execStructToJsonStringWithConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStructForgeBlueprintLibrary;
UClass* UStructForgeBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UStructForgeBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StructForgeBlueprintLibrary"),
			Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUStructForgeBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary_NoRegister()
{
	return UStructForgeBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StructForgeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/StructForgeBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateJsonObject, "CreateJsonObject" }, // 2013975713
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleGameSettings, "CreateSampleGameSettings" }, // 1306038012
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSampleInventory, "CreateSampleInventory" }, // 433991763
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_CreateSamplePlayerData, "CreateSamplePlayerData" }, // 3676663986
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GameSettingsToJson, "GameSettingsToJson" }, // 1600083884
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetAllJsonKeys, "GetAllJsonKeys" }, // 1517217723
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBool, "GetJsonBool" }, // 2493738908
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonBoolArray, "GetJsonBoolArray" }, // 1669636543
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloat, "GetJsonFloat" }, // 4023325059
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonFloatArray, "GetJsonFloatArray" }, // 3740604146
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonInt, "GetJsonInt" }, // 3162991726
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonIntArray, "GetJsonIntArray" }, // 3666523995
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonRotator, "GetJsonRotator" }, // 2780010028
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonString, "GetJsonString" }, // 2695265340
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonStringArray, "GetJsonStringArray" }, // 1612079586
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonText, "GetJsonText" }, // 183710519
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonTransform, "GetJsonTransform" }, // 909109054
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_GetJsonVector, "GetJsonVector" }, // 2339704623
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_HasJsonKey, "HasJsonKey" }, // 1859988222
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_InventoryItemToJson, "InventoryItemToJson" }, // 132796299
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_IsValidJson, "IsValidJson" }, // 2107555303
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonObjectToString, "JsonObjectToString" }, // 2461411857
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStruct, "JsonStringToStruct" }, // 3702800419
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonStringToStructWithConfig, "JsonStringToStructWithConfig" }, // 3608797675
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToGameSettings, "JsonToGameSettings" }, // 2454598058
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToInventoryItem, "JsonToInventoryItem" }, // 3652853618
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_JsonToPlayerData, "JsonToPlayerData" }, // 3969124292
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadGameSettingsFromFile, "LoadGameSettingsFromFile" }, // 2324831043
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadJsonFromFile, "LoadJsonFromFile" }, // 1390325438
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_LoadPlayerDataFromFile, "LoadPlayerDataFromFile" }, // 1435460432
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_MergeJsonObjects, "MergeJsonObjects" }, // 1455787926
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_MinifyJson, "MinifyJson" }, // 1768498689
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_ParseJsonString, "ParseJsonString" }, // 1765056609
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_PlayerDataToJson, "PlayerDataToJson" }, // 2698302718
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_PrettyPrintJson, "PrettyPrintJson" }, // 3577250762
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_RemoveJsonKey, "RemoveJsonKey" }, // 2047727412
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveGameSettingsToFile, "SaveGameSettingsToFile" }, // 3266585283
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SaveJsonToFile, "SaveJsonToFile" }, // 1665527643
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SavePlayerDataToFile, "SavePlayerDataToFile" }, // 1785198010
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBool, "SetJsonBool" }, // 2706476320
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonBoolArray, "SetJsonBoolArray" }, // 1549540945
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloat, "SetJsonFloat" }, // 2841934567
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonFloatArray, "SetJsonFloatArray" }, // 4163570467
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonInt, "SetJsonInt" }, // 2581150195
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonIntArray, "SetJsonIntArray" }, // 1915848132
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonRotator, "SetJsonRotator" }, // 443037810
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonString, "SetJsonString" }, // 3271191262
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonStringArray, "SetJsonStringArray" }, // 2615455608
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonText, "SetJsonText" }, // 2698406332
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonTransform, "SetJsonTransform" }, // 975105964
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_SetJsonVector, "SetJsonVector" }, // 1449460604
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonString, "StructToJsonString" }, // 3000523619
		{ &Z_Construct_UFunction_UStructForgeBlueprintLibrary_StructToJsonStringWithConfig, "StructToJsonStringWithConfig" }, // 634174330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructForgeBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::ClassParams = {
	&UStructForgeBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructForgeBlueprintLibrary.OuterSingleton;
}
UStructForgeBlueprintLibrary::UStructForgeBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStructForgeBlueprintLibrary);
UStructForgeBlueprintLibrary::~UStructForgeBlueprintLibrary() {}
// ********** End Class UStructForgeBlueprintLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h__Script_STRUCTFORGE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStructForgeBlueprintLibrary, UStructForgeBlueprintLibrary::StaticClass, TEXT("UStructForgeBlueprintLibrary"), &Z_Registration_Info_UClass_UStructForgeBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructForgeBlueprintLibrary), 3330358520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h__Script_STRUCTFORGE_2591958488(TEXT("/Script/STRUCTFORGE"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h__Script_STRUCTFORGE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h__Script_STRUCTFORGE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
