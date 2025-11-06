// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP_Multithreading/Public/AtomicContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomicContainer() {}

// Begin Cross Module References
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAtomicContainer();
BP_MULTITHREADING_API UClass* Z_Construct_UClass_UAtomicContainer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
UPackage* Z_Construct_UPackage__Script_BP_Multithreading();
// End Cross Module References

// Begin Class UAtomicContainer Function AddQueue
struct Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics
{
	struct AtomicContainer_eventAddQueue_Parms
	{
		FName Identifier;
		UProperty* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Set" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventAddQueue_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventAddQueue_Parms, Value), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "AddQueue", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::AtomicContainer_eventAddQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::AtomicContainer_eventAddQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_AddQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_AddQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execAddQueue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_GET_OBJECT(UProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddQueue(Z_Param_Identifier,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAtomicContainer Function AddQueue

// Begin Class UAtomicContainer Function GetAtomic
struct Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics
{
	struct AtomicContainer_eventGetAtomic_Parms
	{
		FName Identifier;
		UProperty* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Get" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetAtomic_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetAtomic_Parms, Value), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomicContainer_eventGetAtomic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomicContainer_eventGetAtomic_Parms), &Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "GetAtomic", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::AtomicContainer_eventGetAtomic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::AtomicContainer_eventGetAtomic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_GetAtomic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_GetAtomic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execGetAtomic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_GET_OBJECT_REF(UProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAtomic(Z_Param_Identifier,P_ARG_GC_BARRIER(Z_Param_Out_Value));
	P_NATIVE_END;
}
// End Class UAtomicContainer Function GetAtomic

// Begin Class UAtomicContainer Function GetAtomicAndRemove
struct Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics
{
	struct AtomicContainer_eventGetAtomicAndRemove_Parms
	{
		FName Identifier;
		UProperty* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Get" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetAtomicAndRemove_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetAtomicAndRemove_Parms, Value), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomicContainer_eventGetAtomicAndRemove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomicContainer_eventGetAtomicAndRemove_Parms), &Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "GetAtomicAndRemove", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::AtomicContainer_eventGetAtomicAndRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::AtomicContainer_eventGetAtomicAndRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execGetAtomicAndRemove)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_GET_OBJECT_REF(UProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAtomicAndRemove(Z_Param_Identifier,P_ARG_GC_BARRIER(Z_Param_Out_Value));
	P_NATIVE_END;
}
// End Class UAtomicContainer Function GetAtomicAndRemove

// Begin Class UAtomicContainer Function GetQueue
struct Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics
{
	struct AtomicContainer_eventGetQueue_Parms
	{
		FName Identifier;
		UProperty* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Set" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetQueue_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventGetQueue_Parms, Value), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomicContainer_eventGetQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomicContainer_eventGetQueue_Parms), &Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "GetQueue", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::AtomicContainer_eventGetQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::AtomicContainer_eventGetQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_GetQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_GetQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execGetQueue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_GET_OBJECT_REF(UProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetQueue(Z_Param_Identifier,P_ARG_GC_BARRIER(Z_Param_Out_Value));
	P_NATIVE_END;
}
// End Class UAtomicContainer Function GetQueue

// Begin Class UAtomicContainer Function RemoveAtomic
struct Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics
{
	struct AtomicContainer_eventRemoveAtomic_Parms
	{
		FName Identifier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Remove" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventRemoveAtomic_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AtomicContainer_eventRemoveAtomic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtomicContainer_eventRemoveAtomic_Parms), &Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "RemoveAtomic", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::AtomicContainer_eventRemoveAtomic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::AtomicContainer_eventRemoveAtomic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_RemoveAtomic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_RemoveAtomic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execRemoveAtomic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAtomic(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class UAtomicContainer Function RemoveAtomic

// Begin Class UAtomicContainer Function RemoveQueue
struct Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics
{
	struct AtomicContainer_eventRemoveQueue_Parms
	{
		FName Identifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Set" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventRemoveQueue_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::NewProp_Identifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "RemoveQueue", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::AtomicContainer_eventRemoveQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::AtomicContainer_eventRemoveQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_RemoveQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_RemoveQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execRemoveQueue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveQueue(Z_Param_Identifier);
	P_NATIVE_END;
}
// End Class UAtomicContainer Function RemoveQueue

// Begin Class UAtomicContainer Function SetAtomic
struct Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics
{
	struct AtomicContainer_eventSetAtomic_Parms
	{
		FName Identifier;
		UProperty* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Atomics|Set" },
		{ "CustomStructureParam", "Value" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventSetAtomic_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtomicContainer_eventSetAtomic_Parms, Value), Z_Construct_UClass_UProperty, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomicContainer, nullptr, "SetAtomic", nullptr, nullptr, Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::AtomicContainer_eventSetAtomic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::AtomicContainer_eventSetAtomic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtomicContainer_SetAtomic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomicContainer_SetAtomic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtomicContainer::execSetAtomic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
	P_GET_OBJECT(UProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAtomic(Z_Param_Identifier,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UAtomicContainer Function SetAtomic

// Begin Class UAtomicContainer
void UAtomicContainer::StaticRegisterNativesUAtomicContainer()
{
	UClass* Class = UAtomicContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddQueue", &UAtomicContainer::execAddQueue },
		{ "GetAtomic", &UAtomicContainer::execGetAtomic },
		{ "GetAtomicAndRemove", &UAtomicContainer::execGetAtomicAndRemove },
		{ "GetQueue", &UAtomicContainer::execGetQueue },
		{ "RemoveAtomic", &UAtomicContainer::execRemoveAtomic },
		{ "RemoveQueue", &UAtomicContainer::execRemoveQueue },
		{ "SetAtomic", &UAtomicContainer::execSetAtomic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomicContainer);
UClass* Z_Construct_UClass_UAtomicContainer_NoRegister()
{
	return UAtomicContainer::StaticClass();
}
struct Z_Construct_UClass_UAtomicContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AtomicContainer.h" },
		{ "ModuleRelativePath", "Public/AtomicContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomicContainer_AddQueue, "AddQueue" }, // 1857574962
		{ &Z_Construct_UFunction_UAtomicContainer_GetAtomic, "GetAtomic" }, // 2764332119
		{ &Z_Construct_UFunction_UAtomicContainer_GetAtomicAndRemove, "GetAtomicAndRemove" }, // 2561518121
		{ &Z_Construct_UFunction_UAtomicContainer_GetQueue, "GetQueue" }, // 3470703376
		{ &Z_Construct_UFunction_UAtomicContainer_RemoveAtomic, "RemoveAtomic" }, // 4289693847
		{ &Z_Construct_UFunction_UAtomicContainer_RemoveQueue, "RemoveQueue" }, // 1774980898
		{ &Z_Construct_UFunction_UAtomicContainer_SetAtomic, "SetAtomic" }, // 3322494822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomicContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtomicContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BP_Multithreading,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomicContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomicContainer_Statics::ClassParams = {
	&UAtomicContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtomicContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtomicContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtomicContainer()
{
	if (!Z_Registration_Info_UClass_UAtomicContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomicContainer.OuterSingleton, Z_Construct_UClass_UAtomicContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtomicContainer.OuterSingleton;
}
template<> BP_MULTITHREADING_API UClass* StaticClass<UAtomicContainer>()
{
	return UAtomicContainer::StaticClass();
}
UAtomicContainer::UAtomicContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomicContainer);
UAtomicContainer::~UAtomicContainer() {}
// End Class UAtomicContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtomicContainer, UAtomicContainer::StaticClass, TEXT("UAtomicContainer"), &Z_Registration_Info_UClass_UAtomicContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomicContainer), 849533218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_3562355789(TEXT("/Script/BP_Multithreading"),
	Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
