// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructForgeHandler.h"

#ifdef STRUCTFORGE_StructForgeHandler_generated_h
#error "StructForgeHandler.generated.h already included, missing '#pragma once' in StructForgeHandler.h"
#endif
#define STRUCTFORGE_StructForgeHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class UStructForgeJsonObject;
struct FGameSettings;
struct FPlayerData;
struct FStructForgeResult;

// ********** Begin Delegate FOnStructForgeOperationComplete ***************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_9_DELEGATE \
STRUCTFORGE_API void FOnStructForgeOperationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnStructForgeOperationComplete, bool bSuccess, const FString& Message);


// ********** End Delegate FOnStructForgeOperationComplete *****************************************

// ********** Begin Delegate FOnStructForgeAsyncComplete *******************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_10_DELEGATE \
STRUCTFORGE_API void FOnStructForgeAsyncComplete_DelegateWrapper(const FScriptDelegate& OnStructForgeAsyncComplete, bool bSuccess, const FString& Result);


// ********** End Delegate FOnStructForgeAsyncComplete *********************************************

// ********** Begin Class UStructForgeHandler ******************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMergeJsonObjects); \
	DECLARE_FUNCTION(execGetJsonSize); \
	DECLARE_FUNCTION(execMinifyJson); \
	DECLARE_FUNCTION(execPrettyPrintJson); \
	DECLARE_FUNCTION(execDeserializePlayerDataArray); \
	DECLARE_FUNCTION(execSerializePlayerDataArray); \
	DECLARE_FUNCTION(execDeserializeStringMap); \
	DECLARE_FUNCTION(execSerializeStringMap); \
	DECLARE_FUNCTION(execDeserializeIntArray); \
	DECLARE_FUNCTION(execSerializeIntArray); \
	DECLARE_FUNCTION(execDeserializeStringArray); \
	DECLARE_FUNCTION(execSerializeStringArray); \
	DECLARE_FUNCTION(execLoadPlayerDataAsync); \
	DECLARE_FUNCTION(execSerializePlayerDataAsync); \
	DECLARE_FUNCTION(execGetJsonDepth); \
	DECLARE_FUNCTION(execIsValidJsonString); \
	DECLARE_FUNCTION(execLoadPlayerDataFromFile); \
	DECLARE_FUNCTION(execSavePlayerDataToFile); \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execSaveJsonToFile); \
	DECLARE_FUNCTION(execParseJsonString); \
	DECLARE_FUNCTION(execCreateJsonObject); \
	DECLARE_FUNCTION(execDeserializeGameSettings); \
	DECLARE_FUNCTION(execSerializeGameSettings); \
	DECLARE_FUNCTION(execDeserializePlayerData); \
	DECLARE_FUNCTION(execSerializePlayerData);


STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeHandler_NoRegister();

#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructForgeHandler(); \
	friend struct Z_Construct_UClass_UStructForgeHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructForgeHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/STRUCTFORGE"), Z_Construct_UClass_UStructForgeHandler_NoRegister) \
	DECLARE_SERIALIZER(UStructForgeHandler)


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructForgeHandler(UStructForgeHandler&&) = delete; \
	UStructForgeHandler(const UStructForgeHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructForgeHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructForgeHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStructForgeHandler) \
	NO_API virtual ~UStructForgeHandler();


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_12_PROLOG
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructForgeHandler;

// ********** End Class UStructForgeHandler ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
