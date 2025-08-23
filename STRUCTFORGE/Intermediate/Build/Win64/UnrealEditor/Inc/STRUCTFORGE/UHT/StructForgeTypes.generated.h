// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructForgeTypes.h"

#ifdef STRUCTFORGE_StructForgeTypes_generated_h
#error "StructForgeTypes.generated.h already included, missing '#pragma once' in StructForgeTypes.h"
#endif
#define STRUCTFORGE_StructForgeTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInventoryItem ****************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FInventoryItem;
// ********** End ScriptStruct FInventoryItem ******************************************************

// ********** Begin ScriptStruct FPlayerStats ******************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStats_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FPlayerStats;
// ********** End ScriptStruct FPlayerStats ********************************************************

// ********** Begin ScriptStruct FQuestData ********************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestData_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FQuestData;
// ********** End ScriptStruct FQuestData **********************************************************

// ********** Begin ScriptStruct FPlayerLocation ***************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerLocation_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FPlayerLocation;
// ********** End ScriptStruct FPlayerLocation *****************************************************

// ********** Begin ScriptStruct FPlayerData *******************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerData_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FPlayerData;
// ********** End ScriptStruct FPlayerData *********************************************************

// ********** Begin ScriptStruct FGameSettings *****************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameSettings_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FGameSettings;
// ********** End ScriptStruct FGameSettings *******************************************************

// ********** Begin ScriptStruct FIntArray *********************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntArray_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FIntArray;
// ********** End ScriptStruct FIntArray ***********************************************************

// ********** Begin ScriptStruct FComplexNestedData ************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComplexNestedData_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FComplexNestedData;
// ********** End ScriptStruct FComplexNestedData **************************************************

// ********** Begin ScriptStruct FStructForgeResult ************************************************
#define FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructForgeResult_Statics; \
	STRUCTFORGE_API static class UScriptStruct* StaticStruct();


struct FStructForgeResult;
// ********** End ScriptStruct FStructForgeResult **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h

// ********** Begin Enum EStructForgeErrorCode *****************************************************
#define FOREACH_ENUM_ESTRUCTFORGEERRORCODE(op) \
	op(EStructForgeErrorCode::None) \
	op(EStructForgeErrorCode::InvalidJson) \
	op(EStructForgeErrorCode::TypeMismatch) \
	op(EStructForgeErrorCode::FileNotFound) \
	op(EStructForgeErrorCode::FileSaveFailed) \
	op(EStructForgeErrorCode::NullPointer) \
	op(EStructForgeErrorCode::ExceedsMaxSize) \
	op(EStructForgeErrorCode::ExceedsMaxDepth) 

enum class EStructForgeErrorCode : uint8;
template<> struct TIsUEnumClass<EStructForgeErrorCode> { enum { Value = true }; };
template<> STRUCTFORGE_API UEnum* StaticEnum<EStructForgeErrorCode>();
// ********** End Enum EStructForgeErrorCode *******************************************************

// ********** Begin Enum EPlayerClass **************************************************************
#define FOREACH_ENUM_EPLAYERCLASS(op) \
	op(EPlayerClass::None) \
	op(EPlayerClass::Warrior) \
	op(EPlayerClass::Mage) \
	op(EPlayerClass::Ranger) \
	op(EPlayerClass::Rogue) \
	op(EPlayerClass::Paladin) \
	op(EPlayerClass::Necromancer) 

enum class EPlayerClass : uint8;
template<> struct TIsUEnumClass<EPlayerClass> { enum { Value = true }; };
template<> STRUCTFORGE_API UEnum* StaticEnum<EPlayerClass>();
// ********** End Enum EPlayerClass ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
