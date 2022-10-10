// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenControllerComponent.h"


// Sets default values for this component's properties
UDataDrivenControllerComponent::UDataDrivenControllerComponent()
{

}

void UDataDrivenControllerComponent::IOnPossesPawn_Implementation(APawn* NewPawn)
{
	IControllerComponentInterface::IOnPossesPawn_Implementation(NewPawn);
	ControlledPawn = NewPawn;
}

void UDataDrivenControllerComponent::IOnUnPossesPawn_Implementation()
{
	IControllerComponentInterface::IOnUnPossesPawn_Implementation();
	ControlledPawn = nullptr;
}

