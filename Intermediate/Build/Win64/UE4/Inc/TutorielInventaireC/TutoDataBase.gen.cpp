// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TutoDataBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutoDataBase() {}
// Cross Module References
	TUTORIELINVENTAIREC_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	UPackage* Z_Construct_UPackage__Script_TutorielInventaireC();
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutoDataBase_NoRegister();
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutoDataBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TUTORIELINVENTAIREC_API uint32 Get_Z_Construct_UScriptStruct_FItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, Z_Construct_UPackage__Script_TutorielInventaireC(), TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItem(FItem::StaticStruct, TEXT("/Script/TutorielInventaireC"), TEXT("Item"), false, nullptr, nullptr);
static struct FScriptStruct_TutorielInventaireC_StaticRegisterNativesFItem
{
	FScriptStruct_TutorielInventaireC_StaticRegisterNativesFItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Item")),new UScriptStruct::TCppStructOps<FItem>);
	}
} ScriptStruct_TutorielInventaireC_StaticRegisterNativesFItem;
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_TutorielInventaireC();
		extern uint32 Get_Z_Construct_UScriptStruct_FItem_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Item"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FItem>, EStructFlags(0x00000001));
			UProperty* NewProp_Quantite = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Quantite"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Quantite, FItem), 0x0010000000000005);
			UProperty* NewProp_Nom = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Nom"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Nom, FItem), 0x0010000000000005);
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, FItem), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("TutoDataBase.h"));
			MetaData->SetValue(NewProp_Quantite, TEXT("Category"), TEXT("Item"));
			MetaData->SetValue(NewProp_Quantite, TEXT("ModuleRelativePath"), TEXT("TutoDataBase.h"));
			MetaData->SetValue(NewProp_Nom, TEXT("Category"), TEXT("Item"));
			MetaData->SetValue(NewProp_Nom, TEXT("ModuleRelativePath"), TEXT("TutoDataBase.h"));
			MetaData->SetValue(NewProp_ID, TEXT("Category"), TEXT("Item"));
			MetaData->SetValue(NewProp_ID, TEXT("ModuleRelativePath"), TEXT("TutoDataBase.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItem_CRC() { return 2177951957U; }
	void ATutoDataBase::StaticRegisterNativesATutoDataBase()
	{
	}
	UClass* Z_Construct_UClass_ATutoDataBase_NoRegister()
	{
		return ATutoDataBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATutoDataBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_TutorielInventaireC();
			OuterClass = ATutoDataBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATutoDataBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TutoDataBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TutoDataBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutoDataBase, 690994050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutoDataBase(Z_Construct_UClass_ATutoDataBase, &ATutoDataBase::StaticClass, TEXT("/Script/TutorielInventaireC"), TEXT("ATutoDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutoDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
