// Fill out your copyright notice in the Description page of Project Settings.

#include "TutoGameMode.h"
#include "Engine.h"
#include "UObject/ConstructorHelpers.h"

ATutoGameMode::ATutoGameMode(const FObjectInitializer & Object) : Super(Object)
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnObject(TEXT(/*"Pawn'/Game/AddingContent/Blueprint/BP_TutoJoueur.BP_TutoJoueur'"*/
		"Blueprint'/Game/AddingContent/Blueprint/BP_TutoJoueur.BP_TutoJoueur_C'"));

	if (PlayerPawnObject.Class != NULL) {
		DefaultPawnClass = PlayerPawnObject.Class;
	}
}

void ATutoGameMode::BeginPlay()
{
	Super::BeginPlay();

	StartMatch();

	if (GEngine != NULL) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD ! I'm Lamiel !"));
	}
}
