// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTRUCTFORGE_init() {}
	STRUCTFORGE_API UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature();
	STRUCTFORGE_API UFunction* Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_STRUCTFORGE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_STRUCTFORGE()
	{
		if (!Z_Registration_Info_UPackage__Script_STRUCTFORGE.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeAsyncComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_STRUCTFORGE_OnStructForgeOperationComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/STRUCTFORGE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x404C52F0,
				0x2B2BDC4D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_STRUCTFORGE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_STRUCTFORGE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_STRUCTFORGE(Z_Construct_UPackage__Script_STRUCTFORGE, TEXT("/Script/STRUCTFORGE"), Z_Registration_Info_UPackage__Script_STRUCTFORGE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x404C52F0, 0x2B2BDC4D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
