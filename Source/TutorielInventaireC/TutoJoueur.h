// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "TutoDataBase.h"

#include "TutoJoueur.generated.h"


#define MAX_ITEMS 5

UCLASS()
class TUTORIELINVENTAIREC_API ATutoJoueur : public ACharacter
{
	GENERATED_BODY()

	

public:
	// Sets default values for this character's properties
	ATutoJoueur();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int32 IndexCraft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FCraft> Craft;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	bool InventaireVisuel;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// The item to pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		AActor* ItemToPickUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GamePlay")
		TArray<FItem> Inventaire;

	UFUNCTION(BlueprintCallable, Category = "GamePlay")
		int32 GetNumberFromID(int32 ID);
	

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		int32 GetIndexFromID(int32 ID);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void AddItems(int32 ID, int delta);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void AddItem(int32 ID);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void RemoveItem(int32 ID);

	void AjouterObjet();

	void SupprimerObjet();

	void Ramasser();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void ChangeInventoryState();

	UFUNCTION(BlueprintCallable, Category = "Deplacment")
		void Avant(float value);

	UFUNCTION(BlueprintCallable, Category = "Deplacment")
		void Droite(float value);

	UFUNCTION()
		void MonteCraft();

	UFUNCTION()
		void BaisseCraft();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		bool GetEnoughItem(int32 indexOfCraft);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void RemoveItemWithIDAndNumber(int32 TheID, int32 TheNumber);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void CraftItem(int32 TheIndex);
};
