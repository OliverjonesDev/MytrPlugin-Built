// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrPawnBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrPawnBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPawnBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPawnBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrPawnBase
void AMytrPawnBase::StaticRegisterNativesAMytrPawnBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrPawnBase);
UClass* Z_Construct_UClass_AMytrPawnBase_NoRegister()
{
	return AMytrPawnBase::StaticClass();
}
struct Z_Construct_UClass_AMytrPawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MytrPawnBase.h" },
		{ "ModuleRelativePath", "Private/MytrPawnBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrPawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrPawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrPawnBase_Statics::ClassParams = {
	&AMytrPawnBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrPawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrPawnBase()
{
	if (!Z_Registration_Info_UClass_AMytrPawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrPawnBase.OuterSingleton, Z_Construct_UClass_AMytrPawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrPawnBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrPawnBase>()
{
	return AMytrPawnBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrPawnBase);
AMytrPawnBase::~AMytrPawnBase() {}
// End Class AMytrPawnBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPawnBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrPawnBase, AMytrPawnBase::StaticClass, TEXT("AMytrPawnBase"), &Z_Registration_Info_UClass_AMytrPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrPawnBase), 471979458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPawnBase_h_4130427005(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPawnBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
