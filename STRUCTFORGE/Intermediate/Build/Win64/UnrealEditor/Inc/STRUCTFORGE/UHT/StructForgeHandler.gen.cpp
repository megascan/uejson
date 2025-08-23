// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructForgeHandler.h"
#include "StructForgeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructForgeHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeHandler();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeHandler_NoRegister();
STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister();
STRUCTFORGE_API UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature();
STRUCTFORGE_API UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettings();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FStructForgeResult();
UPackage* Z_Construct_UPackage__Script_STRUCTFORGE();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStructForgeOperationComplete ***************************************
struct Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics
{
	struct _Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms), &Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_STRUCTFORGE, nullptr, "OnStructForgeOperationComplete__DelegateSignature", Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStructForgeOperationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnStructForgeOperationComplete, bool bSuccess, const FString& Message)
{
	struct _Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms
	{
		bool bSuccess;
		FString Message;
	};
	_Script_STRUCTFORGE_eventOnStructForgeOperationComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Message=Message;
	OnStructForgeOperationComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStructForgeOperationComplete *****************************************

// ********** Begin Delegate FOnStructForgeAsyncComplete *******************************************
struct Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics
{
	struct _Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms
	{
		bool bSuccess;
		FString Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms), &Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_STRUCTFORGE, nullptr, "OnStructForgeAsyncComplete__DelegateSignature", Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStructForgeAsyncComplete_DelegateWrapper(const FScriptDelegate& OnStructForgeAsyncComplete, bool bSuccess, const FString& Result)
{
	struct _Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms
	{
		bool bSuccess;
		FString Result;
	};
	_Script_STRUCTFORGE_eventOnStructForgeAsyncComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Result=Result;
	OnStructForgeAsyncComplete.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStructForgeAsyncComplete *********************************************

// ********** Begin Class UStructForgeHandler Function CreateJsonObject ****************************
struct Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics
{
	struct StructForgeHandler_eventCreateJsonObject_Parms
	{
		UStructForgeJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Manual" },
		{ "DisplayName", "Create JSON Object" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventCreateJsonObject_Parms, ReturnValue), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "CreateJsonObject", Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::StructForgeHandler_eventCreateJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::StructForgeHandler_eventCreateJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execCreateJsonObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStructForgeJsonObject**)Z_Param__Result=UStructForgeHandler::CreateJsonObject();
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function CreateJsonObject ******************************

// ********** Begin Class UStructForgeHandler Function DeserializeGameSettings *********************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics
{
	struct StructForgeHandler_eventDeserializeGameSettings_Parms
	{
		FString JsonString;
		FGameSettings OutSettings;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Game Settings" },
		{ "DisplayName", "Deserialize Game Settings" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeGameSettings_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeGameSettings_Parms, OutSettings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(0, nullptr) }; // 1248772219
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeGameSettings_Parms, OutError), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializeGameSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializeGameSettings_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_OutSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializeGameSettings", Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::StructForgeHandler_eventDeserializeGameSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::StructForgeHandler_eventDeserializeGameSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializeGameSettings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_OutSettings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializeGameSettings(Z_Param_JsonString,Z_Param_Out_OutSettings,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializeGameSettings ***********************

// ********** Begin Class UStructForgeHandler Function DeserializeIntArray *************************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics
{
	struct StructForgeHandler_eventDeserializeIntArray_Parms
	{
		FString JsonString;
		TArray<int32> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Deserialize Int Array" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeIntArray_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeIntArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializeIntArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializeIntArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializeIntArray", Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::StructForgeHandler_eventDeserializeIntArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::StructForgeHandler_eventDeserializeIntArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializeIntArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializeIntArray(Z_Param_JsonString,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializeIntArray ***************************

// ********** Begin Class UStructForgeHandler Function DeserializePlayerData ***********************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics
{
	struct StructForgeHandler_eventDeserializePlayerData_Parms
	{
		FString JsonString;
		FPlayerData OutPlayerData;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Player Data" },
		{ "DisplayName", "Deserialize Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializePlayerData_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_OutPlayerData = { "OutPlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializePlayerData_Parms, OutPlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializePlayerData_Parms, OutError), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializePlayerData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializePlayerData_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_OutPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializePlayerData", Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::StructForgeHandler_eventDeserializePlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::StructForgeHandler_eventDeserializePlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializePlayerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_OutPlayerData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializePlayerData(Z_Param_JsonString,Z_Param_Out_OutPlayerData,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializePlayerData *************************

// ********** Begin Class UStructForgeHandler Function DeserializePlayerDataArray ******************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics
{
	struct StructForgeHandler_eventDeserializePlayerDataArray_Parms
	{
		FString JsonString;
		TArray<FPlayerData> OutPlayers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Batch" },
		{ "DisplayName", "Deserialize Multiple Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPlayers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializePlayerDataArray_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_OutPlayers_Inner = { "OutPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_OutPlayers = { "OutPlayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializePlayerDataArray_Parms, OutPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1664009876
void Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializePlayerDataArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializePlayerDataArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_OutPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_OutPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializePlayerDataArray", Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::StructForgeHandler_eventDeserializePlayerDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::StructForgeHandler_eventDeserializePlayerDataArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializePlayerDataArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_TARRAY_REF(FPlayerData,Z_Param_Out_OutPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializePlayerDataArray(Z_Param_JsonString,Z_Param_Out_OutPlayers);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializePlayerDataArray ********************

// ********** Begin Class UStructForgeHandler Function DeserializeStringArray **********************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics
{
	struct StructForgeHandler_eventDeserializeStringArray_Parms
	{
		FString JsonString;
		TArray<FString> OutArray;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "DisplayName", "Deserialize String Array" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeStringArray_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeStringArray_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializeStringArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializeStringArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_OutArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializeStringArray", Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::StructForgeHandler_eventDeserializeStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::StructForgeHandler_eventDeserializeStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializeStringArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializeStringArray(Z_Param_JsonString,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializeStringArray ************************

// ********** Begin Class UStructForgeHandler Function DeserializeStringMap ************************
struct Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics
{
	struct StructForgeHandler_eventDeserializeStringMap_Parms
	{
		FString JsonString;
		TMap<FString,FString> OutMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Maps" },
		{ "DisplayName", "Deserialize String Map" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeStringMap_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap_ValueProp = { "OutMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap_Key_KeyProp = { "OutMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap = { "OutMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventDeserializeStringMap_Parms, OutMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventDeserializeStringMap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventDeserializeStringMap_Parms), &Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_OutMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "DeserializeStringMap", Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::StructForgeHandler_eventDeserializeStringMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::StructForgeHandler_eventDeserializeStringMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execDeserializeStringMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::DeserializeStringMap(Z_Param_JsonString,Z_Param_Out_OutMap);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function DeserializeStringMap **************************

// ********** Begin Class UStructForgeHandler Function GetJsonDepth ********************************
struct Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics
{
	struct StructForgeHandler_eventGetJsonDepth_Parms
	{
		FString JsonString;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Validation" },
		{ "DisplayName", "Get JSON Depth" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventGetJsonDepth_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventGetJsonDepth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "GetJsonDepth", Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::StructForgeHandler_eventGetJsonDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::StructForgeHandler_eventGetJsonDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execGetJsonDepth)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UStructForgeHandler::GetJsonDepth(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function GetJsonDepth **********************************

// ********** Begin Class UStructForgeHandler Function GetJsonSize *********************************
struct Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics
{
	struct StructForgeHandler_eventGetJsonSize_Parms
	{
		FString JsonString;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Get JSON Size" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventGetJsonSize_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventGetJsonSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "GetJsonSize", Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::StructForgeHandler_eventGetJsonSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::StructForgeHandler_eventGetJsonSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_GetJsonSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_GetJsonSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execGetJsonSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UStructForgeHandler::GetJsonSize(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function GetJsonSize ***********************************

// ********** Begin Class UStructForgeHandler Function IsValidJsonString ***************************
struct Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics
{
	struct StructForgeHandler_eventIsValidJsonString_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Validation" },
		{ "DisplayName", "Is Valid JSON" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventIsValidJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventIsValidJsonString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventIsValidJsonString_Parms), &Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "IsValidJsonString", Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::StructForgeHandler_eventIsValidJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::StructForgeHandler_eventIsValidJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execIsValidJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::IsValidJsonString(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function IsValidJsonString *****************************

// ********** Begin Class UStructForgeHandler Function LoadJsonFromFile ****************************
struct Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics
{
	struct StructForgeHandler_eventLoadJsonFromFile_Parms
	{
		FString FilePath;
		FStructForgeResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Load JSON from File" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadJsonFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadJsonFromFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FStructForgeResult, METADATA_PARAMS(0, nullptr) }; // 1276436555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "LoadJsonFromFile", Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::StructForgeHandler_eventLoadJsonFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::StructForgeHandler_eventLoadJsonFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execLoadJsonFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStructForgeResult*)Z_Param__Result=UStructForgeHandler::LoadJsonFromFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function LoadJsonFromFile ******************************

// ********** Begin Class UStructForgeHandler Function LoadPlayerDataAsync *************************
struct Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics
{
	struct StructForgeHandler_eventLoadPlayerDataAsync_Parms
	{
		FString FilePath;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Async" },
		{ "DisplayName", "Load Player Data Async" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadPlayerDataAsync_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadPlayerDataAsync_Parms, OnComplete), Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 4050997662
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "LoadPlayerDataAsync", Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::StructForgeHandler_eventLoadPlayerDataAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::StructForgeHandler_eventLoadPlayerDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execLoadPlayerDataAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPlayerDataAsync(Z_Param_FilePath,FOnStructForgeAsyncComplete(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function LoadPlayerDataAsync ***************************

// ********** Begin Class UStructForgeHandler Function LoadPlayerDataFromFile **********************
struct Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics
{
	struct StructForgeHandler_eventLoadPlayerDataFromFile_Parms
	{
		FString FilePath;
		FPlayerData OutPlayerData;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "DisplayName", "Load Player Data from File" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPlayerData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadPlayerDataFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_OutPlayerData = { "OutPlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadPlayerDataFromFile_Parms, OutPlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventLoadPlayerDataFromFile_Parms, OutError), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventLoadPlayerDataFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventLoadPlayerDataFromFile_Parms), &Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_OutPlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "LoadPlayerDataFromFile", Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::StructForgeHandler_eventLoadPlayerDataFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::StructForgeHandler_eventLoadPlayerDataFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execLoadPlayerDataFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_OutPlayerData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::LoadPlayerDataFromFile(Z_Param_FilePath,Z_Param_Out_OutPlayerData,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function LoadPlayerDataFromFile ************************

// ********** Begin Class UStructForgeHandler Function MergeJsonObjects ****************************
struct Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics
{
	struct StructForgeHandler_eventMergeJsonObjects_Parms
	{
		FString JsonA;
		FString JsonB;
		bool bOverwriteExisting;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "CPP_Default_bOverwriteExisting", "true" },
		{ "DisplayName", "Merge JSON Objects" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonA;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonB;
	static void NewProp_bOverwriteExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExisting;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_JsonA = { "JsonA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventMergeJsonObjects_Parms, JsonA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonA_MetaData), NewProp_JsonA_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_JsonB = { "JsonB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventMergeJsonObjects_Parms, JsonB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonB_MetaData), NewProp_JsonB_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_bOverwriteExisting_SetBit(void* Obj)
{
	((StructForgeHandler_eventMergeJsonObjects_Parms*)Obj)->bOverwriteExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_bOverwriteExisting = { "bOverwriteExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventMergeJsonObjects_Parms), &Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_bOverwriteExisting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventMergeJsonObjects_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_JsonA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_JsonB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_bOverwriteExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "MergeJsonObjects", Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::StructForgeHandler_eventMergeJsonObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::StructForgeHandler_eventMergeJsonObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execMergeJsonObjects)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonA);
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonB);
	P_GET_UBOOL(Z_Param_bOverwriteExisting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::MergeJsonObjects(Z_Param_JsonA,Z_Param_JsonB,Z_Param_bOverwriteExisting);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function MergeJsonObjects ******************************

// ********** Begin Class UStructForgeHandler Function MinifyJson **********************************
struct Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics
{
	struct StructForgeHandler_eventMinifyJson_Parms
	{
		FString JsonString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Minify JSON" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventMinifyJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventMinifyJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "MinifyJson", Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::StructForgeHandler_eventMinifyJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::StructForgeHandler_eventMinifyJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_MinifyJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_MinifyJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execMinifyJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::MinifyJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function MinifyJson ************************************

// ********** Begin Class UStructForgeHandler Function ParseJsonString *****************************
struct Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics
{
	struct StructForgeHandler_eventParseJsonString_Parms
	{
		FString JsonString;
		UStructForgeJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Manual" },
		{ "DisplayName", "Parse JSON String" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventParseJsonString_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventParseJsonString_Parms, ReturnValue), Z_Construct_UClass_UStructForgeJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "ParseJsonString", Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::StructForgeHandler_eventParseJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::StructForgeHandler_eventParseJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_ParseJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_ParseJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execParseJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStructForgeJsonObject**)Z_Param__Result=UStructForgeHandler::ParseJsonString(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function ParseJsonString *******************************

// ********** Begin Class UStructForgeHandler Function PrettyPrintJson *****************************
struct Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics
{
	struct StructForgeHandler_eventPrettyPrintJson_Parms
	{
		FString JsonString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Utilities" },
		{ "DisplayName", "Pretty Print JSON" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventPrettyPrintJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventPrettyPrintJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "PrettyPrintJson", Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::StructForgeHandler_eventPrettyPrintJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::StructForgeHandler_eventPrettyPrintJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execPrettyPrintJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::PrettyPrintJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function PrettyPrintJson *******************************

// ********** Begin Class UStructForgeHandler Function SaveJsonToFile ******************************
struct Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics
{
	struct StructForgeHandler_eventSaveJsonToFile_Parms
	{
		FString JsonString;
		FString FilePath;
		bool bOverwrite;
		FStructForgeResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|File IO" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "DisplayName", "Save JSON to File" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
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
	static void NewProp_bOverwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSaveJsonToFile_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSaveJsonToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_bOverwrite_SetBit(void* Obj)
{
	((StructForgeHandler_eventSaveJsonToFile_Parms*)Obj)->bOverwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSaveJsonToFile_Parms), &Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSaveJsonToFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FStructForgeResult, METADATA_PARAMS(0, nullptr) }; // 1276436555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_bOverwrite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SaveJsonToFile", Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::StructForgeHandler_eventSaveJsonToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::StructForgeHandler_eventSaveJsonToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSaveJsonToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bOverwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStructForgeResult*)Z_Param__Result=UStructForgeHandler::SaveJsonToFile(Z_Param_JsonString,Z_Param_FilePath,Z_Param_bOverwrite);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SaveJsonToFile ********************************

// ********** Begin Class UStructForgeHandler Function SavePlayerDataToFile ************************
struct Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics
{
	struct StructForgeHandler_eventSavePlayerDataToFile_Parms
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
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSavePlayerDataToFile_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSavePlayerDataToFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSavePlayerDataToFile_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSavePlayerDataToFile_Parms), &Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructForgeHandler_eventSavePlayerDataToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSavePlayerDataToFile_Parms), &Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SavePlayerDataToFile", Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::StructForgeHandler_eventSavePlayerDataToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::StructForgeHandler_eventSavePlayerDataToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSavePlayerDataToFile)
{
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_PlayerData);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructForgeHandler::SavePlayerDataToFile(Z_Param_Out_PlayerData,Z_Param_FilePath,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SavePlayerDataToFile **************************

// ********** Begin Class UStructForgeHandler Function SerializeGameSettings ***********************
struct Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics
{
	struct StructForgeHandler_eventSerializeGameSettings_Parms
	{
		FGameSettings Settings;
		bool bPrettyPrint;
		FStructForgeResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Game Settings" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Serialize Game Settings" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeGameSettings_Parms, Settings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1248772219
void Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializeGameSettings_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializeGameSettings_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeGameSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FStructForgeResult, METADATA_PARAMS(0, nullptr) }; // 1276436555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializeGameSettings", Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::StructForgeHandler_eventSerializeGameSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::StructForgeHandler_eventSerializeGameSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializeGameSettings)
{
	P_GET_STRUCT_REF(FGameSettings,Z_Param_Out_Settings);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStructForgeResult*)Z_Param__Result=UStructForgeHandler::SerializeGameSettings(Z_Param_Out_Settings,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializeGameSettings *************************

// ********** Begin Class UStructForgeHandler Function SerializeIntArray ***************************
struct Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics
{
	struct StructForgeHandler_eventSerializeIntArray_Parms
	{
		TArray<int32> IntArray;
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "Serialize Int Array" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeIntArray_Parms, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntArray_MetaData), NewProp_IntArray_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializeIntArray_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializeIntArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeIntArray_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_IntArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_IntArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializeIntArray", Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::StructForgeHandler_eventSerializeIntArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::StructForgeHandler_eventSerializeIntArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializeIntArray)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::SerializeIntArray(Z_Param_Out_IntArray,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializeIntArray *****************************

// ********** Begin Class UStructForgeHandler Function SerializePlayerData *************************
struct Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics
{
	struct StructForgeHandler_eventSerializePlayerData_Parms
	{
		FPlayerData PlayerData;
		bool bPrettyPrint;
		FStructForgeResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Player Data" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Serialize Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerData_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1664009876
void Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializePlayerData_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializePlayerData_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FStructForgeResult, METADATA_PARAMS(0, nullptr) }; // 1276436555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializePlayerData", Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::StructForgeHandler_eventSerializePlayerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::StructForgeHandler_eventSerializePlayerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializePlayerData)
{
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_PlayerData);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStructForgeResult*)Z_Param__Result=UStructForgeHandler::SerializePlayerData(Z_Param_Out_PlayerData,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializePlayerData ***************************

// ********** Begin Class UStructForgeHandler Function SerializePlayerDataArray ********************
struct Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics
{
	struct StructForgeHandler_eventSerializePlayerDataArray_Parms
	{
		TArray<FPlayerData> Players;
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Batch" },
		{ "CPP_Default_bPrettyPrint", "true" },
		{ "DisplayName", "Serialize Multiple Player Data" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerDataArray_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) }; // 1664009876
void Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializePlayerDataArray_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializePlayerDataArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerDataArray_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializePlayerDataArray", Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::StructForgeHandler_eventSerializePlayerDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::StructForgeHandler_eventSerializePlayerDataArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializePlayerDataArray)
{
	P_GET_TARRAY_REF(FPlayerData,Z_Param_Out_Players);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::SerializePlayerDataArray(Z_Param_Out_Players,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializePlayerDataArray **********************

// ********** Begin Class UStructForgeHandler Function SerializePlayerDataAsync ********************
struct Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics
{
	struct StructForgeHandler_eventSerializePlayerDataAsync_Parms
	{
		FPlayerData PlayerData;
		FString FilePath;
		FScriptDelegate OnComplete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Async" },
		{ "DisplayName", "Serialize Player Data Async" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerDataAsync_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerDataAsync_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializePlayerDataAsync_Parms, OnComplete), Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 4050997662
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializePlayerDataAsync", Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::StructForgeHandler_eventSerializePlayerDataAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::StructForgeHandler_eventSerializePlayerDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializePlayerDataAsync)
{
	P_GET_STRUCT_REF(FPlayerData,Z_Param_Out_PlayerData);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SerializePlayerDataAsync(Z_Param_Out_PlayerData,Z_Param_FilePath,FOnStructForgeAsyncComplete(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializePlayerDataAsync **********************

// ********** Begin Class UStructForgeHandler Function SerializeStringArray ************************
struct Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics
{
	struct StructForgeHandler_eventSerializeStringArray_Parms
	{
		TArray<FString> StringArray;
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Arrays" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "Serialize String Array" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeStringArray_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializeStringArray_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializeStringArray_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeStringArray_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_StringArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializeStringArray", Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::StructForgeHandler_eventSerializeStringArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::StructForgeHandler_eventSerializeStringArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializeStringArray)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::SerializeStringArray(Z_Param_Out_StringArray,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializeStringArray **************************

// ********** Begin Class UStructForgeHandler Function SerializeStringMap **************************
struct Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics
{
	struct StructForgeHandler_eventSerializeStringMap_Parms
	{
		TMap<FString,FString> StringMap;
		bool bPrettyPrint;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StructForge|Maps" },
		{ "CPP_Default_bPrettyPrint", "false" },
		{ "DisplayName", "Serialize String Map" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
	static void NewProp_bPrettyPrint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeStringMap_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringMap_MetaData), NewProp_StringMap_MetaData) };
void Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_bPrettyPrint_SetBit(void* Obj)
{
	((StructForgeHandler_eventSerializeStringMap_Parms*)Obj)->bPrettyPrint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_bPrettyPrint = { "bPrettyPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructForgeHandler_eventSerializeStringMap_Parms), &Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_bPrettyPrint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructForgeHandler_eventSerializeStringMap_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_StringMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_bPrettyPrint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructForgeHandler, nullptr, "SerializeStringMap", Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::StructForgeHandler_eventSerializeStringMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::StructForgeHandler_eventSerializeStringMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructForgeHandler::execSerializeStringMap)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
	P_GET_UBOOL(Z_Param_bPrettyPrint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UStructForgeHandler::SerializeStringMap(Z_Param_Out_StringMap,Z_Param_bPrettyPrint);
	P_NATIVE_END;
}
// ********** End Class UStructForgeHandler Function SerializeStringMap ****************************

// ********** Begin Class UStructForgeHandler ******************************************************
void UStructForgeHandler::StaticRegisterNativesUStructForgeHandler()
{
	UClass* Class = UStructForgeHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateJsonObject", &UStructForgeHandler::execCreateJsonObject },
		{ "DeserializeGameSettings", &UStructForgeHandler::execDeserializeGameSettings },
		{ "DeserializeIntArray", &UStructForgeHandler::execDeserializeIntArray },
		{ "DeserializePlayerData", &UStructForgeHandler::execDeserializePlayerData },
		{ "DeserializePlayerDataArray", &UStructForgeHandler::execDeserializePlayerDataArray },
		{ "DeserializeStringArray", &UStructForgeHandler::execDeserializeStringArray },
		{ "DeserializeStringMap", &UStructForgeHandler::execDeserializeStringMap },
		{ "GetJsonDepth", &UStructForgeHandler::execGetJsonDepth },
		{ "GetJsonSize", &UStructForgeHandler::execGetJsonSize },
		{ "IsValidJsonString", &UStructForgeHandler::execIsValidJsonString },
		{ "LoadJsonFromFile", &UStructForgeHandler::execLoadJsonFromFile },
		{ "LoadPlayerDataAsync", &UStructForgeHandler::execLoadPlayerDataAsync },
		{ "LoadPlayerDataFromFile", &UStructForgeHandler::execLoadPlayerDataFromFile },
		{ "MergeJsonObjects", &UStructForgeHandler::execMergeJsonObjects },
		{ "MinifyJson", &UStructForgeHandler::execMinifyJson },
		{ "ParseJsonString", &UStructForgeHandler::execParseJsonString },
		{ "PrettyPrintJson", &UStructForgeHandler::execPrettyPrintJson },
		{ "SaveJsonToFile", &UStructForgeHandler::execSaveJsonToFile },
		{ "SavePlayerDataToFile", &UStructForgeHandler::execSavePlayerDataToFile },
		{ "SerializeGameSettings", &UStructForgeHandler::execSerializeGameSettings },
		{ "SerializeIntArray", &UStructForgeHandler::execSerializeIntArray },
		{ "SerializePlayerData", &UStructForgeHandler::execSerializePlayerData },
		{ "SerializePlayerDataArray", &UStructForgeHandler::execSerializePlayerDataArray },
		{ "SerializePlayerDataAsync", &UStructForgeHandler::execSerializePlayerDataAsync },
		{ "SerializeStringArray", &UStructForgeHandler::execSerializeStringArray },
		{ "SerializeStringMap", &UStructForgeHandler::execSerializeStringMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStructForgeHandler;
UClass* UStructForgeHandler::GetPrivateStaticClass()
{
	using TClass = UStructForgeHandler;
	if (!Z_Registration_Info_UClass_UStructForgeHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StructForgeHandler"),
			Z_Registration_Info_UClass_UStructForgeHandler.InnerSingleton,
			StaticRegisterNativesUStructForgeHandler,
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
	return Z_Registration_Info_UClass_UStructForgeHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UStructForgeHandler_NoRegister()
{
	return UStructForgeHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStructForgeHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StructForgeHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOperationComplete_MetaData[] = {
		{ "Category", "StructForge|Events" },
		{ "ModuleRelativePath", "Public/StructForgeHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOperationComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructForgeHandler_CreateJsonObject, "CreateJsonObject" }, // 3765677860
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializeGameSettings, "DeserializeGameSettings" }, // 909476601
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializeIntArray, "DeserializeIntArray" }, // 599668958
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerData, "DeserializePlayerData" }, // 34398336
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializePlayerDataArray, "DeserializePlayerDataArray" }, // 1937272733
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializeStringArray, "DeserializeStringArray" }, // 3212140869
		{ &Z_Construct_UFunction_UStructForgeHandler_DeserializeStringMap, "DeserializeStringMap" }, // 2916277623
		{ &Z_Construct_UFunction_UStructForgeHandler_GetJsonDepth, "GetJsonDepth" }, // 2341009900
		{ &Z_Construct_UFunction_UStructForgeHandler_GetJsonSize, "GetJsonSize" }, // 1711094202
		{ &Z_Construct_UFunction_UStructForgeHandler_IsValidJsonString, "IsValidJsonString" }, // 3533170993
		{ &Z_Construct_UFunction_UStructForgeHandler_LoadJsonFromFile, "LoadJsonFromFile" }, // 1080682446
		{ &Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataAsync, "LoadPlayerDataAsync" }, // 2852084263
		{ &Z_Construct_UFunction_UStructForgeHandler_LoadPlayerDataFromFile, "LoadPlayerDataFromFile" }, // 3430095167
		{ &Z_Construct_UFunction_UStructForgeHandler_MergeJsonObjects, "MergeJsonObjects" }, // 2943011462
		{ &Z_Construct_UFunction_UStructForgeHandler_MinifyJson, "MinifyJson" }, // 2524747775
		{ &Z_Construct_UFunction_UStructForgeHandler_ParseJsonString, "ParseJsonString" }, // 3980225717
		{ &Z_Construct_UFunction_UStructForgeHandler_PrettyPrintJson, "PrettyPrintJson" }, // 416448018
		{ &Z_Construct_UFunction_UStructForgeHandler_SaveJsonToFile, "SaveJsonToFile" }, // 2195707539
		{ &Z_Construct_UFunction_UStructForgeHandler_SavePlayerDataToFile, "SavePlayerDataToFile" }, // 1403547030
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializeGameSettings, "SerializeGameSettings" }, // 2495696647
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializeIntArray, "SerializeIntArray" }, // 1271002832
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializePlayerData, "SerializePlayerData" }, // 3469388310
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataArray, "SerializePlayerDataArray" }, // 1797371517
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializePlayerDataAsync, "SerializePlayerDataAsync" }, // 4083513191
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializeStringArray, "SerializeStringArray" }, // 2524993449
		{ &Z_Construct_UFunction_UStructForgeHandler_SerializeStringMap, "SerializeStringMap" }, // 394682952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructForgeHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStructForgeHandler_Statics::NewProp_OnOperationComplete = { "OnOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStructForgeHandler, OnOperationComplete), Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOperationComplete_MetaData), NewProp_OnOperationComplete_MetaData) }; // 13243277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructForgeHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructForgeHandler_Statics::NewProp_OnOperationComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStructForgeHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructForgeHandler_Statics::ClassParams = {
	&UStructForgeHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStructForgeHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeHandler_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructForgeHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructForgeHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStructForgeHandler()
{
	if (!Z_Registration_Info_UClass_UStructForgeHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructForgeHandler.OuterSingleton, Z_Construct_UClass_UStructForgeHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructForgeHandler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStructForgeHandler);
UStructForgeHandler::~UStructForgeHandler() {}
// ********** End Class UStructForgeHandler ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h__Script_STRUCTFORGE_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStructForgeHandler, UStructForgeHandler::StaticClass, TEXT("UStructForgeHandler"), &Z_Registration_Info_UClass_UStructForgeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructForgeHandler), 3687205536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h__Script_STRUCTFORGE_1121805415(TEXT("/Script/STRUCTFORGE"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h__Script_STRUCTFORGE_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h__Script_STRUCTFORGE_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
