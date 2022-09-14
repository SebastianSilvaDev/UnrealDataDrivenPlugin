// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnComponent.h"


// Sets default values for this component's properties
UPawnComponent::UPawnComponent()
{
	
}

void UPawnComponent::IOnPossessedBy_Implementation(AController* NewController, AController* OldController)
{
	IPawnPossessionInterface::IOnPossessedBy_Implementation(NewController, OldController);
}

void UPawnComponent::IOnUnPossessed_Implementation()
{
	IPawnPossessionInterface::IOnUnPossessed_Implementation();
}


// Called when the game starts
void UPawnComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


