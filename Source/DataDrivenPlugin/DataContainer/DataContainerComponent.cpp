// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainerComponent.h"

// Sets default values for this component's properties
UDataContainerComponent::UDataContainerComponent()
{
	
}

void UDataContainerComponent::RegisterDataContainer(UDataContainer* NewDataContainer)
{
	verifyf(IsValid(NewDataContainer), TEXT("The Data Container to be registered is not valid"));
	DataContainer = NewDataContainer;
}

UObject* UDataContainerComponent::GetDataPiece(TSubclassOf<UObject> DataPieceClass)
{
	if(!IsValid(DataContainer)) return nullptr;
	return DataContainer->GetDataPiece(DataPieceClass);
}
