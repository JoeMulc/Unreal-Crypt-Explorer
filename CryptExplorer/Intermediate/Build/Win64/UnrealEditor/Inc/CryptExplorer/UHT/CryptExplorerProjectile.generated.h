// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptExplorerProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CRYPTEXPLORER_CryptExplorerProjectile_generated_h
#error "CryptExplorerProjectile.generated.h already included, missing '#pragma once' in CryptExplorerProjectile.h"
#endif
#define CRYPTEXPLORER_CryptExplorerProjectile_generated_h

#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_SPARSE_DATA
#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_ACCESSORS
#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptExplorerProjectile(); \
	friend struct Z_Construct_UClass_ACryptExplorerProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptExplorerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACryptExplorerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACryptExplorerProjectile(); \
	friend struct Z_Construct_UClass_ACryptExplorerProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptExplorerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACryptExplorerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACryptExplorerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACryptExplorerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptExplorerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptExplorerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptExplorerProjectile(ACryptExplorerProjectile&&); \
	NO_API ACryptExplorerProjectile(const ACryptExplorerProjectile&); \
public: \
	NO_API virtual ~ACryptExplorerProjectile();


#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptExplorerProjectile(ACryptExplorerProjectile&&); \
	NO_API ACryptExplorerProjectile(const ACryptExplorerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptExplorerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptExplorerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptExplorerProjectile) \
	NO_API virtual ~ACryptExplorerProjectile();


#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_12_PROLOG
#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_SPARSE_DATA \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_RPC_WRAPPERS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_ACCESSORS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_INCLASS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_SPARSE_DATA \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_ACCESSORS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTEXPLORER_API UClass* StaticClass<class ACryptExplorerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_CryptExplorer_Unreal_Crypt_Explorer_CryptExplorer_Source_CryptExplorer_CryptExplorerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
