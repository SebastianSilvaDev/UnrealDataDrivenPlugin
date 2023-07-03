// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenInitializableComponent.h"

#include "DataContainerComponent.h"


// Sets default values for this component's properties
UDataDrivenInitializableComponent::UDataDrivenInitializableComponent()
{
}

void UDataDrivenInitializableComponent::IFinishInitialization_Implementation()
{
	IInitializableInterface::IFinishInitialization_Implementation();
	if (!IsValid(DataContainerComponent))
	{
		DataContainerComponent = GetOwner()->FindComponentByClass<UDataContainerComponent>();
	}
}
