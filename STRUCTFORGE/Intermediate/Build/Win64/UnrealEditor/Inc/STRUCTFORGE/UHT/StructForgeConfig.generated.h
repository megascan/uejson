// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructForgeConfig.h"

#ifdef STRUCTFORGE_StructForgeConfig_generated_h
#error "StructForgeConfig.generated.h already included, missing '#pragma once' in StructForgeConfig.h"
#endif
#define STRUCTFORGE_StructForgeConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStructFieldMapping ***********************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructFieldMapping_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FStructFieldMapping;
// ********** End ScriptStruct FStructFieldMapping *************************************************

// ********** Begin Class UStructForgeConfig *******************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldSerializeField); \
	DECLARE_FUNCTION(execGetJsonFieldName);


STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeConfig_NoRegister();

#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructForgeConfig(); \
	friend struct Z_Construct_UClass_UStructForgeConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructForgeConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/STRUCTFORGE"), Z_Construct_UClass_UStructForgeConfig_NoRegister) \
	DECLARE_SERIALIZER(UStructForgeConfig)


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructForgeConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructForgeConfig(UStructForgeConfig&&) = delete; \
	UStructForgeConfig(const UStructForgeConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructForgeConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructForgeConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructForgeConfig) \
	NO_API virtual ~UStructForgeConfig();


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_29_PROLOG
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructForgeConfig;

// ********** End Class UStructForgeConfig *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
