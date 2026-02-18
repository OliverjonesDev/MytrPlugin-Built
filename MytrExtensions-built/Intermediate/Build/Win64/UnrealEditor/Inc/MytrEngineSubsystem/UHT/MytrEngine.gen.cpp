// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrEngine.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrEngine() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrEngine();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrEngine_NoRegister();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrProjectSettings();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrProjectSettings_NoRegister();
MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature();
MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature();
MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature();
MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature();
MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Delegate FOnSupabaseUploadSuccess
struct Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics
{
	struct MytrEngine_eventOnSupabaseUploadSuccess_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventOnSupabaseUploadSuccess_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OnSupabaseUploadSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::MytrEngine_eventOnSupabaseUploadSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::MytrEngine_eventOnSupabaseUploadSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMytrEngine::FOnSupabaseUploadSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseUploadSuccess, const FString& FilePath)
{
	struct MytrEngine_eventOnSupabaseUploadSuccess_Parms
	{
		FString FilePath;
	};
	MytrEngine_eventOnSupabaseUploadSuccess_Parms Parms;
	Parms.FilePath=FilePath;
	OnSupabaseUploadSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSupabaseUploadSuccess

// Begin Delegate FOnSupabaseUploadError
struct Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics
{
	struct MytrEngine_eventOnSupabaseUploadError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventOnSupabaseUploadError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OnSupabaseUploadError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::MytrEngine_eventOnSupabaseUploadError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::MytrEngine_eventOnSupabaseUploadError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMytrEngine::FOnSupabaseUploadError_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseUploadError, const FString& ErrorMessage)
{
	struct MytrEngine_eventOnSupabaseUploadError_Parms
	{
		FString ErrorMessage;
	};
	MytrEngine_eventOnSupabaseUploadError_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnSupabaseUploadError.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSupabaseUploadError

// Begin Delegate FOnAuthenticationFailure
struct Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics
{
	struct MytrEngine_eventOnAuthenticationFailure_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventOnAuthenticationFailure_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OnAuthenticationFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::MytrEngine_eventOnAuthenticationFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::MytrEngine_eventOnAuthenticationFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMytrEngine::FOnAuthenticationFailure_DelegateWrapper(const FScriptDelegate& OnAuthenticationFailure, const FString& ErrorMessage)
{
	struct MytrEngine_eventOnAuthenticationFailure_Parms
	{
		FString ErrorMessage;
	};
	MytrEngine_eventOnAuthenticationFailure_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnAuthenticationFailure.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAuthenticationFailure

// Begin Delegate FOnAuthenticationSuccess
struct Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OnAuthenticationSuccess__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMytrEngine::FOnAuthenticationSuccess_DelegateWrapper(const FScriptDelegate& OnAuthenticationSuccess)
{
	OnAuthenticationSuccess.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnAuthenticationSuccess

// Begin Delegate FOnAuthenticationStarted
struct Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OnAuthenticationStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMytrEngine::FOnAuthenticationStarted_DelegateWrapper(const FScriptDelegate& OnAuthenticationStarted)
{
	OnAuthenticationStarted.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnAuthenticationStarted

// Begin Class UMytrEngine Function AuthenticateClient
struct Z_Construct_UFunction_UMytrEngine_AuthenticateClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_AuthenticateClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "AuthenticateClient", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_AuthenticateClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_AuthenticateClient_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrEngine_AuthenticateClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_AuthenticateClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execAuthenticateClient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticateClient();
	P_NATIVE_END;
}
// End Class UMytrEngine Function AuthenticateClient

// Begin Class UMytrEngine Function BuildPDF
struct Z_Construct_UFunction_UMytrEngine_BuildPDF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_BuildPDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "BuildPDF", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_BuildPDF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_BuildPDF_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrEngine_BuildPDF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_BuildPDF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execBuildPDF)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildPDF();
	P_NATIVE_END;
}
// End Class UMytrEngine Function BuildPDF

// Begin Class UMytrEngine Function GetClientID
struct Z_Construct_UFunction_UMytrEngine_GetClientID_Statics
{
	struct MytrEngine_eventGetClientID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Engine Functions" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventGetClientID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "GetClientID", nullptr, nullptr, Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::MytrEngine_eventGetClientID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::MytrEngine_eventGetClientID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMytrEngine_GetClientID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_GetClientID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execGetClientID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetClientID();
	P_NATIVE_END;
}
// End Class UMytrEngine Function GetClientID

// Begin Class UMytrEngine Function GetSubsystemGUID
struct Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics
{
	struct MytrEngine_eventGetSubsystemGUID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Engine Functions" },
		{ "Comment", "// This gets the current initilised session ID for the Subsystem. \n" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
		{ "ToolTip", "This gets the current initilised session ID for the Subsystem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventGetSubsystemGUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "GetSubsystemGUID", nullptr, nullptr, Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::MytrEngine_eventGetSubsystemGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::MytrEngine_eventGetSubsystemGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execGetSubsystemGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSubsystemGUID();
	P_NATIVE_END;
}
// End Class UMytrEngine Function GetSubsystemGUID

// Begin Class UMytrEngine Function OutToURL
struct Z_Construct_UFunction_UMytrEngine_OutToURL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_OutToURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "OutToURL", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_OutToURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_OutToURL_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrEngine_OutToURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_OutToURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execOutToURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OutToURL();
	P_NATIVE_END;
}
// End Class UMytrEngine Function OutToURL

// Begin Class UMytrEngine Function StartNewSession
struct Z_Construct_UFunction_UMytrEngine_StartNewSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Engine Functions" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_StartNewSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "StartNewSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_StartNewSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_StartNewSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrEngine_StartNewSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_StartNewSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execStartNewSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNewSession();
	P_NATIVE_END;
}
// End Class UMytrEngine Function StartNewSession

// Begin Class UMytrEngine Function TakeScreenshotAndUpload
struct Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Supabase" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "TakeScreenshotAndUpload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execTakeScreenshotAndUpload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeScreenshotAndUpload();
	P_NATIVE_END;
}
// End Class UMytrEngine Function TakeScreenshotAndUpload

// Begin Class UMytrEngine Function UploadDataToBackend
struct Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics
{
	struct MytrEngine_eventUploadDataToBackend_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Supabase" },
		{ "Comment", "/* POINTS TO AN EDGE FUNCTION INSIDE SUPABASE WHICH DETERMINES WHAT TO DO WITH FILE DATA */" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
		{ "ToolTip", "POINTS TO AN EDGE FUNCTION INSIDE SUPABASE WHICH DETERMINES WHAT TO DO WITH FILE DATA" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrEngine_eventUploadDataToBackend_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrEngine, nullptr, "UploadDataToBackend", nullptr, nullptr, Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::MytrEngine_eventUploadDataToBackend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::MytrEngine_eventUploadDataToBackend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMytrEngine_UploadDataToBackend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrEngine_UploadDataToBackend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrEngine::execUploadDataToBackend)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UploadDataToBackend(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UMytrEngine Function UploadDataToBackend

// Begin Class UMytrEngine
void UMytrEngine::StaticRegisterNativesUMytrEngine()
{
	UClass* Class = UMytrEngine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AuthenticateClient", &UMytrEngine::execAuthenticateClient },
		{ "BuildPDF", &UMytrEngine::execBuildPDF },
		{ "GetClientID", &UMytrEngine::execGetClientID },
		{ "GetSubsystemGUID", &UMytrEngine::execGetSubsystemGUID },
		{ "OutToURL", &UMytrEngine::execOutToURL },
		{ "StartNewSession", &UMytrEngine::execStartNewSession },
		{ "TakeScreenshotAndUpload", &UMytrEngine::execTakeScreenshotAndUpload },
		{ "UploadDataToBackend", &UMytrEngine::execUploadDataToBackend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMytrEngine);
UClass* Z_Construct_UClass_UMytrEngine_NoRegister()
{
	return UMytrEngine::StaticClass();
}
struct Z_Construct_UClass_UMytrEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MytrEngine.h" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUploadSuccess_MetaData[] = {
		{ "Category", "Supabase|Delegates" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUploadError_MetaData[] = {
		{ "Category", "Supabase|Delegates" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUploadSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUploadError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMytrEngine_AuthenticateClient, "AuthenticateClient" }, // 1304294784
		{ &Z_Construct_UFunction_UMytrEngine_BuildPDF, "BuildPDF" }, // 4155488010
		{ &Z_Construct_UFunction_UMytrEngine_GetClientID, "GetClientID" }, // 1527905210
		{ &Z_Construct_UFunction_UMytrEngine_GetSubsystemGUID, "GetSubsystemGUID" }, // 1091242280
		{ &Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature, "OnAuthenticationFailure__DelegateSignature" }, // 2846674991
		{ &Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature, "OnAuthenticationStarted__DelegateSignature" }, // 4282685871
		{ &Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature, "OnAuthenticationSuccess__DelegateSignature" }, // 3252150329
		{ &Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature, "OnSupabaseUploadError__DelegateSignature" }, // 1833051769
		{ &Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature, "OnSupabaseUploadSuccess__DelegateSignature" }, // 1275760950
		{ &Z_Construct_UFunction_UMytrEngine_OutToURL, "OutToURL" }, // 2952744988
		{ &Z_Construct_UFunction_UMytrEngine_StartNewSession, "StartNewSession" }, // 3904091605
		{ &Z_Construct_UFunction_UMytrEngine_TakeScreenshotAndUpload, "TakeScreenshotAndUpload" }, // 2107961596
		{ &Z_Construct_UFunction_UMytrEngine_UploadDataToBackend, "UploadDataToBackend" }, // 2190374027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMytrEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMytrEngine_Statics::NewProp_OnUploadSuccess = { "OnUploadSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMytrEngine, OnUploadSuccess), Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUploadSuccess_MetaData), NewProp_OnUploadSuccess_MetaData) }; // 1275760950
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMytrEngine_Statics::NewProp_OnUploadError = { "OnUploadError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMytrEngine, OnUploadError), Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUploadError_MetaData), NewProp_OnUploadError_MetaData) }; // 1833051769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMytrEngine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMytrEngine_Statics::NewProp_OnUploadSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMytrEngine_Statics::NewProp_OnUploadError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrEngine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMytrEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMytrEngine_Statics::ClassParams = {
	&UMytrEngine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMytrEngine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMytrEngine_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UMytrEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMytrEngine()
{
	if (!Z_Registration_Info_UClass_UMytrEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMytrEngine.OuterSingleton, Z_Construct_UClass_UMytrEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMytrEngine.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<UMytrEngine>()
{
	return UMytrEngine::StaticClass();
}
UMytrEngine::UMytrEngine() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMytrEngine);
UMytrEngine::~UMytrEngine() {}
// End Class UMytrEngine

// Begin Class UMytrProjectSettings
void UMytrProjectSettings::StaticRegisterNativesUMytrProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMytrProjectSettings);
UClass* Z_Construct_UClass_UMytrProjectSettings_NoRegister()
{
	return UMytrProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UMytrProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mytr Configuration" },
		{ "IncludePath", "MytrEngine.h" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MytrAPIKey_MetaData[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebsiteURL_MetaData[] = {
		{ "Category", "Mytr Functionality" },
		{ "ModuleRelativePath", "Private/MytrEngine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MytrAPIKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WebsiteURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMytrProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMytrProjectSettings, ProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectName_MetaData), NewProp_ProjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_MytrAPIKey = { "MytrAPIKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMytrProjectSettings, MytrAPIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MytrAPIKey_MetaData), NewProp_MytrAPIKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_WebsiteURL = { "WebsiteURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMytrProjectSettings, WebsiteURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebsiteURL_MetaData), NewProp_WebsiteURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMytrProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_ProjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_MytrAPIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMytrProjectSettings_Statics::NewProp_WebsiteURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMytrProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMytrProjectSettings_Statics::ClassParams = {
	&UMytrProjectSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMytrProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMytrProjectSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMytrProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMytrProjectSettings()
{
	if (!Z_Registration_Info_UClass_UMytrProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMytrProjectSettings.OuterSingleton, Z_Construct_UClass_UMytrProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMytrProjectSettings.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<UMytrProjectSettings>()
{
	return UMytrProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMytrProjectSettings);
UMytrProjectSettings::~UMytrProjectSettings() {}
// End Class UMytrProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMytrEngine, UMytrEngine::StaticClass, TEXT("UMytrEngine"), &Z_Registration_Info_UClass_UMytrEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMytrEngine), 1629279675U) },
		{ Z_Construct_UClass_UMytrProjectSettings, UMytrProjectSettings::StaticClass, TEXT("UMytrProjectSettings"), &Z_Registration_Info_UClass_UMytrProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMytrProjectSettings), 2682284780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_2549249830(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
