// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MytrEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTRENGINESUBSYSTEM_MytrEngine_generated_h
#error "MytrEngine.generated.h already included, missing '#pragma once' in MytrEngine.h"
#endif
#define MYTRENGINESUBSYSTEM_MytrEngine_generated_h

#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_22_DELEGATE \
static void FOnSupabaseUploadSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseUploadSuccess, const FString& FilePath);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_23_DELEGATE \
static void FOnSupabaseUploadError_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseUploadError, const FString& ErrorMessage);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_24_DELEGATE \
static void FOnAuthenticationFailure_DelegateWrapper(const FScriptDelegate& OnAuthenticationFailure, const FString& ErrorMessage);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_25_DELEGATE \
static void FOnAuthenticationSuccess_DelegateWrapper(const FScriptDelegate& OnAuthenticationSuccess);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_26_DELEGATE \
static void FOnAuthenticationStarted_DelegateWrapper(const FScriptDelegate& OnAuthenticationStarted);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAuthenticateClient); \
	DECLARE_FUNCTION(execBuildPDF); \
	DECLARE_FUNCTION(execOutToURL); \
	DECLARE_FUNCTION(execUploadDataToBackend); \
	DECLARE_FUNCTION(execTakeScreenshotAndUpload); \
	DECLARE_FUNCTION(execGetClientID); \
	DECLARE_FUNCTION(execGetSubsystemGUID); \
	DECLARE_FUNCTION(execStartNewSession);


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMytrEngine(); \
	friend struct Z_Construct_UClass_UMytrEngine_Statics; \
public: \
	DECLARE_CLASS(UMytrEngine, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MytrEngineSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UMytrEngine)


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMytrEngine(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMytrEngine(UMytrEngine&&); \
	UMytrEngine(const UMytrEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMytrEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMytrEngine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMytrEngine) \
	NO_API virtual ~UMytrEngine();


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_15_PROLOG
#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<class UMytrEngine>();

#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMytrProjectSettings(); \
	friend struct Z_Construct_UClass_UMytrProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMytrProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MytrEngineSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UMytrProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMytrProjectSettings(UMytrProjectSettings&&); \
	UMytrProjectSettings(const UMytrProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMytrProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMytrProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMytrProjectSettings) \
	NO_API virtual ~UMytrProjectSettings();


#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_99_PROLOG
#define FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_103_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_103_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<class UMytrProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
