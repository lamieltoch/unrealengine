// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIELINVENTAIREC_TutoJoueur_generated_h
#error "TutoJoueur.generated.h already included, missing '#pragma once' in TutoJoueur.h"
#endif
#define TUTORIELINVENTAIREC_TutoJoueur_generated_h

#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBaisseCraft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BaisseCraft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMonteCraft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MonteCraft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDroite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Droite(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Avant(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeInventoryState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeInventoryState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveItem(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddItem(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItems) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddItems(Z_Param_ID,Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndexFromID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetIndexFromID(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberFromID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumberFromID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBaisseCraft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BaisseCraft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMonteCraft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MonteCraft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDroite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Droite(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAvant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Avant(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeInventoryState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeInventoryState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveItem(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddItem(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItems) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddItems(Z_Param_ID,Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndexFromID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetIndexFromID(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberFromID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumberFromID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutoJoueur(); \
	friend TUTORIELINVENTAIREC_API class UClass* Z_Construct_UClass_ATutoJoueur(); \
public: \
	DECLARE_CLASS(ATutoJoueur, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TutorielInventaireC"), NO_API) \
	DECLARE_SERIALIZER(ATutoJoueur) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATutoJoueur(); \
	friend TUTORIELINVENTAIREC_API class UClass* Z_Construct_UClass_ATutoJoueur(); \
public: \
	DECLARE_CLASS(ATutoJoueur, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TutorielInventaireC"), NO_API) \
	DECLARE_SERIALIZER(ATutoJoueur) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutoJoueur(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutoJoueur) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoJoueur); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoJoueur); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoJoueur(ATutoJoueur&&); \
	NO_API ATutoJoueur(const ATutoJoueur&); \
public:


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoJoueur(ATutoJoueur&&); \
	NO_API ATutoJoueur(const ATutoJoueur&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoJoueur); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoJoueur); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutoJoueur)


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_PRIVATE_PROPERTY_OFFSET
#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_15_PROLOG
#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_PRIVATE_PROPERTY_OFFSET \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_RPC_WRAPPERS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_INCLASS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_PRIVATE_PROPERTY_OFFSET \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_INCLASS_NO_PURE_DECLS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TutorielInventaireC_Source_TutorielInventaireC_TutoJoueur_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
