// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "Components/Interfaces/PawnPossessionInterface.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ABaseCharacter::PossessedBy(AController* NewController)
{
	AController* OldController = GetController();
	Super::PossessedBy(NewController);
	TArray<UActorComponent*> PawnPossessionComponents = GetComponentsByInterface(UPawnPossessionInterface::StaticClass());
	for(auto& Component : PawnPossessionComponents)
	{
		IPawnPossessionInterface::Execute_IOnPossessedBy(Component, NewController, OldController);
	}
}

void ABaseCharacter::UnPossessed()
{
	Super::UnPossessed();
	TArray<UActorComponent*> PawnPossessionComponents = GetComponentsByInterface(UPawnPossessionInterface::StaticClass());
	for(auto& Component : PawnPossessionComponents)
	{
		IPawnPossessionInterface::Execute_IOnUnPossessed(Component);
	}
}
