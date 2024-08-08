// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptExplorer/CryptDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptDoor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_ACryptDoor();
	CRYPTEXPLORER_API UClass* Z_Construct_UClass_ACryptDoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CryptExplorer();
// End Cross Module References
	void ACryptDoor::StaticRegisterNativesACryptDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptDoor);
	UClass* Z_Construct_UClass_ACryptDoor_NoRegister()
	{
		return ACryptDoor::StaticClass();
	}
	struct Z_Construct_UClass_ACryptDoor_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shouldMove_MetaData[];
#endif
		static void NewProp_shouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptExplorer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CryptDoor.h" },
		{ "ModuleRelativePath", "CryptDoor.h" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces_Inner = { "solvedPieces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces_MetaData[] = {
		{ "Category", "CryptDoor" },
		{ "ModuleRelativePath", "CryptDoor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces = { "solvedPieces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACryptDoor, solvedPieces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove_MetaData[] = {
		{ "Category", "CryptDoor" },
		{ "ModuleRelativePath", "CryptDoor.h" },
	};
#endif
	void Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove_SetBit(void* Obj)
	{
		((ACryptDoor*)Obj)->shouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove = { "shouldMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACryptDoor), &Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveOffset_MetaData[] = {
		{ "Category", "CryptDoor" },
		{ "ModuleRelativePath", "CryptDoor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveOffset = { "moveOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACryptDoor, moveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveTime_MetaData[] = {
		{ "Category", "CryptDoor" },
		{ "ModuleRelativePath", "CryptDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveTime = { "moveTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACryptDoor, moveTime), METADATA_PARAMS(Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACryptDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptDoor_Statics::NewProp_solvedPieces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptDoor_Statics::NewProp_shouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptDoor_Statics::NewProp_moveTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptDoor_Statics::ClassParams = {
		&ACryptDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACryptDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACryptDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACryptDoor()
	{
		if (!Z_Registration_Info_UClass_ACryptDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptDoor.OuterSingleton, Z_Construct_UClass_ACryptDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptDoor.OuterSingleton;
	}
	template<> CRYPTEXPLORER_API UClass* StaticClass<ACryptDoor>()
	{
		return ACryptDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptDoor);
	ACryptDoor::~ACryptDoor() {}
	struct Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptDoor, ACryptDoor::StaticClass, TEXT("ACryptDoor"), &Z_Registration_Info_UClass_ACryptDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptDoor), 4034101193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptDoor_h_2176409437(TEXT("/Script/CryptExplorer"),
		Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
