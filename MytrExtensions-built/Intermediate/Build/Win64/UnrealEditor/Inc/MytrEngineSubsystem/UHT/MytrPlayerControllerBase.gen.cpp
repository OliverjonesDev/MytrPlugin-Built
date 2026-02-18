// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrPlayerControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrPlayerControllerBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPlayerControllerBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPlayerControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrPlayerControllerBase
void AMytrPlayerControllerBase::StaticRegisterNativesAMytrPlayerControllerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrPlayerControllerBase);
UClass* Z_Construct_UClass_AMytrPlayerControllerBase_NoRegister()
{
	return AMytrPlayerControllerBase::StaticClass();
}
struct Z_Construct_UClass_AMytrPlayerControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MytrPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Private/MytrPlayerControllerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrPlayerControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrPlayerControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPlayerControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrPlayerControllerBase_Statics::ClassParams = {
	&AMytrPlayerControllerBase::StaticClass,
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
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPlayerControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrPlayerControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrPlayerControllerBase()
{
	if (!Z_Registration_Info_UClass_AMytrPlayerControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrPlayerControllerBase.OuterSingleton, Z_Construct_UClass_AMytrPlayerControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrPlayerControllerBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrPlayerControllerBase>()
{
	return AMytrPlayerControllerBase::StaticClass();
}
AMytrPlayerControllerBase::AMytrPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrPlayerControllerBase);
AMytrPlayerControllerBase::~AMytrPlayerControllerBase() {}
// End Class AMytrPlayerControllerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerControllerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrPlayerControllerBase, AMytrPlayerControllerBase::StaticClass, TEXT("AMytrPlayerControllerBase"), &Z_Registration_Info_UClass_AMytrPlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrPlayerControllerBase), 133692460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerControllerBase_h_4048494029(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerControllerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
