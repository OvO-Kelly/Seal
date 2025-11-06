// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_Multithreading/Public/MultithreadingBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultithreadingBlueprintLibrary() {}

// Begin Cross Module References
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAsyncGameThread();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAsyncGameThread_NoRegister();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAsyncThread();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAsyncThread_NoRegister();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UMultithreadingBlueprintLibrary();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UMultithreadingBlueprintLibrary_NoRegister();
BP_MULTITHREADING_API UEnum* Z_Construct_UEnum_BP_Multithreading_EParallelFlags();
BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature();
BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature();
BP_MULTITHREADING_API UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BP_Multithreading();
// End Cross Module References

// Begin Delegate FFunctionThreadLogic
struct Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading, nullptr, "FunctionThreadLogic__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFunctionThreadLogic_DelegateWrapper(const FScriptDelegate& FunctionThreadLogic)
{
	FunctionThreadLogic.ProcessDelegate<UObject>(NULL);
}
// End Delegate FFunctionThreadLogic

// Begin Delegate FParallelForLogic
struct Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics
{
	struct _Script_BP_Multithreading_eventParallelForLogic_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BP_Multithreading_eventParallelForLogic_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading, nullptr, "ParallelForLogic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::_Script_BP_Multithreading_eventParallelForLogic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::_Script_BP_Multithreading_eventParallelForLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FParallelForLogic_DelegateWrapper(const FScriptDelegate& ParallelForLogic, int32 Index)
{
	struct _Script_BP_Multithreading_eventParallelForLogic_Parms
	{
		int32 Index;
	};
	_Script_BP_Multithreading_eventParallelForLogic_Parms Parms;
	Parms.Index=Index;
	ParallelForLogic.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FParallelForLogic

// Begin Enum EParallelFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParallelFlags;
static UEnum* EParallelFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParallelFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParallelFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BP_Multithreading_EParallelFlags, (UObject*)Z_Construct_UPackage__Script_BP_Multithreading(), TEXT("EParallelFlags"));
	}
	return Z_Registration_Info_UEnum_EParallelFlags.OuterSingleton;
}
template<> BP_MULTITHREADING_API UEnum* StaticEnum<EParallelFlags>()
{
	return EParallelFlags_StaticEnum();
}
struct Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackgroundPriority.Comment", "// tasks should run on background priority threads\n" },
		{ "BackgroundPriority.Name", "BackgroundPriority" },
		{ "BackgroundPriority.ToolTip", "tasks should run on background priority threads" },
		{ "BlueprintType", "true" },
		{ "ForceSingleThread.Comment", "//Mostly used for testing, when used, ParallelFor will run single threaded instead.\n" },
		{ "ForceSingleThread.Name", "ForceSingleThread" },
		{ "ForceSingleThread.ToolTip", "Mostly used for testing, when used, ParallelFor will run single threaded instead." },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
		{ "None.Comment", "// Default behavior\n" },
		{ "None.Name", "None" },
		{ "None.ToolTip", "Default behavior" },
		{ "PumpRenderingThread.Comment", "// if running on the rendering thread, make sure the ProcessThread is called when idle\n" },
		{ "PumpRenderingThread.Name", "PumpRenderingThread" },
		{ "PumpRenderingThread.ToolTip", "if running on the rendering thread, make sure the ProcessThread is called when idle" },
		{ "Unbalanced.Comment", "//Offers better work distribution among threads at the cost of a little bit more synchronization.\n//This should be used for tasks with highly variable computational time.\n" },
		{ "Unbalanced.Name", "Unbalanced" },
		{ "Unbalanced.ToolTip", "Offers better work distribution among threads at the cost of a little bit more synchronization.\nThis should be used for tasks with highly variable computational time." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "ForceSingleThread", (int64)ForceSingleThread },
		{ "Unbalanced", (int64)Unbalanced },
		{ "PumpRenderingThread", (int64)PumpRenderingThread },
		{ "BackgroundPriority", (int64)BackgroundPriority },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading,
	nullptr,
	"EParallelFlags",
	"EParallelFlags",
	Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BP_Multithreading_EParallelFlags()
{
	if (!Z_Registration_Info_UEnum_EParallelFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParallelFlags.InnerSingleton, Z_Construct_UEnum_BP_Multithreading_EParallelFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParallelFlags.InnerSingleton;
}
// End Enum EParallelFlags

// Begin Class UMultithreadingBlueprintLibrary Function EnableActorMultiThreadTick
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics
{
	struct MultithreadingBlueprintLibrary_eventEnableActorMultiThreadTick_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventEnableActorMultiThreadTick_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "EnableActorMultiThreadTick", nullptr, nullptr, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::MultithreadingBlueprintLibrary_eventEnableActorMultiThreadTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::MultithreadingBlueprintLibrary_eventEnableActorMultiThreadTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execEnableActorMultiThreadTick)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::EnableActorMultiThreadTick(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function EnableActorMultiThreadTick

// Begin Class UMultithreadingBlueprintLibrary Function GetThread
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "GetThread", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execGetThread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::GetThread();
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function GetThread

// Begin Class UMultithreadingBlueprintLibrary Function Run_ParallelFor
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics
{
	struct MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms
	{
		FScriptDelegate ParallelForLogic;
		int32 LoopAmount;
		TEnumAsByte<EParallelFlags> ParallelType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "CPP_Default_ParallelType", "BackgroundPriority" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ParallelForLogic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParallelType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_ParallelForLogic = { "ParallelForLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms, ParallelForLogic), Z_Construct_UDelegateFunction_BP_Multithreading_ParallelForLogic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2374983461
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_LoopAmount = { "LoopAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms, LoopAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_ParallelType = { "ParallelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms, ParallelType), Z_Construct_UEnum_BP_Multithreading_EParallelFlags, METADATA_PARAMS(0, nullptr) }; // 3358545438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_ParallelForLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_LoopAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::NewProp_ParallelType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "Run_ParallelFor", nullptr, nullptr, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::MultithreadingBlueprintLibrary_eventRun_ParallelFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execRun_ParallelFor)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ParallelForLogic);
	P_GET_PROPERTY(FIntProperty,Z_Param_LoopAmount);
	P_GET_PROPERTY(FByteProperty,Z_Param_ParallelType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::Run_ParallelFor(FParallelForLogic(Z_Param_ParallelForLogic),Z_Param_LoopAmount,EParallelFlags(Z_Param_ParallelType));
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function Run_ParallelFor

// Begin Class UMultithreadingBlueprintLibrary Function RunTask_OnBackgroundThread
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics
{
	struct MultithreadingBlueprintLibrary_eventRunTask_OnBackgroundThread_Parms
	{
		FScriptDelegate BackGroundThreadLogic;
		FScriptDelegate GameThreadLogic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BackGroundThreadLogic;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_GameThreadLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::NewProp_BackGroundThreadLogic = { "BackGroundThreadLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRunTask_OnBackgroundThread_Parms, BackGroundThreadLogic), Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1551508368
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::NewProp_GameThreadLogic = { "GameThreadLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRunTask_OnBackgroundThread_Parms, GameThreadLogic), Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1551508368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::NewProp_BackGroundThreadLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::NewProp_GameThreadLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "RunTask_OnBackgroundThread", nullptr, nullptr, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::MultithreadingBlueprintLibrary_eventRunTask_OnBackgroundThread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::MultithreadingBlueprintLibrary_eventRunTask_OnBackgroundThread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execRunTask_OnBackgroundThread)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_BackGroundThreadLogic);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_GameThreadLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::RunTask_OnBackgroundThread(FFunctionThreadLogic(Z_Param_BackGroundThreadLogic),FFunctionThreadLogic(Z_Param_GameThreadLogic));
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function RunTask_OnBackgroundThread

// Begin Class UMultithreadingBlueprintLibrary Function RunTask_OnGameThread
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics
{
	struct MultithreadingBlueprintLibrary_eventRunTask_OnGameThread_Parms
	{
		FScriptDelegate GameThreadLogic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_GameThreadLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::NewProp_GameThreadLogic = { "GameThreadLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventRunTask_OnGameThread_Parms, GameThreadLogic), Z_Construct_UDelegateFunction_BP_Multithreading_FunctionThreadLogic__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1551508368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::NewProp_GameThreadLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "RunTask_OnGameThread", nullptr, nullptr, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::MultithreadingBlueprintLibrary_eventRunTask_OnGameThread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::MultithreadingBlueprintLibrary_eventRunTask_OnGameThread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execRunTask_OnGameThread)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_GameThreadLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::RunTask_OnGameThread(FFunctionThreadLogic(Z_Param_GameThreadLogic));
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function RunTask_OnGameThread

// Begin Class UMultithreadingBlueprintLibrary Function SleepThread
struct Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics
{
	struct MultithreadingBlueprintLibrary_eventSleepThread_Parms
	{
		float SleepTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::NewProp_SleepTime = { "SleepTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultithreadingBlueprintLibrary_eventSleepThread_Parms, SleepTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::NewProp_SleepTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultithreadingBlueprintLibrary, nullptr, "SleepThread", nullptr, nullptr, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::MultithreadingBlueprintLibrary_eventSleepThread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::MultithreadingBlueprintLibrary_eventSleepThread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultithreadingBlueprintLibrary::execSleepThread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SleepTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultithreadingBlueprintLibrary::SleepThread(Z_Param_SleepTime);
	P_NATIVE_END;
}
// End Class UMultithreadingBlueprintLibrary Function SleepThread

// Begin Class UMultithreadingBlueprintLibrary
void UMultithreadingBlueprintLibrary::StaticRegisterNativesUMultithreadingBlueprintLibrary()
{
	UClass* Class = UMultithreadingBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableActorMultiThreadTick", &UMultithreadingBlueprintLibrary::execEnableActorMultiThreadTick },
		{ "GetThread", &UMultithreadingBlueprintLibrary::execGetThread },
		{ "Run_ParallelFor", &UMultithreadingBlueprintLibrary::execRun_ParallelFor },
		{ "RunTask_OnBackgroundThread", &UMultithreadingBlueprintLibrary::execRunTask_OnBackgroundThread },
		{ "RunTask_OnGameThread", &UMultithreadingBlueprintLibrary::execRunTask_OnGameThread },
		{ "SleepThread", &UMultithreadingBlueprintLibrary::execSleepThread },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultithreadingBlueprintLibrary);
UClass* Z_Construct_UClass_UMultithreadingBlueprintLibrary_NoRegister()
{
	return UMultithreadingBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MultithreadingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_EnableActorMultiThreadTick, "EnableActorMultiThreadTick" }, // 2505387131
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_GetThread, "GetThread" }, // 3873855227
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_Run_ParallelFor, "Run_ParallelFor" }, // 3984928106
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnBackgroundThread, "RunTask_OnBackgroundThread" }, // 2617669411
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_RunTask_OnGameThread, "RunTask_OnGameThread" }, // 3394162655
		{ &Z_Construct_UFunction_UMultithreadingBlueprintLibrary_SleepThread, "SleepThread" }, // 2001803463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultithreadingBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::ClassParams = {
	&UMultithreadingBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultithreadingBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UMultithreadingBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultithreadingBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultithreadingBlueprintLibrary.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UMultithreadingBlueprintLibrary>()
{
	return UMultithreadingBlueprintLibrary::StaticClass();
}
UMultithreadingBlueprintLibrary::UMultithreadingBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultithreadingBlueprintLibrary);
UMultithreadingBlueprintLibrary::~UMultithreadingBlueprintLibrary() {}
// End Class UMultithreadingBlueprintLibrary

// Begin Delegate FThreadLogic
struct Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BP_Multithreading, nullptr, "ThreadLogic__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FThreadLogic_DelegateWrapper(const FMulticastScriptDelegate& ThreadLogic)
{
	ThreadLogic.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FThreadLogic

// Begin Class UAsyncThread Function Threaded_Logic
struct Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics
{
	struct AsyncThread_eventThreaded_Logic_Parms
	{
		const UObject* WorldContextObject;
		UAsyncThread* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncThread_eventThreaded_Logic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncThread_eventThreaded_Logic_Parms, ReturnValue), Z_Construct_UClass_UAsyncThread_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncThread, nullptr, "Threaded_Logic", nullptr, nullptr, Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::AsyncThread_eventThreaded_Logic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::AsyncThread_eventThreaded_Logic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncThread_Threaded_Logic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncThread_Threaded_Logic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncThread::execThreaded_Logic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncThread**)Z_Param__Result=UAsyncThread::Threaded_Logic(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAsyncThread Function Threaded_Logic

// Begin Class UAsyncThread
void UAsyncThread::StaticRegisterNativesUAsyncThread()
{
	UClass* Class = UAsyncThread::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Threaded_Logic", &UAsyncThread::execThreaded_Logic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncThread);
UClass* Z_Construct_UClass_UAsyncThread_NoRegister()
{
	return UAsyncThread::StaticClass();
}
struct Z_Construct_UClass_UAsyncThread_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultithreadingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBackgroundThread_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameThread_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBackgroundThread;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameThread;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncThread_Threaded_Logic, "Threaded_Logic" }, // 834480340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncThread>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncThread_Statics::NewProp_OnBackgroundThread = { "OnBackgroundThread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncThread, OnBackgroundThread), Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBackgroundThread_MetaData), NewProp_OnBackgroundThread_MetaData) }; // 2372735465
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncThread_Statics::NewProp_OnGameThread = { "OnGameThread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncThread, OnGameThread), Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameThread_MetaData), NewProp_OnGameThread_MetaData) }; // 2372735465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncThread_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncThread, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncThread_Statics::NewProp_OnBackgroundThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncThread_Statics::NewProp_OnGameThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncThread_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncThread_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncThread_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncThread_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncThread_Statics::ClassParams = {
	&UAsyncThread::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncThread_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncThread_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncThread_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncThread_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncThread()
{
	if (!Z_Registration_Info_UClass_UAsyncThread.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncThread.OuterSingleton, Z_Construct_UClass_UAsyncThread_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncThread.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UAsyncThread>()
{
	return UAsyncThread::StaticClass();
}
UAsyncThread::UAsyncThread(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncThread);
UAsyncThread::~UAsyncThread() {}
// End Class UAsyncThread

// Begin Class UAsyncGameThread Function GameThread_Logic
struct Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics
{
	struct AsyncGameThread_eventGameThread_Logic_Parms
	{
		const UObject* WorldContextObject;
		UAsyncGameThread* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Threaded" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncGameThread_eventGameThread_Logic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncGameThread_eventGameThread_Logic_Parms, ReturnValue), Z_Construct_UClass_UAsyncGameThread_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncGameThread, nullptr, "GameThread_Logic", nullptr, nullptr, Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::AsyncGameThread_eventGameThread_Logic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::AsyncGameThread_eventGameThread_Logic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncGameThread::execGameThread_Logic)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncGameThread**)Z_Param__Result=UAsyncGameThread::GameThread_Logic(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAsyncGameThread Function GameThread_Logic

// Begin Class UAsyncGameThread
void UAsyncGameThread::StaticRegisterNativesUAsyncGameThread()
{
	UClass* Class = UAsyncGameThread::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GameThread_Logic", &UAsyncGameThread::execGameThread_Logic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncGameThread);
UClass* Z_Construct_UClass_UAsyncGameThread_NoRegister()
{
	return UAsyncGameThread::StaticClass();
}
struct Z_Construct_UClass_UAsyncGameThread_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultithreadingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameThread_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultithreadingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameThread;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncGameThread_GameThread_Logic, "GameThread_Logic" }, // 1488113456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncGameThread>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncGameThread_Statics::NewProp_OnGameThread = { "OnGameThread", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncGameThread, OnGameThread), Z_Construct_UDelegateFunction_BP_Multithreading_ThreadLogic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameThread_MetaData), NewProp_OnGameThread_MetaData) }; // 2372735465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncGameThread_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncGameThread, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncGameThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncGameThread_Statics::NewProp_OnGameThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncGameThread_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncGameThread_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncGameThread_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncGameThread_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncGameThread_Statics::ClassParams = {
	&UAsyncGameThread::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncGameThread_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncGameThread_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncGameThread_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncGameThread_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncGameThread()
{
	if (!Z_Registration_Info_UClass_UAsyncGameThread.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncGameThread.OuterSingleton, Z_Construct_UClass_UAsyncGameThread_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncGameThread.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UAsyncGameThread>()
{
	return UAsyncGameThread::StaticClass();
}
UAsyncGameThread::UAsyncGameThread(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncGameThread);
UAsyncGameThread::~UAsyncGameThread() {}
// End Class UAsyncGameThread

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParallelFlags_StaticEnum, TEXT("EParallelFlags"), &Z_Registration_Info_UEnum_EParallelFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3358545438U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultithreadingBlueprintLibrary, UMultithreadingBlueprintLibrary::StaticClass, TEXT("UMultithreadingBlueprintLibrary"), &Z_Registration_Info_UClass_UMultithreadingBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultithreadingBlueprintLibrary), 2094627214U) },
		{ Z_Construct_UClass_UAsyncThread, UAsyncThread::StaticClass, TEXT("UAsyncThread"), &Z_Registration_Info_UClass_UAsyncThread, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncThread), 4184133939U) },
		{ Z_Construct_UClass_UAsyncGameThread, UAsyncGameThread::StaticClass, TEXT("UAsyncGameThread"), &Z_Registration_Info_UClass_UAsyncGameThread, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncGameThread), 2829452454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_1108780918(TEXT("/Script/BP_Multithreading"),
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
