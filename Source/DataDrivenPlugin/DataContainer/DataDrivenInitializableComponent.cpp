// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenInitializableComponent.h"


// Sets default values for this component's properties
UDataDrivenInitializableComponent::UDataDrivenInitializableComponent()
{
}

void UDataDrivenInitializableComponent::IFinishInitialization_Implementation()
{
	IInitializableInterface::IFinishInitialization_Implementation();
}

void UDataDrivenInitializableComponent::IRegisterDataContainerComponent_Implementation(
	UDataContainerComponent* NewDataContainerComponent)
{
	IDataDrivenComponentInterface::IRegisterDataContainerComponent_Implementation(NewDataContainerComponent);
	DataContainerComponent = NewDataContainerComponent;
}

