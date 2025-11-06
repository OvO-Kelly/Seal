// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultithreadingBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncGameThread;
class UAsyncThread;
class UObject;
#ifdef BP_MULTITHREADING_MultithreadingBlueprintLibrary_generated_h
#error "MultithreadingBlueprintLibrary.generated.h already included, missing '#pragma once' in MultithreadingBlueprintLibrary.h"
#endif
#define BP_MULTITHREADING_MultithreadingBlueprintLibrary_generated_h

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_12_DELEGATE \
BP_MULTITHREADING_API void FFunctionThreadLogic_DelegateWrapper(const FScriptDelegate& FunctionThreadLogic);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_14_DELEGATE \
BP_MULTITHREADING_API void FParallelForLogic_DelegateWrapper(const FScriptDelegate& ParallelForLogic, int32 Index);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRun_ParallelFor); \
	DECLARE_FUNCTION(execRunTask_OnGameThread); \
	DECLARE_FUNCTION(execRunTask_OnBackgroundThread); \
	DECLARE_FUNCTION(execEnableActorMultiThreadTick); \
	DECLARE_FUNCTION(execGetThread); \
	DECLARE_FUNCTION(execSleepThread);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultithreadingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMultithreadingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMultithreadingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UMultithreadingBlueprintLibrary)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultithreadingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultithreadingBlueprintLibrary(UMultithreadingBlueprintLibrary&&); \
	UMultithreadingBlueprintLibrary(const UMultithreadingBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultithreadingBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultithreadingBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultithreadingBlueprintLibrary) \
	NO_API virtual ~UMultithreadingBlueprintLibrary();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_39_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UMultithreadingBlueprintLibrary>();

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_64_DELEGATE \
BP_MULTITHREADING_API void FThreadLogic_DelegateWrapper(const FMulticastScriptDelegate& ThreadLogic);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execThreaded_Logic);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncThread(); \
	friend struct Z_Construct_UClass_UAsyncThread_Statics; \
public: \
	DECLARE_CLASS(UAsyncThread, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UAsyncThread)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncThread(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncThread(UAsyncThread&&); \
	UAsyncThread(const UAsyncThread&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncThread); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncThread); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncThread) \
	NO_API virtual ~UAsyncThread();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_66_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UAsyncThread>();

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGameThread_Logic);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncGameThread(); \
	friend struct Z_Construct_UClass_UAsyncGameThread_Statics; \
public: \
	DECLARE_CLASS(UAsyncGameThread, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UAsyncGameThread)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncGameThread(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncGameThread(UAsyncGameThread&&); \
	UAsyncGameThread(const UAsyncGameThread&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncGameThread); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncGameThread); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncGameThread) \
	NO_API virtual ~UAsyncGameThread();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_89_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UAsyncGameThread>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_MultithreadingBlueprintLibrary_h


#define FOREACH_ENUM_EPARALLELFLAGS(op) \
	op(None) \
	op(ForceSingleThread) \
	op(Unbalanced) \
	op(PumpRenderingThread) \
	op(BackgroundPriority) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
