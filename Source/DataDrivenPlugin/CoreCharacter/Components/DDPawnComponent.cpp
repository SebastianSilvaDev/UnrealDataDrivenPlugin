// Fill out your copyright notice in the Description page of Project Settings.


#include "DDPawnComponent.h"


// Sets default values for this component's properties
UDDPawnComponent::UDDPawnComponent()
{
	
}

void UDDPawnComponent::IOnPossessedBy_Implementation(AController* NewController, AController* OldController)
{
	IPawnPossessionInterface::IOnPossessedBy_Implementation(NewController, OldController);
}

void UDDPawnComponent::IOnUnPossessed_Implementation()
{
	IPawnPossessionInterface::IOnUnPossessed_Implementation();
}


// Called when the game starts
void UDDPawnComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


