// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrCharacterBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrCharacterBase
void AMytrCharacterBase::StaticRegisterNativesAMytrCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrCharacterBase);
UClass* Z_Construct_UClass_AMytrCharacterBase_NoRegister()
{
	return AMytrCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AMytrCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MytrCharacterBase.h" },
		{ "ModuleRelativePath", "Private/MytrCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrCharacterBase_Statics::ClassParams = {
	&AMytrCharacterBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrCharacterBase()
{
	if (!Z_Registration_Info_UClass_AMytrCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrCharacterBase.OuterSingleton, Z_Construct_UClass_AMytrCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrCharacterBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrCharacterBase>()
{
	return AMytrCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrCharacterBase);
AMytrCharacterBase::~AMytrCharacterBase() {}
// End Class AMytrCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrCharacterBase, AMytrCharacterBase::StaticClass, TEXT("AMytrCharacterBase"), &Z_Registration_Info_UClass_AMytrCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrCharacterBase), 4227406116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrCharacterBase_h_768482661(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_built_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
