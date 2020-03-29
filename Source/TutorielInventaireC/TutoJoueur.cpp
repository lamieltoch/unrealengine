// Fill out your copyright notice in the Description page of Project Settings.

#include "TutoJoueur.h"
#include "Engine.h"
#include "TutoItem.h"
//#include "TutoDataBase.h"
#include <algorithm>

// Sets default values
ATutoJoueur::ATutoJoueur()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventaireVisuel = false;


	FCraft KitSoin;
	KitSoin.ID = 0;
	KitSoin.Nom = "Kit de Soin";
	KitSoin.Quantite = 0;
	KitSoin.Requirements.Add(FRequirement(0, 1));
	KitSoin.Requirements.Add(FRequirement(2, 1));
	Craft.Add(KitSoin);

	FCraft Couteau;
	Couteau.Nom = "Couteau";
	Couteau.ID = 1;
	Couteau.Quantite = 0;
	Couteau.Requirements.Add(FRequirement(4, 1));
	Couteau.Requirements.Add(FRequirement(5, 1));
	Couteau.Requirements.Add(FRequirement(1, 1));
	Craft.Add(Couteau);

	FCraft Crochetage;
	Crochetage.ID = 2;
	Crochetage.Nom = "Crochetage";
	Crochetage.Quantite = 0;
	Crochetage.Requirements.Add(FRequirement(1, 2));
	Craft.Add(Crochetage);

	FCraft Molotov;
	Molotov.ID = 3;
	Molotov.Nom = "Molotov";
	Molotov.Quantite = 0;
	Molotov.Requirements.Add(FRequirement(2, 1));
	Molotov.Requirements.Add(FRequirement(3, 1));
	Craft.Add(Molotov);

	FCraft Bandage;
	Bandage.ID = 4;
	Bandage.Nom = "Bandage";
	Bandage.Quantite = 0;
	Bandage.Requirements.Add(FRequirement(3, 2));
	Craft.Add(Bandage);
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

	PlayerInputComponent->BindAction("MonterCraft", IE_Pressed, this, &ATutoJoueur::MonteCraft);
	PlayerInputComponent->BindAction("BaisserCraft", IE_Pressed, this, &ATutoJoueur::BaisseCraft);
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
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Impossible de modifier la quantité de l'item " + FString::FromInt(ID)));
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
	AddItem(3);
}

inline void ATutoJoueur::SupprimerObjet() {
	RemoveItem(3);
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

	if (InventaireVisuel) {
		bool yaAssezItems = GetEnoughItem(IndexCraft);
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, yaAssezItems ? TEXT("true") : TEXT("false"));
		}

		if (yaAssezItems) {
			CraftItem(IndexCraft);
		}
	}
}

void ATutoJoueur::ChangeInventoryState()
{
	InventaireVisuel = !InventaireVisuel;
}

void ATutoJoueur::Avant(float value)
{
	if (!InventaireVisuel) { //c'est pour éviter de bouger quand on ouvre l'inventaire
		if (Controller != NULL && value != 0.0f) {
			FRotator Rotation = Controller->GetControlRotation();
			if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling()) {
				Rotation.Pitch = 0.0f;
			}

			const FVector direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
			AddMovementInput(direction, value);
		}
	}
}

void ATutoJoueur::Droite(float value)
{
	if (!InventaireVisuel) {
		if (Controller != NULL && value != 0.0f) {
			FRotator Rotation = Controller->GetControlRotation();
			const FVector direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
			AddMovementInput(direction, value);
		}
	}
}

void ATutoJoueur::MonteCraft()
{
	if (InventaireVisuel && IndexCraft > 0) {
		IndexCraft--;
	}
}

void ATutoJoueur::BaisseCraft()
{
	if (InventaireVisuel && IndexCraft < Craft.Num()) {
		IndexCraft++;
	}
}

bool ATutoJoueur::GetEnoughItem(int32 indexOfCraft)
{
	bool resultat = true;
	FCraft craft = Craft[indexOfCraft];

	for (int32 i = 0; i < craft.Requirements.Num(); i++) {
		int32 nombrePossede = GetNumberFromID(craft.Requirements[i].ID);
		if (nombrePossede < craft.Requirements[i].Quantite) {
			resultat = false;
			return resultat;
		}
	}


	return resultat;
}

void ATutoJoueur::RemoveItemWithIDAndNumber(int32 TheID, int32 TheNumber)
{
	int32 indexItem = GetIndexFromID(TheID);
	int32 Quantite = Inventaire[indexItem].Quantite;
	Inventaire[indexItem].Quantite = std::max(0, Quantite - TheNumber);
}

void ATutoJoueur::CraftItem(int32 TheIndex)
{
	Craft[TheIndex].Quantite++;
	for (int32 i = 0; i < Craft[TheIndex].Requirements.Num(); i++) {
		RemoveItemWithIDAndNumber(Craft[TheIndex].Requirements[i].ID, Craft[TheIndex].Requirements[i].Quantite);
	}
}

