// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomicContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProperty;
#ifdef BP_MULTITHREADING_AtomicContainer_generated_h
#error "AtomicContainer.generated.h already included, missing '#pragma once' in AtomicContainer.h"
#endif
#define BP_MULTITHREADING_AtomicContainer_generated_h

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveQueue); \
	DECLARE_FUNCTION(execGetQueue); \
	DECLARE_FUNCTION(execAddQueue); \
	DECLARE_FUNCTION(execRemoveAtomic); \
	DECLARE_FUNCTION(execGetAtomicAndRemove); \
	DECLARE_FUNCTION(execGetAtomic); \
	DECLARE_FUNCTION(execSetAtomic);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomicContainer(); \
	friend struct Z_Construct_UClass_UAtomicContainer_Statics; \
public: \
	DECLARE_CLASS(UAtomicContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UAtomicContainer)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomicContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomicContainer(UAtomicContainer&&); \
	UAtomicContainer(const UAtomicContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomicContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomicContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomicContainer) \
	NO_API virtual ~UAtomicContainer();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_12_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UAtomicContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_AtomicContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
