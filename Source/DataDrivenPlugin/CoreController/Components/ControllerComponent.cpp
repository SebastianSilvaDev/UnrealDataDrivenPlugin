// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerComponent.h"


// Sets default values for this component's properties
UControllerComponent::UControllerComponent()
{

}

void UControllerComponent::IOnPossesPawn_Implementation(APawn* NewPawn)
{
	IControllerComponentInterface::IOnPossesPawn_Implementation(NewPawn);
}

void UControllerComponent::IOnUnPossesPawn_Implementation()
{
	IControllerComponentInterface::IOnUnPossesPawn_Implementation();
}
