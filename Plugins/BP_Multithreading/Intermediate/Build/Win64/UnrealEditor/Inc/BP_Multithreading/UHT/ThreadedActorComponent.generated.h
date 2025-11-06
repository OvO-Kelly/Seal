// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThreadedActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BP_MULTITHREADING_ThreadedActorComponent_generated_h
#error "ThreadedActorComponent.generated.h already included, missing '#pragma once' in ThreadedActorComponent.h"
#endif
#define BP_MULTITHREADING_ThreadedActorComponent_generated_h

#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_17_DELEGATE \
BP_MULTITHREADING_API void FOnAnotherThreadTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnotherThreadTickDelegate);


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThreadedActorComponent(); \
	friend struct Z_Construct_UClass_UThreadedActorComponent_Statics; \
public: \
	DECLARE_CLASS(UThreadedActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BP_Multithreading"), NO_API) \
	DECLARE_SERIALIZER(UThreadedActorComponent)


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UThreadedActorComponent(UThreadedActorComponent&&); \
	UThreadedActorComponent(const UThreadedActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreadedActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreadedActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThreadedActorComponent) \
	NO_API virtual ~UThreadedActorComponent();


#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_19_PROLOG
#define FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_MULTITHREADING_API UClass* StaticClass<class UThreadedActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_BP_Multithreading_HostProject_Plugins_BP_Multithreading_Source_BP_Multithreading_Public_ThreadedActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
