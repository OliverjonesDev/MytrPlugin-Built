// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrGamestateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrGamestateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrGamestateBase();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrGamestateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrGamestateBase
void AMytrGamestateBase::StaticRegisterNativesAMytrGamestateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrGamestateBase);
UClass* Z_Construct_UClass_AMytrGamestateBase_NoRegister()
{
	return AMytrGamestateBase::StaticClass();
}
struct Z_Construct_UClass_AMytrGamestateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MytrGamestateBase.h" },
		{ "ModuleRelativePath", "Private/MytrGamestateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrGamestateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrGamestateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrGamestateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrGamestateBase_Statics::ClassParams = {
	&AMytrGamestateBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrGamestateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrGamestateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrGamestateBase()
{
	if (!Z_Registration_Info_UClass_AMytrGamestateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrGamestateBase.OuterSingleton, Z_Construct_UClass_AMytrGamestateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrGamestateBase.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrGamestateBase>()
{
	return AMytrGamestateBase::StaticClass();
}
AMytrGamestateBase::AMytrGamestateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrGamestateBase);
AMytrGamestateBase::~AMytrGamestateBase() {}
// End Class AMytrGamestateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGamestateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrGamestateBase, AMytrGamestateBase::StaticClass, TEXT("AMytrGamestateBase"), &Z_Registration_Info_UClass_AMytrGamestateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrGamestateBase), 3177972561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGamestateBase_h_480933236(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGamestateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrGamestateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
