// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrControllerBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrControllerBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrControllerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrControllerBase
void AMytrControllerBase::StaticRegisterNativesAMytrControllerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrControllerBase);
UClass* Z_Construct_UClass_AMytrControllerBase_NoRegister()
{
	return AMytrControllerBase::StaticClass();
}
struct Z_Construct_UClass_AMytrControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MytrControllerBase.h" },
		{ "ModuleRelativePath", "Private/MytrControllerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AController,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrControllerBase_Statics::ClassParams = {
	&AMytrControllerBase::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrControllerBase()
{
	if (!Z_Registration_Info_UClass_AMytrControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrControllerBase.OuterSingleton, Z_Construct_UClass_AMytrControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrControllerBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrControllerBase>()
{
	return AMytrControllerBase::StaticClass();
}
AMytrControllerBase::AMytrControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrControllerBase);
AMytrControllerBase::~AMytrControllerBase() {}
// End Class AMytrControllerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrControllerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrControllerBase, AMytrControllerBase::StaticClass, TEXT("AMytrControllerBase"), &Z_Registration_Info_UClass_AMytrControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrControllerBase), 2481044477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrControllerBase_h_3722840092(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrControllerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
