// Fill out your copyright notice in the Description page of Project Settings.


#include "InitializableComponent.h"


// Sets default values for this component's properties
UInitializableComponent::UInitializableComponent()
{
}

void UInitializableComponent::IFinishInitialization_Implementation()
{
	IInitializableInterface::IFinishInitialization_Implementation();
}
