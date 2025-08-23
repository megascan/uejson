// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructForgeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructForgeTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
STRUCTFORGE_API UEnum* Z_Construct_UEnum_STRUCTFORGE_EPlayerClass();
STRUCTFORGE_API UEnum* Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FComplexNestedData();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettings();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FIntArray();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocation();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
STRUCTFORGE_API UScriptStruct* Z_Construct_UScriptStruct_FStructForgeResult();
UPackage* Z_Construct_UPackage__Script_STRUCTFORGE();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStructForgeErrorCode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructForgeErrorCode;
static UEnum* EStructForgeErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStructForgeErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStructForgeErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("EStructForgeErrorCode"));
	}
	return Z_Registration_Info_UEnum_EStructForgeErrorCode.OuterSingleton;
}
template<> STRUCTFORGE_API UEnum* StaticEnum<EStructForgeErrorCode>()
{
	return EStructForgeErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExceedsMaxDepth.DisplayName", "Exceeds Max Depth" },
		{ "ExceedsMaxDepth.Name", "EStructForgeErrorCode::ExceedsMaxDepth" },
		{ "ExceedsMaxSize.DisplayName", "Exceeds Max Size" },
		{ "ExceedsMaxSize.Name", "EStructForgeErrorCode::ExceedsMaxSize" },
		{ "FileNotFound.DisplayName", "File Not Found" },
		{ "FileNotFound.Name", "EStructForgeErrorCode::FileNotFound" },
		{ "FileSaveFailed.DisplayName", "File Save Failed" },
		{ "FileSaveFailed.Name", "EStructForgeErrorCode::FileSaveFailed" },
		{ "InvalidJson.DisplayName", "Invalid JSON" },
		{ "InvalidJson.Name", "EStructForgeErrorCode::InvalidJson" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
		{ "None.DisplayName", "No Error" },
		{ "None.Name", "EStructForgeErrorCode::None" },
		{ "NullPointer.DisplayName", "Null Pointer" },
		{ "NullPointer.Name", "EStructForgeErrorCode::NullPointer" },
		{ "TypeMismatch.DisplayName", "Type Mismatch" },
		{ "TypeMismatch.Name", "EStructForgeErrorCode::TypeMismatch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStructForgeErrorCode::None", (int64)EStructForgeErrorCode::None },
		{ "EStructForgeErrorCode::InvalidJson", (int64)EStructForgeErrorCode::InvalidJson },
		{ "EStructForgeErrorCode::TypeMismatch", (int64)EStructForgeErrorCode::TypeMismatch },
		{ "EStructForgeErrorCode::FileNotFound", (int64)EStructForgeErrorCode::FileNotFound },
		{ "EStructForgeErrorCode::FileSaveFailed", (int64)EStructForgeErrorCode::FileSaveFailed },
		{ "EStructForgeErrorCode::NullPointer", (int64)EStructForgeErrorCode::NullPointer },
		{ "EStructForgeErrorCode::ExceedsMaxSize", (int64)EStructForgeErrorCode::ExceedsMaxSize },
		{ "EStructForgeErrorCode::ExceedsMaxDepth", (int64)EStructForgeErrorCode::ExceedsMaxDepth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	"EStructForgeErrorCode",
	"EStructForgeErrorCode",
	Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode()
{
	if (!Z_Registration_Info_UEnum_EStructForgeErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructForgeErrorCode.InnerSingleton, Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStructForgeErrorCode.InnerSingleton;
}
// ********** End Enum EStructForgeErrorCode *******************************************************

// ********** Begin Enum EPlayerClass **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerClass;
static UEnum* EPlayerClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_STRUCTFORGE_EPlayerClass, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("EPlayerClass"));
	}
	return Z_Registration_Info_UEnum_EPlayerClass.OuterSingleton;
}
template<> STRUCTFORGE_API UEnum* StaticEnum<EPlayerClass>()
{
	return EPlayerClass_StaticEnum();
}
struct Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Mage.DisplayName", "Mage" },
		{ "Mage.Name", "EPlayerClass::Mage" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
		{ "Necromancer.DisplayName", "Necromancer" },
		{ "Necromancer.Name", "EPlayerClass::Necromancer" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlayerClass::None" },
		{ "Paladin.DisplayName", "Paladin" },
		{ "Paladin.Name", "EPlayerClass::Paladin" },
		{ "Ranger.DisplayName", "Ranger" },
		{ "Ranger.Name", "EPlayerClass::Ranger" },
		{ "Rogue.DisplayName", "Rogue" },
		{ "Rogue.Name", "EPlayerClass::Rogue" },
		{ "Warrior.DisplayName", "Warrior" },
		{ "Warrior.Name", "EPlayerClass::Warrior" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerClass::None", (int64)EPlayerClass::None },
		{ "EPlayerClass::Warrior", (int64)EPlayerClass::Warrior },
		{ "EPlayerClass::Mage", (int64)EPlayerClass::Mage },
		{ "EPlayerClass::Ranger", (int64)EPlayerClass::Ranger },
		{ "EPlayerClass::Rogue", (int64)EPlayerClass::Rogue },
		{ "EPlayerClass::Paladin", (int64)EPlayerClass::Paladin },
		{ "EPlayerClass::Necromancer", (int64)EPlayerClass::Necromancer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	"EPlayerClass",
	"EPlayerClass",
	Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_STRUCTFORGE_EPlayerClass()
{
	if (!Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton, Z_Construct_UEnum_STRUCTFORGE_EPlayerClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerClass.InnerSingleton;
}
// ********** End Enum EPlayerClass ****************************************************************

// ********** Begin ScriptStruct FInventoryItem ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bIsEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
{
	((FInventoryItem*)Obj)->bIsEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEquipped_MetaData), NewProp_bIsEquipped_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bIsEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"InventoryItem",
	Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
	sizeof(FInventoryItem),
	alignof(FInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton;
}
// ********** End ScriptStruct FInventoryItem ******************************************************

// ********** Begin ScriptStruct FPlayerStats ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerStats;
class UScriptStruct* FPlayerStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStats, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("PlayerStats"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseRating_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseRating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_DefenseRating = { "DefenseRating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, DefenseRating), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseRating_MetaData), NewProp_DefenseRating_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_CriticalChance = { "CriticalChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, CriticalChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStats, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_DefenseRating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStats_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"PlayerStats",
	Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::PropPointers),
	sizeof(FPlayerStats),
	alignof(FPlayerStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerStats.InnerSingleton;
}
// ********** End ScriptStruct FPlayerStats ********************************************************

// ********** Begin ScriptStruct FQuestData ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredProgress_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Objectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objectives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQuestData*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestData), &Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, RequiredProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredProgress_MetaData), NewProp_RequiredProgress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objectives_MetaData), NewProp_Objectives_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bIsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_RequiredProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"QuestData",
	Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
	sizeof(FQuestData),
	alignof(FQuestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton;
}
// ********** End ScriptStruct FQuestData **********************************************************

// ********** Begin ScriptStruct FPlayerLocation ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerLocation;
class UScriptStruct* FPlayerLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLocation, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("PlayerLocation"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerLocation.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerLocation, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"PlayerLocation",
	Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::PropPointers),
	sizeof(FPlayerLocation),
	alignof(FPlayerLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocation()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerLocation.InnerSingleton, Z_Construct_UScriptStruct_FPlayerLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerLocation.InnerSingleton;
}
// ********** End ScriptStruct FPlayerLocation *****************************************************

// ********** Begin ScriptStruct FPlayerData *******************************************************
static_assert(std::is_polymorphic<FPlayerData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currencies_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLoginTime_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionToken_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
		{ "Transient", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Experience;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveQuests;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Skills_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Skills_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Skills;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currencies_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Currencies;
	static void NewProp_bIsOnline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLoginTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, PlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerId_MetaData), NewProp_PlayerId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Experience), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Experience_MetaData), NewProp_Experience_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, PlayerClass), Z_Construct_UEnum_STRUCTFORGE_EPlayerClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerClass_MetaData), NewProp_PlayerClass_MetaData) }; // 3453318573
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Stats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 4015173399
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Location), Z_Construct_UScriptStruct_FPlayerLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 3243038805
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2732628929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 2732628929
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_ActiveQuests_Inner = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(0, nullptr) }; // 3944685571
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, ActiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuests_MetaData), NewProp_ActiveQuests_MetaData) }; // 3944685571
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills_ValueProp = { "Skills", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills_Key_KeyProp = { "Skills_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Skills), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skills_MetaData), NewProp_Skills_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies_ValueProp = { "Currencies", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies_Key_KeyProp = { "Currencies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies = { "Currencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, Currencies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currencies_MetaData), NewProp_Currencies_MetaData) };
void Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_bIsOnline_SetBit(void* Obj)
{
	((FPlayerData*)Obj)->bIsOnline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerData), &Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnline_MetaData), NewProp_bIsOnline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_LastLoginTime = { "LastLoginTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, LastLoginTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLoginTime_MetaData), NewProp_LastLoginTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_SessionToken = { "SessionToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, SessionToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionToken_MetaData), NewProp_SessionToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Experience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_PlayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_ActiveQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_ActiveQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Skills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_Currencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_bIsOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_LastLoginTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_SessionToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PlayerData",
	Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
	sizeof(FPlayerData),
	alignof(FPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerData.InnerSingleton;
}
// ********** End ScriptStruct FPlayerData *********************************************************

// ********** Begin ScriptStruct FGameSettings *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameSettings;
class UScriptStruct* FGameSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSettings, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("GameSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FGameSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGameSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullscreen_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsQuality_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertYAxis_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyBindings_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static void NewProp_bFullscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullscreen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphicsQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static void NewProp_bInvertYAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertYAxis;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyBindings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyBindings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_KeyBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, ResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionX_MetaData), NewProp_ResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, ResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionY_MetaData), NewProp_ResolutionY_MetaData) };
void Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bFullscreen_SetBit(void* Obj)
{
	((FGameSettings*)Obj)->bFullscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bFullscreen = { "bFullscreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSettings), &Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bFullscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullscreen_MetaData), NewProp_bFullscreen_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_GraphicsQuality = { "GraphicsQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, GraphicsQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsQuality_MetaData), NewProp_GraphicsQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, SFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXVolume_MetaData), NewProp_SFXVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
void Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bInvertYAxis_SetBit(void* Obj)
{
	((FGameSettings*)Obj)->bInvertYAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bInvertYAxis = { "bInvertYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameSettings), &Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bInvertYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertYAxis_MetaData), NewProp_bInvertYAxis_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings_ValueProp = { "KeyBindings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings_Key_KeyProp = { "KeyBindings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings = { "KeyBindings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameSettings, KeyBindings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyBindings_MetaData), NewProp_KeyBindings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bFullscreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_GraphicsQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MasterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_SFXVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_bInvertYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameSettings_Statics::NewProp_KeyBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"GameSettings",
	Z_Construct_UScriptStruct_FGameSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettings_Statics::PropPointers),
	sizeof(FGameSettings),
	alignof(FGameSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FGameSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameSettings.InnerSingleton, Z_Construct_UScriptStruct_FGameSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGameSettings.InnerSingleton;
}
// ********** End ScriptStruct FGameSettings *******************************************************

// ********** Begin ScriptStruct FIntArray *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIntArray;
class UScriptStruct* FIntArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIntArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIntArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntArray, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("IntArray"));
	}
	return Z_Registration_Info_UScriptStruct_FIntArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIntArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntArray_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntArray_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntArray, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntArray_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntArray_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"IntArray",
	Z_Construct_UScriptStruct_FIntArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArray_Statics::PropPointers),
	sizeof(FIntArray),
	alignof(FIntArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntArray()
{
	if (!Z_Registration_Info_UScriptStruct_FIntArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIntArray.InnerSingleton, Z_Construct_UScriptStruct_FIntArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIntArray.InnerSingleton;
}
// ********** End ScriptStruct FIntArray ***********************************************************

// ********** Begin ScriptStruct FComplexNestedData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComplexNestedData;
class UScriptStruct* FComplexNestedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComplexNestedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComplexNestedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComplexNestedData, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("ComplexNestedData"));
	}
	return Z_Registration_Info_UScriptStruct_FComplexNestedData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FComplexNestedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "Complex" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMap_MetaData[] = {
		{ "Category", "Complex" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "Category", "Complex" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[] = {
		{ "Category", "Complex" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComplexNestedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComplexNestedData, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) }; // 1664009876
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap_ValueProp = { "PlayerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 1664009876
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap_Key_KeyProp = { "PlayerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap = { "PlayerMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComplexNestedData, PlayerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMap_MetaData), NewProp_PlayerMap_MetaData) }; // 1664009876
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Matrix_Inner = { "Matrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntArray, METADATA_PARAMS(0, nullptr) }; // 2751577790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComplexNestedData, Matrix), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) }; // 2751577790
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComplexNestedData, GlobalSettings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSettings_MetaData), NewProp_GlobalSettings_MetaData) }; // 1248772219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComplexNestedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_PlayerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Matrix_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewProp_GlobalSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComplexNestedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComplexNestedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"ComplexNestedData",
	Z_Construct_UScriptStruct_FComplexNestedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComplexNestedData_Statics::PropPointers),
	sizeof(FComplexNestedData),
	alignof(FComplexNestedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComplexNestedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComplexNestedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComplexNestedData()
{
	if (!Z_Registration_Info_UScriptStruct_FComplexNestedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComplexNestedData.InnerSingleton, Z_Construct_UScriptStruct_FComplexNestedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FComplexNestedData.InnerSingleton;
}
// ********** End ScriptStruct FComplexNestedData **************************************************

// ********** Begin ScriptStruct FStructForgeResult ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStructForgeResult;
class UScriptStruct* FStructForgeResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStructForgeResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStructForgeResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructForgeResult, (UObject*)Z_Construct_UPackage__Script_STRUCTFORGE(), TEXT("StructForgeResult"));
	}
	return Z_Registration_Info_UScriptStruct_FStructForgeResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStructForgeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StructForgeTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructForgeResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FStructForgeResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStructForgeResult), &Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructForgeResult, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructForgeResult, ErrorCode), Z_Construct_UEnum_STRUCTFORGE_EStructForgeErrorCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) }; // 162179621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructForgeResult, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructForgeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructForgeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructForgeResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_STRUCTFORGE,
	nullptr,
	&NewStructOps,
	"StructForgeResult",
	Z_Construct_UScriptStruct_FStructForgeResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructForgeResult_Statics::PropPointers),
	sizeof(FStructForgeResult),
	alignof(FStructForgeResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructForgeResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructForgeResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructForgeResult()
{
	if (!Z_Registration_Info_UScriptStruct_FStructForgeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStructForgeResult.InnerSingleton, Z_Construct_UScriptStruct_FStructForgeResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStructForgeResult.InnerSingleton;
}
// ********** End ScriptStruct FStructForgeResult **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStructForgeErrorCode_StaticEnum, TEXT("EStructForgeErrorCode"), &Z_Registration_Info_UEnum_EStructForgeErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 162179621U) },
		{ EPlayerClass_StaticEnum, TEXT("EPlayerClass"), &Z_Registration_Info_UEnum_EPlayerClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3453318573U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_FInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 2732628929U) },
		{ FPlayerStats::StaticStruct, Z_Construct_UScriptStruct_FPlayerStats_Statics::NewStructOps, TEXT("PlayerStats"), &Z_Registration_Info_UScriptStruct_FPlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStats), 4015173399U) },
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_FQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 3944685571U) },
		{ FPlayerLocation::StaticStruct, Z_Construct_UScriptStruct_FPlayerLocation_Statics::NewStructOps, TEXT("PlayerLocation"), &Z_Registration_Info_UScriptStruct_FPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerLocation), 3243038805U) },
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_FPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 1664009876U) },
		{ FGameSettings::StaticStruct, Z_Construct_UScriptStruct_FGameSettings_Statics::NewStructOps, TEXT("GameSettings"), &Z_Registration_Info_UScriptStruct_FGameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameSettings), 1248772219U) },
		{ FIntArray::StaticStruct, Z_Construct_UScriptStruct_FIntArray_Statics::NewStructOps, TEXT("IntArray"), &Z_Registration_Info_UScriptStruct_FIntArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntArray), 2751577790U) },
		{ FComplexNestedData::StaticStruct, Z_Construct_UScriptStruct_FComplexNestedData_Statics::NewStructOps, TEXT("ComplexNestedData"), &Z_Registration_Info_UScriptStruct_FComplexNestedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComplexNestedData), 3738847553U) },
		{ FStructForgeResult::StaticStruct, Z_Construct_UScriptStruct_FStructForgeResult_Statics::NewStructOps, TEXT("StructForgeResult"), &Z_Registration_Info_UScriptStruct_FStructForgeResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructForgeResult), 1276436555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_1305915818(TEXT("/Script/STRUCTFORGE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_JSONTesting_Plugins_STRUCTFORGE_Source_STRUCTFORGE_Public_StructForgeTypes_h__Script_STRUCTFORGE_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
