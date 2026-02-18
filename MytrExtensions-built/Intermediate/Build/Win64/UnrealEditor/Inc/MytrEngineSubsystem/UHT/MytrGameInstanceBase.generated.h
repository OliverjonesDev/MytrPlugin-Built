// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MytrGameInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTRENGINESUBSYSTEM_MytrGameInstanceBase_generated_h
#error "MytrGameInstanceBase.generated.h already included, missing '#pragma once' in MytrGameInstanceBase.h"
#endif
#define MYTRENGINESUBSYSTEM_MytrGameInstanceBase_generated_h

#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AuthenticationStarted_Implementation(); \
	virtual void AuthenticationSuccess_Implementation(); \
	virtual void AuthenticationFailure_Implementation(const FString& ErrorMessage); \
	DECLARE_FUNCTION(execAuthenticationStarted); \
	DECLARE_FUNCTION(execAuthenticationSuccess); \
	DECLARE_FUNCTION(execAuthenticationFailure);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_CALLBACK_WRAPPERS
#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMytrGameInstanceBase(); \
	friend struct Z_Construct_UClass_UMytrGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UMytrGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MytrEngineSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UMytrGameInstanceBase)


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMytrGameInstanceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMytrGameInstanceBase(UMytrGameInstanceBase&&); \
	UMytrGameInstanceBase(const UMytrGameInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMytrGameInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMytrGameInstanceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMytrGameInstanceBase) \
	NO_API virtual ~UMytrGameInstanceBase();


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_12_PROLOG
#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_CALLBACK_WRAPPERS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<class UMytrGameInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
