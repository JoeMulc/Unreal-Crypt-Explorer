// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptExplorer/PuzzleMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleMaster() {}
// Cross Module References
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UPuzzleMaster();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UPuzzleMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CryptExplorer();
// End Cross Module References
	void UPuzzleMaster::StaticRegisterNativesUPuzzleMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzleMaster);
	UClass* Z_Construct_UClass_UPuzzleMaster_NoRegister()
	{
		return UPuzzleMaster::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_solvedPieces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solvedPieces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_solvedPieces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptExplorer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleMaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PuzzleMaster.h" },
		{ "ModuleRelativePath", "PuzzleMaster.h" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces_Inner = { "solvedPieces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces_MetaData[] = {
		{ "Category", "PuzzleMaster" },
		{ "ModuleRelativePath", "PuzzleMaster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces = { "solvedPieces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPuzzleMaster, solvedPieces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleMaster_Statics::NewProp_solvedPieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleMaster_Statics::ClassParams = {
		&UPuzzleMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPuzzleMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleMaster_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleMaster()
	{
		if (!Z_Registration_Info_UClass_UPuzzleMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuzzleMaster.OuterSingleton, Z_Construct_UClass_UPuzzleMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPuzzleMaster.OuterSingleton;
	}
	template<> CRYPTEXPLORER_API UClass* StaticClass<UPuzzleMaster>()
	{
		return UPuzzleMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleMaster);
	UPuzzleMaster::~UPuzzleMaster() {}
	struct Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_PuzzleMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_PuzzleMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPuzzleMaster, UPuzzleMaster::StaticClass, TEXT("UPuzzleMaster"), &Z_Registration_Info_UClass_UPuzzleMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzleMaster), 1316949774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_PuzzleMaster_h_424094071(TEXT("/Script/CryptExplorer"),
		Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_PuzzleMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_PuzzleMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
