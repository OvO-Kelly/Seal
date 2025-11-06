// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_Multithreading/Public/ThreadedActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreadedActorComponent() {}

// Begin Cross Module References
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UThreadedActorComponent();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UThreadedActorComponent_NoRegister();
BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BP_Multithreading();
// End Cross Module References

// Begin Delegate FOnAnotherThreadTickDelegate
struct Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThreadedActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading, nullptr, "OnAnotherThreadTickDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnotherThreadTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnotherThreadTickDelegate)
{
	OnAnotherThreadTickDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAnotherThreadTickDelegate

// Begin Class UThreadedActorComponent
void UThreadedActorComponent::StaticRegisterNativesUThreadedActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThreadedActorComponent);
UClass* Z_Construct_UClass_UThreadedActorComponent_NoRegister()
{
	return UThreadedActorComponent::StaticClass();
}
struct Z_Construct_UClass_UThreadedActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ThreadedActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ThreadedActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnotherThreadTick_MetaData[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/ThreadedActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnotherThreadTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThreadedActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UThreadedActorComponent_Statics::NewProp_OnAnotherThreadTick = { "OnAnotherThreadTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThreadedActorComponent, OnAnotherThreadTick), Z_Construct_UDelegateFunction_BP_Multithreading_OnAnotherThreadTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnotherThreadTick_MetaData), NewProp_OnAnotherThreadTick_MetaData) }; // 3163219232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThreadedActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThreadedActorComponent_Statics::NewProp_OnAnotherThreadTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThreadedActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UThreadedActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThreadedActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThreadedActorComponent_Statics::ClassParams = {
	&UThreadedActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UThreadedActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UThreadedActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThreadedActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UThreadedActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThreadedActorComponent()
{
	if (!Z_Registration_Info_UClass_UThreadedActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThreadedActorComponent.OuterSingleton, Z_Construct_UClass_UThreadedActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThreadedActorComponent.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UThreadedActorComponent>()
{
	return UThreadedActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThreadedActorComponent);
UThreadedActorComponent::~UThreadedActorComponent() {}
// End Class UThreadedActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThreadedActorComponent, UThreadedActorComponent::StaticClass, TEXT("UThreadedActorComponent"), &Z_Registration_Info_UClass_UThreadedActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThreadedActorComponent), 3235482011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_3817035831(TEXT("/Script/BP_Multithreading"),
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
