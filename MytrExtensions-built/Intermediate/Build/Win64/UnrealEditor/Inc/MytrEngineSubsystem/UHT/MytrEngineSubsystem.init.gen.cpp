// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrEngineSubsystem_init() {}
	MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature();
	MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature();
	MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature();
	MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature();
	MYTRENGINESUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MytrEngineSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MytrEngineSubsystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMytrEngine_OnAuthenticationSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMytrEngine_OnSupabaseUploadSuccess__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MytrEngineSubsystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9C73AB1F,
				0x0767152E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MytrEngineSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MytrEngineSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MytrEngineSubsystem(Z_Construct_UPackage__Script_MytrEngineSubsystem, TEXT("/Script/MytrEngineSubsystem"), Z_Registration_Info_UPackage__Script_MytrEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C73AB1F, 0x0767152E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
