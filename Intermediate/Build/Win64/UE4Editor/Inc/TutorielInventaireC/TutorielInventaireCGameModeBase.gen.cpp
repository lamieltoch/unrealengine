// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TutorielInventaireCGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorielInventaireCGameModeBase() {}
// Cross Module References
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutorielInventaireCGameModeBase_NoRegister();
	TUTORIELINVENTAIREC_API UClass* Z_Construct_UClass_ATutorielInventaireCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TutorielInventaireC();
// End Cross Module References
	void ATutorielInventaireCGameModeBase::StaticRegisterNativesATutorielInventaireCGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATutorielInventaireCGameModeBase_NoRegister()
	{
		return ATutorielInventaireCGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATutorielInventaireCGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_TutorielInventaireC();
			OuterClass = ATutorielInventaireCGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATutorielInventaireCGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TutorielInventaireCGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TutorielInventaireCGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorielInventaireCGameModeBase, 2159189459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorielInventaireCGameModeBase(Z_Construct_UClass_ATutorielInventaireCGameModeBase, &ATutorielInventaireCGameModeBase::StaticClass, TEXT("/Script/TutorielInventaireC"), TEXT("ATutorielInventaireCGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorielInventaireCGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
