// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Multithreading_init() {}
	BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature();
	BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature();
	BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature();
	BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BP_Multithreading;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BP_Multithreading()
	{
		if (!Z_Registration_Info_UPackage__Script_BP_Multithreading.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BP_Multithreading",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEDB42566,
				0x6B3A83A7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BP_Multithreading.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BP_Multithreading.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BP_Multithreading(Z_Construct_UPackage__Script_BP_Multithreading, TEXT("/Script/BP_Multithreading"), Z_Registration_Info_UPackage__Script_BP_Multithreading, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEDB42566, 0x6B3A83A7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
