// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrGameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrGameInstanceBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrGameInstanceBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_UMytrGameInstanceBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class UMytrGameInstanceBase Function AuthenticationFailure
struct MytrGameInstanceBase_eventAuthenticationFailure_Parms
{
	FString ErrorMessage;
};
static const FName NAME_UMytrGameInstanceBase_AuthenticationFailure = FName(TEXT("AuthenticationFailure"));
void UMytrGameInstanceBase::AuthenticationFailure(const FString& ErrorMessage)
{
	UFunction* Func = FindFunctionChecked(NAME_UMytrGameInstanceBase_AuthenticationFailure);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MytrGameInstanceBase_eventAuthenticationFailure_Parms Parms;
		Parms.ErrorMessage=ErrorMessage;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AuthenticationFailure_Implementation(ErrorMessage);
	}
}
struct Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrGameInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MytrGameInstanceBase_eventAuthenticationFailure_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrGameInstanceBase, nullptr, "AuthenticationFailure", nullptr, nullptr, Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::PropPointers), sizeof(MytrGameInstanceBase_eventAuthenticationFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(MytrGameInstanceBase_eventAuthenticationFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrGameInstanceBase::execAuthenticationFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticationFailure_Implementation(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// End Class UMytrGameInstanceBase Function AuthenticationFailure

// Begin Class UMytrGameInstanceBase Function AuthenticationStarted
static const FName NAME_UMytrGameInstanceBase_AuthenticationStarted = FName(TEXT("AuthenticationStarted"));
void UMytrGameInstanceBase::AuthenticationStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_UMytrGameInstanceBase_AuthenticationStarted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		AuthenticationStarted_Implementation();
	}
}
struct Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrGameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrGameInstanceBase, nullptr, "AuthenticationStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrGameInstanceBase::execAuthenticationStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticationStarted_Implementation();
	P_NATIVE_END;
}
// End Class UMytrGameInstanceBase Function AuthenticationStarted

// Begin Class UMytrGameInstanceBase Function AuthenticationSuccess
static const FName NAME_UMytrGameInstanceBase_AuthenticationSuccess = FName(TEXT("AuthenticationSuccess"));
void UMytrGameInstanceBase::AuthenticationSuccess()
{
	UFunction* Func = FindFunctionChecked(NAME_UMytrGameInstanceBase_AuthenticationSuccess);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		AuthenticationSuccess_Implementation();
	}
}
struct Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MytrGameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMytrGameInstanceBase, nullptr, "AuthenticationSuccess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMytrGameInstanceBase::execAuthenticationSuccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AuthenticationSuccess_Implementation();
	P_NATIVE_END;
}
// End Class UMytrGameInstanceBase Function AuthenticationSuccess

// Begin Class UMytrGameInstanceBase
void UMytrGameInstanceBase::StaticRegisterNativesUMytrGameInstanceBase()
{
	UClass* Class = UMytrGameInstanceBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AuthenticationFailure", &UMytrGameInstanceBase::execAuthenticationFailure },
		{ "AuthenticationStarted", &UMytrGameInstanceBase::execAuthenticationStarted },
		{ "AuthenticationSuccess", &UMytrGameInstanceBase::execAuthenticationSuccess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMytrGameInstanceBase);
UClass* Z_Construct_UClass_UMytrGameInstanceBase_NoRegister()
{
	return UMytrGameInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UMytrGameInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MytrGameInstanceBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/MytrGameInstanceBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationFailure, "AuthenticationFailure" }, // 148190575
		{ &Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationStarted, "AuthenticationStarted" }, // 3041045269
		{ &Z_Construct_UFunction_UMytrGameInstanceBase_AuthenticationSuccess, "AuthenticationSuccess" }, // 63241002
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMytrGameInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMytrGameInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrGameInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMytrGameInstanceBase_Statics::ClassParams = {
	&UMytrGameInstanceBase::StaticClass,
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
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMytrGameInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMytrGameInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMytrGameInstanceBase()
{
	if (!Z_Registration_Info_UClass_UMytrGameInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMytrGameInstanceBase.OuterSingleton, Z_Construct_UClass_UMytrGameInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMytrGameInstanceBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<UMytrGameInstanceBase>()
{
	return UMytrGameInstanceBase::StaticClass();
}
UMytrGameInstanceBase::UMytrGameInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMytrGameInstanceBase);
UMytrGameInstanceBase::~UMytrGameInstanceBase() {}
// End Class UMytrGameInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMytrGameInstanceBase, UMytrGameInstanceBase::StaticClass, TEXT("UMytrGameInstanceBase"), &Z_Registration_Info_UClass_UMytrGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMytrGameInstanceBase), 2109318388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_3811402868(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGameInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
