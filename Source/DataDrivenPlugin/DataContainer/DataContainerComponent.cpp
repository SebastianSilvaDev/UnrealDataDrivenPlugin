// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainerComponent.h"

// Sets default values for this component's properties
UDataContainerComponent::UDataContainerComponent()
{
	
}

void UDataContainerComponent::RegisterDataContainer(UDataContainer* NewDataContainer)
{
	if (!IsValid(NewDataContainer)) return;
	DataContainer = NewDataContainer;
}

UDataPiece* UDataContainerComponent::GetDataPiece(TSubclassOf<UDataPiece> DataPieceClass)
{
	if(!IsValid(DataContainer)) return nullptr;
	return DataContainer->GetDataPiece(DataPieceClass);
}
