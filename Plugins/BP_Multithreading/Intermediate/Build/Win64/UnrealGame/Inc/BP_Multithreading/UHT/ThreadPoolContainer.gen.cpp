// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_Multithreading/Public/ThreadPoolContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThreadPoolContainer() {}

// Begin Cross Module References
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UPoolQueueWork();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UPoolQueueWork_NoRegister();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UThreadPoolContainer();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UThreadPoolContainer_NoRegister();
BP_MULTITHREADING_API UEnum* Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BP_Multithreading();
// End Cross Module References

// Begin Enum EBPThreadPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPThreadPriority;
static UEnum* EBPThreadPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBPThreadPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBPThreadPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority, (UObject*)Z_Construct_UPackage__Script_BP_Multithreading(), TEXT("EBPThreadPriority"));
	}
	return Z_Registration_Info_UEnum_EBPThreadPriority.OuterSingleton;
}
template<> BP_MULTITHREADING_API UEnum* StaticEnum<EBPThreadPriority>()
{
	return EBPThreadPriority_StaticEnum();
}
struct Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AboveNormal.Name", "AboveNormal" },
		{ "BelowNormal.Name", "BelowNormal" },
		{ "BlueprintType", "true" },
		{ "Highest.Name", "Highest" },
		{ "Lowest.Name", "Lowest" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
		{ "Normal.Name", "Normal" },
		{ "Num.Name", "Num" },
		{ "SlightlyBelowNormal.Name", "SlightlyBelowNormal" },
		{ "TimeCritical.Name", "TimeCritical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Normal", (int64)Normal },
		{ "AboveNormal", (int64)AboveNormal },
		{ "BelowNormal", (int64)BelowNormal },
		{ "Highest", (int64)Highest },
		{ "Lowest", (int64)Lowest },
		{ "SlightlyBelowNormal", (int64)SlightlyBelowNormal },
		{ "TimeCritical", (int64)TimeCritical },
		{ "Num", (int64)Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading,
	nullptr,
	"EBPThreadPriority",
	"EBPThreadPriority",
	Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority()
{
	if (!Z_Registration_Info_UEnum_EBPThreadPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPThreadPriority.InnerSingleton, Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBPThreadPriority.InnerSingleton;
}
// End Enum EBPThreadPriority

// Begin Class UPoolQueueWork Function OnDoThreadedWork
static const FName NAME_UPoolQueueWork_OnDoThreadedWork = FName(TEXT("OnDoThreadedWork"));
void UPoolQueueWork::OnDoThreadedWork()
{
	UFunction* Func = FindFunctionChecked(NAME_UPoolQueueWork_OnDoThreadedWork);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This is where the real thread work is done. All work that is done for\n\x09 * this queued object should be done from within the call to this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
		{ "ToolTip", "This is where the real thread work is done. All work that is done for\nthis queued object should be done from within the call to this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolQueueWork, nullptr, "OnDoThreadedWork", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPoolQueueWork Function OnDoThreadedWork

// Begin Class UPoolQueueWork Function OnPostWork
static const FName NAME_UPoolQueueWork_OnPostWork = FName(TEXT("OnPostWork"));
void UPoolQueueWork::OnPostWork()
{
	UFunction* Func = FindFunctionChecked(NAME_UPoolQueueWork_OnPostWork);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UPoolQueueWork_OnPostWork_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Calling in Game thread\n\x09*/" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
		{ "ToolTip", "Calling in Game thread" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolQueueWork_OnPostWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolQueueWork, nullptr, "OnPostWork", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolQueueWork_OnPostWork_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolQueueWork_OnPostWork_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPoolQueueWork_OnPostWork()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolQueueWork_OnPostWork_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPoolQueueWork Function OnPostWork

// Begin Class UPoolQueueWork
void UPoolQueueWork::StaticRegisterNativesUPoolQueueWork()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolQueueWork);
UClass* Z_Construct_UClass_UPoolQueueWork_NoRegister()
{
	return UPoolQueueWork::StaticClass();
}
struct Z_Construct_UClass_UPoolQueueWork_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ThreadPoolContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolQueueWork_OnDoThreadedWork, "OnDoThreadedWork" }, // 786358989
		{ &Z_Construct_UFunction_UPoolQueueWork_OnPostWork, "OnPostWork" }, // 1859192883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolQueueWork>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolQueueWork_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolQueueWork_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolQueueWork_Statics::ClassParams = {
	&UPoolQueueWork::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolQueueWork_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolQueueWork_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolQueueWork()
{
	if (!Z_Registration_Info_UClass_UPoolQueueWork.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolQueueWork.OuterSingleton, Z_Construct_UClass_UPoolQueueWork_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolQueueWork.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UPoolQueueWork>()
{
	return UPoolQueueWork::StaticClass();
}
UPoolQueueWork::UPoolQueueWork(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolQueueWork);
UPoolQueueWork::~UPoolQueueWork() {}
// End Class UPoolQueueWork

// Begin Class UThreadPoolContainer Function AddWork
struct Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics
{
	struct ThreadPoolContainer_eventAddWork_Parms
	{
		UPoolQueueWork* Work;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreadPool" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Work;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::NewProp_Work = { "Work", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreadPoolContainer_eventAddWork_Parms, Work), Z_Construct_UClass_UPoolQueueWork_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::NewProp_Work,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadPoolContainer, nullptr, "AddWork", nullptr, nullptr, Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::ThreadPoolContainer_eventAddWork_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::ThreadPoolContainer_eventAddWork_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreadPoolContainer_AddWork()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreadPoolContainer_AddWork_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreadPoolContainer::execAddWork)
{
	P_GET_OBJECT(UPoolQueueWork,Z_Param_Work);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWork(Z_Param_Work);
	P_NATIVE_END;
}
// End Class UThreadPoolContainer Function AddWork

// Begin Class UThreadPoolContainer Function CreateThreadPool
struct Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics
{
	struct ThreadPoolContainer_eventCreateThreadPool_Parms
	{
		int32 ThreadsAmount;
		TEnumAsByte<EBPThreadPriority> Priority;
		FString ThreadPoolName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreadPool" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreadsAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThreadsAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThreadPoolName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_ThreadsAmount = { "ThreadsAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreadPoolContainer_eventCreateThreadPool_Parms, ThreadsAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreadsAmount_MetaData), NewProp_ThreadsAmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreadPoolContainer_eventCreateThreadPool_Parms, Priority), Z_Construct_UEnum_BP_Multithreading_EBPThreadPriority, METADATA_PARAMS(0, nullptr) }; // 2490767097
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_ThreadPoolName = { "ThreadPoolName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreadPoolContainer_eventCreateThreadPool_Parms, ThreadPoolName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_ThreadsAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::NewProp_ThreadPoolName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadPoolContainer, nullptr, "CreateThreadPool", nullptr, nullptr, Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::ThreadPoolContainer_eventCreateThreadPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::ThreadPoolContainer_eventCreateThreadPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreadPoolContainer::execCreateThreadPool)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ThreadsAmount);
	P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
	P_GET_PROPERTY(FStrProperty,Z_Param_ThreadPoolName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateThreadPool(Z_Param_ThreadsAmount,EBPThreadPriority(Z_Param_Priority),Z_Param_ThreadPoolName);
	P_NATIVE_END;
}
// End Class UThreadPoolContainer Function CreateThreadPool

// Begin Class UThreadPoolContainer Function RemoveQueueWork
struct Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics
{
	struct ThreadPoolContainer_eventRemoveQueueWork_Parms
	{
		UPoolQueueWork* Work;
		bool ForceClear;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ThreadPool" },
		{ "CPP_Default_ForceClear", "false" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceClear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Work;
	static void NewProp_ForceClear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceClear;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_Work = { "Work", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThreadPoolContainer_eventRemoveQueueWork_Parms, Work), Z_Construct_UClass_UPoolQueueWork_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ForceClear_SetBit(void* Obj)
{
	((ThreadPoolContainer_eventRemoveQueueWork_Parms*)Obj)->ForceClear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ForceClear = { "ForceClear", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThreadPoolContainer_eventRemoveQueueWork_Parms), &Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ForceClear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceClear_MetaData), NewProp_ForceClear_MetaData) };
void Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ThreadPoolContainer_eventRemoveQueueWork_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThreadPoolContainer_eventRemoveQueueWork_Parms), &Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_Work,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ForceClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThreadPoolContainer, nullptr, "RemoveQueueWork", nullptr, nullptr, Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::ThreadPoolContainer_eventRemoveQueueWork_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::ThreadPoolContainer_eventRemoveQueueWork_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UThreadPoolContainer::execRemoveQueueWork)
{
	P_GET_OBJECT(UPoolQueueWork,Z_Param_Work);
	P_GET_UBOOL(Z_Param_ForceClear);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveQueueWork(Z_Param_Work,Z_Param_ForceClear);
	P_NATIVE_END;
}
// End Class UThreadPoolContainer Function RemoveQueueWork

// Begin Class UThreadPoolContainer
void UThreadPoolContainer::StaticRegisterNativesUThreadPoolContainer()
{
	UClass* Class = UThreadPoolContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWork", &UThreadPoolContainer::execAddWork },
		{ "CreateThreadPool", &UThreadPoolContainer::execCreateThreadPool },
		{ "RemoveQueueWork", &UThreadPoolContainer::execRemoveQueueWork },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThreadPoolContainer);
UClass* Z_Construct_UClass_UThreadPoolContainer_NoRegister()
{
	return UThreadPoolContainer::StaticClass();
}
struct Z_Construct_UClass_UThreadPoolContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ThreadPoolContainer.h" },
		{ "ModuleRelativePath", "Public/ThreadPoolContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UThreadPoolContainer_AddWork, "AddWork" }, // 961954164
		{ &Z_Construct_UFunction_UThreadPoolContainer_CreateThreadPool, "CreateThreadPool" }, // 1384381506
		{ &Z_Construct_UFunction_UThreadPoolContainer_RemoveQueueWork, "RemoveQueueWork" }, // 3522737890
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThreadPoolContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThreadPoolContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThreadPoolContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThreadPoolContainer_Statics::ClassParams = {
	&UThreadPoolContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThreadPoolContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UThreadPoolContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThreadPoolContainer()
{
	if (!Z_Registration_Info_UClass_UThreadPoolContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThreadPoolContainer.OuterSingleton, Z_Construct_UClass_UThreadPoolContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThreadPoolContainer.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UThreadPoolContainer>()
{
	return UThreadPoolContainer::StaticClass();
}
UThreadPoolContainer::UThreadPoolContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThreadPoolContainer);
UThreadPoolContainer::~UThreadPoolContainer() {}
// End Class UThreadPoolContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBPThreadPriority_StaticEnum, TEXT("EBPThreadPriority"), &Z_Registration_Info_UEnum_EBPThreadPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490767097U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolQueueWork, UPoolQueueWork::StaticClass, TEXT("UPoolQueueWork"), &Z_Registration_Info_UClass_UPoolQueueWork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolQueueWork), 2401948285U) },
		{ Z_Construct_UClass_UThreadPoolContainer, UThreadPoolContainer::StaticClass, TEXT("UThreadPoolContainer"), &Z_Registration_Info_UClass_UThreadPoolContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThreadPoolContainer), 2815161382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_1279624041(TEXT("/Script/BP_Multithreading"),
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
