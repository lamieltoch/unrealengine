// Fill out your copyright notice in the Description page of Project Settings.

#include "TutoJoueur.h"
#include "Engine.h"
#include "TutoItem.h"
#include "TutoDataBase.h"


// Sets default values
ATutoJoueur::ATutoJoueur()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventaireVisuel = false;


	ACraft KitSoin;
	KitSoin.Nom = "Kit de Soin";
	KitSoin.Quantite = 0;
	KitSoin.Requirements.Add({ .ID = 0, .Quantite = 1 });
}

// Called when the game starts or when spawned
void ATutoJoueur::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATutoJoueur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATutoJoueur::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("AjoutObjet", IE_Pressed, this, &ATutoJoueur::AjouterObjet);
	PlayerInputComponent->BindAction("SuppressionObjet", IE_Pressed, this, &ATutoJoueur::SupprimerObjet);
	PlayerInputComponent->BindAction("Inventaire", IE_Pressed, this, &ATutoJoueur::ChangeInventoryState);
	PlayerInputComponent->BindAction("Ramasser", IE_Pressed, this, &ATutoJoueur::Ramasser);
	PlayerInputComponent->BindAxis("Avant", this, &ATutoJoueur::Avant);
	PlayerInputComponent->BindAxis("Droite", this, &ATutoJoueur::Droite);
	PlayerInputComponent->BindAxis("Tourner", this, &ATutoJoueur::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lever", this, &ATutoJoueur::AddControllerPitchInput);
}

inline int32 ATutoJoueur::GetNumberFromID(int32 ID) {
	int32 quantite = -1;

	for (int32 i = 0; i < Inventaire.Num(); i++) {
		FItem item = Inventaire[i];
		if (item.ID == ID){
			quantite = item.Quantite;
			break;
		}
	}

	return quantite;
}

int32 ATutoJoueur::GetIndexFromID(int32 ID)
{
	for (int32 i = 0; i < Inventaire.Num(); i++) {
		if (Inventaire[i].ID == ID) {
			return i;
		}
	}

	return -1;
}

void ATutoJoueur::AddItems(int32 ID, int delta)
{
	int32 index = GetIndexFromID(ID);
	bool erreur = true;
	if (index >= 0 && index < Inventaire.Num()) {
		FItem& item = Inventaire[index];
		if (item.Quantite + delta >= 0 && item.Quantite + delta <= MAX_ITEMS) {
			item.Quantite += delta;
			erreur = false;
		}
	}

	if (erreur) {
		if (GEngine != NULL) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Impossible de modifier la quantit� de l'item " + FString::FromInt(ID)));
		}
	}
}

void ATutoJoueur::AddItem(int32 ID)
{
	AddItems(ID, +1);
}

void ATutoJoueur::RemoveItem(int32 ID)
{
	AddItems(ID, -1);
}

inline void ATutoJoueur::AjouterObjet() {
	AddItem(0);
}

inline void ATutoJoueur::SupprimerObjet() {
	RemoveItem(0);
}

void ATutoJoueur::Ramasser()
{
	if (ItemToPickUp != nullptr) {
		ATutoItem* TheItem = Cast<ATutoItem>(ItemToPickUp);

		int32 index = GetIndexFromID(TheItem->info.ID);
		if (index == -1) {
			//On ajoute le nouveau type d'item
			Inventaire.Add(TheItem->info);
		}

		AddItem(TheItem->info.ID);
	}
}

void ATutoJoueur::ChangeInventoryState()
{
	InventaireVisuel = !InventaireVisuel;
}

void ATutoJoueur::Avant(float value)
{
	if (Controller != NULL && value != 0.0f) {
		FRotator Rotation = Controller->GetControlRotation();
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling()) {
			Rotation.Pitch = 0.0f;
		}

		const FVector direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(direction, value);
	}
}

void ATutoJoueur::Droite(float value)
{
	if (Controller != NULL && value != 0.0f) {
		FRotator Rotation = Controller->GetControlRotation();
		const FVector direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(direction, value);
	}
}
