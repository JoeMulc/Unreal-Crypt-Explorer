// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptExplorer/NewBoxComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewBoxComponent() {}
// Cross Module References
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UNewBoxComponent();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UNewBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptExplorer();
// End Cross Module References
	void UNewBoxComponent::StaticRegisterNativesUNewBoxComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewBoxComponent);
	UClass* Z_Construct_UClass_UNewBoxComponent_NoRegister()
	{
		return UNewBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNewBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptExplorer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "NewBoxComponent.h" },
		{ "ModuleRelativePath", "NewBoxComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewBoxComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewBoxComponent_Statics::ClassParams = {
		&UNewBoxComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNewBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewBoxComponent()
	{
		if (!Z_Registration_Info_UClass_UNewBoxComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewBoxComponent.OuterSingleton, Z_Construct_UClass_UNewBoxComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewBoxComponent.OuterSingleton;
	}
	template<> CRYPTEXPLORER_API UClass* StaticClass<UNewBoxComponent>()
	{
		return UNewBoxComponent::StaticClass();
	}
	UNewBoxComponent::UNewBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewBoxComponent);
	UNewBoxComponent::~UNewBoxComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_NewBoxComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_NewBoxComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewBoxComponent, UNewBoxComponent::StaticClass, TEXT("UNewBoxComponent"), &Z_Registration_Info_UClass_UNewBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewBoxComponent), 1165561131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_NewBoxComponent_h_1590836385(TEXT("/Script/CryptExplorer"),
		Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_NewBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_NewBoxComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
