// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TutoJoueur.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutoJoueur() {}
// Cross Module References
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_AddItem();
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutoJoueur();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_AddItems();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_Avant();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_ChangeInventoryState();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_Droite();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_GetIndexFromID();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_GetNumberFromID();
	TUTORIELINVENTAIREC_API UFunction* Z_Construct_UFunction_ATutoJoueur_RemoveItem();
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutoJoueur_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TutorielInventaireC();
	TUTORIELINVENTAIREC_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATutoJoueur::StaticRegisterNativesATutoJoueur()
	{
		UClass* Class = ATutoJoueur::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddItem", (Native)&ATutoJoueur::execAddItem },
			{ "AddItems", (Native)&ATutoJoueur::execAddItems },
			{ "Avant", (Native)&ATutoJoueur::execAvant },
			{ "ChangeInventoryState", (Native)&ATutoJoueur::execChangeInventoryState },
			{ "Droite", (Native)&ATutoJoueur::execDroite },
			{ "GetIndexFromID", (Native)&ATutoJoueur::execGetIndexFromID },
			{ "GetNumberFromID", (Native)&ATutoJoueur::execGetNumberFromID },
			{ "RemoveItem", (Native)&ATutoJoueur::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_AddItem()
	{
		struct TutoJoueur_eventAddItem_Parms
		{
			int32 ID;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventAddItem_Parms));
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, TutoJoueur_eventAddItem_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_AddItems()
	{
		struct TutoJoueur_eventAddItems_Parms
		{
			int32 ID;
			int32 delta;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddItems"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventAddItems_Parms));
			UProperty* NewProp_delta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("delta"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(delta, TutoJoueur_eventAddItems_Parms), 0x0010000000000080);
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, TutoJoueur_eventAddItems_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_Avant()
	{
		struct TutoJoueur_eventAvant_Parms
		{
			float value;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Avant"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventAvant_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, TutoJoueur_eventAvant_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Deplacment"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_ChangeInventoryState()
	{
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeInventoryState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_Droite()
	{
		struct TutoJoueur_eventDroite_Parms
		{
			float value;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Droite"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventDroite_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, TutoJoueur_eventDroite_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Deplacment"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_GetIndexFromID()
	{
		struct TutoJoueur_eventGetIndexFromID_Parms
		{
			int32 ID;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIndexFromID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventGetIndexFromID_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TutoJoueur_eventGetIndexFromID_Parms), 0x0010000000000580);
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, TutoJoueur_eventGetIndexFromID_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_GetNumberFromID()
	{
		struct TutoJoueur_eventGetNumberFromID_Parms
		{
			int32 ID;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumberFromID"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventGetNumberFromID_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TutoJoueur_eventGetNumberFromID_Parms), 0x0010000000000580);
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, TutoJoueur_eventGetNumberFromID_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GamePlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATutoJoueur_RemoveItem()
	{
		struct TutoJoueur_eventRemoveItem_Parms
		{
			int32 ID;
		};
		UObject* Outer = Z_Construct_UClass_ATutoJoueur();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(TutoJoueur_eventRemoveItem_Parms));
			UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, TutoJoueur_eventRemoveItem_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATutoJoueur_NoRegister()
	{
		return ATutoJoueur::StaticClass();
	}
	UClass* Z_Construct_UClass_ATutoJoueur()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_TutorielInventaireC();
			OuterClass = ATutoJoueur::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_AddItem());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_AddItems());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_Avant());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_ChangeInventoryState());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_Droite());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_GetIndexFromID());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_GetNumberFromID());
				OuterClass->LinkChild(Z_Construct_UFunction_ATutoJoueur_RemoveItem());

				UProperty* NewProp_Inventaire = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Inventaire"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Inventaire, ATutoJoueur), 0x0010000000000005);
				UProperty* NewProp_Inventaire_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Inventaire, TEXT("Inventaire"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FItem());
				UProperty* NewProp_ItemToPickUp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ItemToPickUp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ItemToPickUp, ATutoJoueur), 0x0010000000000005, Z_Construct_UClass_AActor_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(InventaireVisuel, ATutoJoueur);
				UProperty* NewProp_InventaireVisuel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InventaireVisuel"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InventaireVisuel, ATutoJoueur), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(InventaireVisuel, ATutoJoueur), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_AddItem(), "AddItem"); // 2981628312
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_AddItems(), "AddItems"); // 2366579870
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_Avant(), "Avant"); // 35026932
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_ChangeInventoryState(), "ChangeInventoryState"); // 3986534341
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_Droite(), "Droite"); // 1144936070
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_GetIndexFromID(), "GetIndexFromID"); // 2221681162
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_GetNumberFromID(), "GetNumberFromID"); // 2875963284
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATutoJoueur_RemoveItem(), "RemoveItem"); // 1414998299
				static TCppClassTypeInfo<TCppClassTypeTraits<ATutoJoueur> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TutoJoueur.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
				MetaData->SetValue(NewProp_Inventaire, TEXT("Category"), TEXT("GamePlay"));
				MetaData->SetValue(NewProp_Inventaire, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
				MetaData->SetValue(NewProp_ItemToPickUp, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_ItemToPickUp, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
				MetaData->SetValue(NewProp_ItemToPickUp, TEXT("ToolTip"), TEXT("The item to pickup"));
				MetaData->SetValue(NewProp_InventaireVisuel, TEXT("Category"), TEXT("Item"));
				MetaData->SetValue(NewProp_InventaireVisuel, TEXT("ModuleRelativePath"), TEXT("TutoJoueur.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutoJoueur, 3932545790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutoJoueur(Z_Construct_UClass_ATutoJoueur, &ATutoJoueur::StaticClass, TEXT("/Script/TutorielInventaireC"), TEXT("ATutoJoueur"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutoJoueur);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
