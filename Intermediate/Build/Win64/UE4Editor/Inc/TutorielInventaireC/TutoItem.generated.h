// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TUTORIELINVENTAIREC_TutoItem_generated_h
#error "TutoItem.generated.h already included, missing '#pragma once' in TutoItem.h"
#endif
#define TUTORIELINVENTAIREC_TutoItem_generated_h

#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutoItem(); \
	friend TUTORIELINVENTAIREC_API class UClass* Z_Construct_UClass_ATutoItem(); \
public: \
	DECLARE_CLASS(ATutoItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TutorielInventaireC"), NO_API) \
	DECLARE_SERIALIZER(ATutoItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATutoItem(); \
	friend TUTORIELINVENTAIREC_API class UClass* Z_Construct_UClass_ATutoItem(); \
public: \
	DECLARE_CLASS(ATutoItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TutorielInventaireC"), NO_API) \
	DECLARE_SERIALIZER(ATutoItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutoItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutoItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoItem(ATutoItem&&); \
	NO_API ATutoItem(const ATutoItem&); \
public:


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutoItem(ATutoItem&&); \
	NO_API ATutoItem(const ATutoItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutoItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutoItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutoItem)


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_PRIVATE_PROPERTY_OFFSET
#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_12_PROLOG
#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_PRIVATE_PROPERTY_OFFSET \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_RPC_WRAPPERS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_INCLASS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_PRIVATE_PROPERTY_OFFSET \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_INCLASS_NO_PURE_DECLS \
	TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TutorielInventaireC_Source_TutorielInventaireC_TutoItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
