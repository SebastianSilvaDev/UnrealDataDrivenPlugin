// Fill out your copyright notice in the Description page of Project Settings.


#include "DDControllerComponent.h"


// Sets default values for this component's properties
UDDControllerComponent::UDDControllerComponent()
{

}

void UDDControllerComponent::IOnPossesPawn_Implementation(APawn* NewPawn)
{
	IControllerComponentInterface::IOnPossesPawn_Implementation(NewPawn);
	ControlledPawn = NewPawn;
}

void UDDControllerComponent::IOnUnPossesPawn_Implementation()
{
	IControllerComponentInterface::IOnUnPossesPawn_Implementation();
	ControlledPawn = nullptr;
}
