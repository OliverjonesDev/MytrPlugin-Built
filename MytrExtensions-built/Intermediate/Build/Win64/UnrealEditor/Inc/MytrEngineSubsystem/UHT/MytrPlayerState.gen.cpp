// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MytrSubsystem/Private/MytrPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMytrPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPlayerState();
MYTRENGINESUBSYSTEM_API UClass* Z_Construct_UClass_AMytrPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_MytrEngineSubsystem();
// End Cross Module References

// Begin Class AMytrPlayerState
void AMytrPlayerState::StaticRegisterNativesAMytrPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMytrPlayerState);
UClass* Z_Construct_UClass_AMytrPlayerState_NoRegister()
{
	return AMytrPlayerState::StaticClass();
}
struct Z_Construct_UClass_AMytrPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MytrPlayerState.h" },
		{ "ModuleRelativePath", "Private/MytrPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMytrPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMytrPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_MytrEngineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMytrPlayerState_Statics::ClassParams = {
	&AMytrPlayerState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMytrPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMytrPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMytrPlayerState()
{
	if (!Z_Registration_Info_UClass_AMytrPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMytrPlayerState.OuterSingleton, Z_Construct_UClass_AMytrPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMytrPlayerState.OuterSingleton;
}
template<> MYTRENGINESUBSYSTEM_API UClass* StaticClass<AMytrPlayerState>()
{
	return AMytrPlayerState::StaticClass();
}
AMytrPlayerState::AMytrPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMytrPlayerState);
AMytrPlayerState::~AMytrPlayerState() {}
// End Class AMytrPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMytrPlayerState, AMytrPlayerState::StaticClass, TEXT("AMytrPlayerState"), &Z_Registration_Info_UClass_AMytrPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMytrPlayerState), 905044711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerState_h_970026931(TEXT("/Script/MytrEngineSubsystem"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Packaged_Plugins_MytrExtensions_MytrExtensions_HostProject_Plugins_MytrExtensions_Source_MytrSubsystem_Private_MytrPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
