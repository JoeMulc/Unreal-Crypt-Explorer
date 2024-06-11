// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptExplorer/CryptExplorerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptExplorerGameMode() {}
// Cross Module References
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_ACryptExplorerGameMode();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_ACryptExplorerGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CryptExplorer();
// End Cross Module References
	void ACryptExplorerGameMode::StaticRegisterNativesACryptExplorerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptExplorerGameMode);
	UClass* Z_Construct_UClass_ACryptExplorerGameMode_NoRegister()
	{
		return ACryptExplorerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACryptExplorerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptExplorerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptExplorer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptExplorerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CryptExplorerGameMode.h" },
		{ "ModuleRelativePath", "CryptExplorerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptExplorerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptExplorerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptExplorerGameMode_Statics::ClassParams = {
		&ACryptExplorerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACryptExplorerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptExplorerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACryptExplorerGameMode()
	{
		if (!Z_Registration_Info_UClass_ACryptExplorerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptExplorerGameMode.OuterSingleton, Z_Construct_UClass_ACryptExplorerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptExplorerGameMode.OuterSingleton;
	}
	template<> CRYPTEXPLORER_API UClass* StaticClass<ACryptExplorerGameMode>()
	{
		return ACryptExplorerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptExplorerGameMode);
	ACryptExplorerGameMode::~ACryptExplorerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptExplorerGameMode, ACryptExplorerGameMode::StaticClass, TEXT("ACryptExplorerGameMode"), &Z_Registration_Info_UClass_ACryptExplorerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptExplorerGameMode), 1938673530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerGameMode_h_245461919(TEXT("/Script/CryptExplorer"),
		Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
