// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructForgeBlueprintLibrary.h"

#ifdef STRUCTFORGE_StructForgeBlueprintLibrary_generated_h
#error "StructForgeBlueprintLibrary.generated.h already included, missing '#pragma once' in StructForgeBlueprintLibrary.h"
#endif
#define STRUCTFORGE_StructForgeBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStruct;
class UStructForgeConfig;
class UStructForgeJsonObject;
struct FGameSettings;
struct FInventoryItem;
struct FPlayerData;

// ********** Begin Class UStructForgeBlueprintLibrary *********************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSampleInventory); \
	DECLARE_FUNCTION(execCreateSampleGameSettings); \
	DECLARE_FUNCTION(execCreateSamplePlayerData); \
	DECLARE_FUNCTION(execMinifyJson); \
	DECLARE_FUNCTION(execPrettyPrintJson); \
	DECLARE_FUNCTION(execMergeJsonObjects); \
	DECLARE_FUNCTION(execRemoveJsonKey); \
	DECLARE_FUNCTION(execHasJsonKey); \
	DECLARE_FUNCTION(execGetAllJsonKeys); \
	DECLARE_FUNCTION(execIsValidJson); \
	DECLARE_FUNCTION(execLoadGameSettingsFromFile); \
	DECLARE_FUNCTION(execSaveGameSettingsToFile); \
	DECLARE_FUNCTION(execLoadPlayerDataFromFile); \
	DECLARE_FUNCTION(execSavePlayerDataToFile); \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execSaveJsonToFile); \
	DECLARE_FUNCTION(execJsonToInventoryItem); \
	DECLARE_FUNCTION(execInventoryItemToJson); \
	DECLARE_FUNCTION(execJsonToGameSettings); \
	DECLARE_FUNCTION(execGameSettingsToJson); \
	DECLARE_FUNCTION(execJsonToPlayerData); \
	DECLARE_FUNCTION(execPlayerDataToJson); \
	DECLARE_FUNCTION(execSetJsonBoolArray); \
	DECLARE_FUNCTION(execGetJsonBoolArray); \
	DECLARE_FUNCTION(execSetJsonFloatArray); \
	DECLARE_FUNCTION(execGetJsonFloatArray); \
	DECLARE_FUNCTION(execSetJsonIntArray); \
	DECLARE_FUNCTION(execGetJsonIntArray); \
	DECLARE_FUNCTION(execSetJsonStringArray); \
	DECLARE_FUNCTION(execGetJsonStringArray); \
	DECLARE_FUNCTION(execSetJsonTransform); \
	DECLARE_FUNCTION(execSetJsonRotator); \
	DECLARE_FUNCTION(execSetJsonVector); \
	DECLARE_FUNCTION(execSetJsonText); \
	DECLARE_FUNCTION(execSetJsonBool); \
	DECLARE_FUNCTION(execSetJsonFloat); \
	DECLARE_FUNCTION(execSetJsonInt); \
	DECLARE_FUNCTION(execSetJsonString); \
	DECLARE_FUNCTION(execGetJsonTransform); \
	DECLARE_FUNCTION(execGetJsonRotator); \
	DECLARE_FUNCTION(execGetJsonVector); \
	DECLARE_FUNCTION(execGetJsonText); \
	DECLARE_FUNCTION(execGetJsonBool); \
	DECLARE_FUNCTION(execGetJsonFloat); \
	DECLARE_FUNCTION(execGetJsonInt); \
	DECLARE_FUNCTION(execGetJsonString); \
	DECLARE_FUNCTION(execJsonObjectToString); \
	DECLARE_FUNCTION(execParseJsonString); \
	DECLARE_FUNCTION(execCreateJsonObject);


STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary_NoRegister();

#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructForgeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UStructForgeBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTFORGE_API UClass* Z_Construct_UClass_UStructForgeBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructForgeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/STRUCTFORGE"), Z_Construct_UClass_UStructForgeBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UStructForgeBlueprintLibrary)


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructForgeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructForgeBlueprintLibrary(UStructForgeBlueprintLibrary&&) = delete; \
	UStructForgeBlueprintLibrary(const UStructForgeBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructForgeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructForgeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructForgeBlueprintLibrary) \
	NO_API virtual ~UStructForgeBlueprintLibrary();


#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_8_PROLOG
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructForgeBlueprintLibrary;

// ********** End Class UStructForgeBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
