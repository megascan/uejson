// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructForgeJsonObject.h"

#ifdef STRUCTFORGE_StructForgeJsonObject_generated_h
#error "StructForgeJsonObject.generated.h already included, missing '#pragma once' in StructForgeJsonObject.h"
#endif
#define STRUCTFORGE_StructForgeJsonObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStructForgeJsonObject;

// ********** Begin Class UStructForgeJsonObject ***************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClone); \
	DECLARE_FUNCTION(execMergeWith); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldCount); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsValid);


STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister();

#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructForgeJsonObject(); \
	friend struct Z_Construct_UClass_UStructForgeJsonObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeJsonObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructForgeJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/STRUCTFORGE"), Z_Construct_UClass_UStructForgeJsonObject_NoRegister) \
	DECLARE_SERIALIZER(UStructForgeJsonObject)


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructForgeJsonObject(UStructForgeJsonObject&&) = delete; \
	UStructForgeJsonObject(const UStructForgeJsonObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructForgeJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructForgeJsonObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStructForgeJsonObject) \
	NO_API virtual ~UStructForgeJsonObject();


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_9_PROLOG
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructForgeJsonObject;

// ********** End Class UStructForgeJsonObject *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeJsonObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
