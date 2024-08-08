// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptExplorer/StatuePuzzleBoxComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatuePuzzleBoxComponent() {}
// Cross Module References
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_ACryptDoor_NoRegister();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UStatuePuzzleBoxComponent();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_UStatuePuzzleBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_CryptExplorer();
// End Cross Module References
	void UStatuePuzzleBoxComponent::StaticRegisterNativesUStatuePuzzleBoxComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatuePuzzleBoxComponent);
	UClass* Z_Construct_UClass_UStatuePuzzleBoxComponent_NoRegister()
	{
		return UStatuePuzzleBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_answerTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_answerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptExplorer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "StatuePuzzleBoxComponent.h" },
		{ "ModuleRelativePath", "StatuePuzzleBoxComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_answerTag_MetaData[] = {
		{ "Category", "StatuePuzzleBoxComponent" },
		{ "ModuleRelativePath", "StatuePuzzleBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_answerTag = { "answerTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStatuePuzzleBoxComponent, answerTag), METADATA_PARAMS(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_answerTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_answerTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_id_MetaData[] = {
		{ "Category", "StatuePuzzleBoxComponent" },
		{ "ModuleRelativePath", "StatuePuzzleBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStatuePuzzleBoxComponent, id), METADATA_PARAMS(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_DoorActor_MetaData[] = {
		{ "Category", "StatuePuzzleBoxComponent" },
		{ "ModuleRelativePath", "StatuePuzzleBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_DoorActor = { "DoorActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStatuePuzzleBoxComponent, DoorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_DoorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_DoorActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_doorRef_MetaData[] = {
		{ "Category", "StatuePuzzleBoxComponent" },
		{ "ModuleRelativePath", "StatuePuzzleBoxComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_doorRef = { "doorRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStatuePuzzleBoxComponent, doorRef), Z_Construct_UClass_ACryptDoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_doorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_doorRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_answerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_DoorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::NewProp_doorRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatuePuzzleBoxComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::ClassParams = {
		&UStatuePuzzleBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatuePuzzleBoxComponent()
	{
		if (!Z_Registration_Info_UClass_UStatuePuzzleBoxComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatuePuzzleBoxComponent.OuterSingleton, Z_Construct_UClass_UStatuePuzzleBoxComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatuePuzzleBoxComponent.OuterSingleton;
	}
	template<> CRYPTEXPLORER_API UClass* StaticClass<UStatuePuzzleBoxComponent>()
	{
		return UStatuePuzzleBoxComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatuePuzzleBoxComponent);
	UStatuePuzzleBoxComponent::~UStatuePuzzleBoxComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_StatuePuzzleBoxComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_StatuePuzzleBoxComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatuePuzzleBoxComponent, UStatuePuzzleBoxComponent::StaticClass, TEXT("UStatuePuzzleBoxComponent"), &Z_Registration_Info_UClass_UStatuePuzzleBoxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatuePuzzleBoxComponent), 2884096439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_StatuePuzzleBoxComponent_h_2036013367(TEXT("/Script/CryptExplorer"),
		Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_StatuePuzzleBoxComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_StatuePuzzleBoxComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
