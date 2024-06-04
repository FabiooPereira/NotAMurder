// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotAMurder/NotAMurderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotAMurderGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NOTAMURDER_API UClass* Z_Construct_UClass_ANotAMurderGameMode();
NOTAMURDER_API UClass* Z_Construct_UClass_ANotAMurderGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NotAMurder();
// End Cross Module References

// Begin Class ANotAMurderGameMode
void ANotAMurderGameMode::StaticRegisterNativesANotAMurderGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANotAMurderGameMode);
UClass* Z_Construct_UClass_ANotAMurderGameMode_NoRegister()
{
	return ANotAMurderGameMode::StaticClass();
}
struct Z_Construct_UClass_ANotAMurderGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NotAMurderGameMode.h" },
		{ "ModuleRelativePath", "NotAMurderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotAMurderGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANotAMurderGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NotAMurder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANotAMurderGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANotAMurderGameMode_Statics::ClassParams = {
	&ANotAMurderGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANotAMurderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANotAMurderGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANotAMurderGameMode()
{
	if (!Z_Registration_Info_UClass_ANotAMurderGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANotAMurderGameMode.OuterSingleton, Z_Construct_UClass_ANotAMurderGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANotAMurderGameMode.OuterSingleton;
}
template<> NOTAMURDER_API UClass* StaticClass<ANotAMurderGameMode>()
{
	return ANotAMurderGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANotAMurderGameMode);
ANotAMurderGameMode::~ANotAMurderGameMode() {}
// End Class ANotAMurderGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_NotAMurder_Source_NotAMurder_NotAMurderGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANotAMurderGameMode, ANotAMurderGameMode::StaticClass, TEXT("ANotAMurderGameMode"), &Z_Registration_Info_UClass_ANotAMurderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANotAMurderGameMode), 2543364642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_NotAMurder_Source_NotAMurder_NotAMurderGameMode_h_1830284614(TEXT("/Script/NotAMurder"),
	Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_NotAMurder_Source_NotAMurder_NotAMurderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_NotAMurder_Source_NotAMurder_NotAMurderGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
