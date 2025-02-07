// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProjectWithGit/UnrealProjectWithGitGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealProjectWithGitGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALPROJECTWITHGIT_API UClass* Z_Construct_UClass_AUnrealProjectWithGitGameMode();
UNREALPROJECTWITHGIT_API UClass* Z_Construct_UClass_AUnrealProjectWithGitGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealProjectWithGit();
// End Cross Module References

// Begin Class AUnrealProjectWithGitGameMode
void AUnrealProjectWithGitGameMode::StaticRegisterNativesAUnrealProjectWithGitGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealProjectWithGitGameMode);
UClass* Z_Construct_UClass_AUnrealProjectWithGitGameMode_NoRegister()
{
	return AUnrealProjectWithGitGameMode::StaticClass();
}
struct Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealProjectWithGitGameMode.h" },
		{ "ModuleRelativePath", "UnrealProjectWithGitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealProjectWithGitGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealProjectWithGit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::ClassParams = {
	&AUnrealProjectWithGitGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnrealProjectWithGitGameMode()
{
	if (!Z_Registration_Info_UClass_AUnrealProjectWithGitGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealProjectWithGitGameMode.OuterSingleton, Z_Construct_UClass_AUnrealProjectWithGitGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnrealProjectWithGitGameMode.OuterSingleton;
}
template<> UNREALPROJECTWITHGIT_API UClass* StaticClass<AUnrealProjectWithGitGameMode>()
{
	return AUnrealProjectWithGitGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealProjectWithGitGameMode);
AUnrealProjectWithGitGameMode::~AUnrealProjectWithGitGameMode() {}
// End Class AUnrealProjectWithGitGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_UnrealProjectWithGit_UnrealProjectWithGit_Source_UnrealProjectWithGit_UnrealProjectWithGitGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealProjectWithGitGameMode, AUnrealProjectWithGitGameMode::StaticClass, TEXT("AUnrealProjectWithGitGameMode"), &Z_Registration_Info_UClass_AUnrealProjectWithGitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealProjectWithGitGameMode), 2821661953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_UnrealProjectWithGit_UnrealProjectWithGit_Source_UnrealProjectWithGit_UnrealProjectWithGitGameMode_h_1381102917(TEXT("/Script/UnrealProjectWithGit"),
	Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_UnrealProjectWithGit_UnrealProjectWithGit_Source_UnrealProjectWithGit_UnrealProjectWithGitGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_UnrealProjectWithGit_UnrealProjectWithGit_Source_UnrealProjectWithGit_UnrealProjectWithGitGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
