// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThreadPoolContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPoolQueueWork;
#ifdef BP_MULTITHREADING_ThreadPoolContainer_generated_h
#error "ThreadPoolContainer.generated.h already included, missing '#pragma once' in ThreadPoolContainer.h"
#endif
#define BP_MULTITHREADING_ThreadPoolContainer_generated_h

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_CALLBACK_WRAPPERS
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolQueueWork(); \
	friend struct Z_Construct_UClass_UPoolQueueWork_Statics; \
public: \
	DECLARE_CLASS(UPoolQueueWork, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UPoolQueueWork)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolQueueWork(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoolQueueWork(UPoolQueueWork&&); \
	UPoolQueueWork(const UPoolQueueWork&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolQueueWork); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolQueueWork); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolQueueWork) \
	NO_API virtual ~UPoolQueueWork();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_23_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_CALLBACK_WRAPPERS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UPoolQueueWork>();

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveQueueWork); \
	DECLARE_FUNCTION(execAddWork); \
	DECLARE_FUNCTION(execCreateThreadPool);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThreadPoolContainer(); \
	friend struct Z_Construct_UClass_UThreadPoolContainer_Statics; \
public: \
	DECLARE_CLASS(UThreadPoolContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UThreadPoolContainer)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThreadPoolContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UThreadPoolContainer(UThreadPoolContainer&&); \
	UThreadPoolContainer(const UThreadPoolContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreadPoolContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreadPoolContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThreadPoolContainer) \
	NO_API virtual ~UThreadPoolContainer();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_47_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UThreadPoolContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadPoolContainer_h


#define FOREACH_ENUM_EBPTHREADPRIORITY(op) \
	op(Normal) \
	op(AboveNormal) \
	op(BelowNormal) \
	op(Highest) \
	op(Lowest) \
	op(SlightlyBelowNormal) \
	op(TimeCritical) \
	op(Num) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
