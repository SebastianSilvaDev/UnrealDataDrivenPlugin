// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainer.h"

UObject* UDataContainer::GetDataPiece(TSubclassOf<UObject> DataPieceClass)
{
	if (!DataPieces.Contains(DataPieceClass)) return nullptr;
	return DataPieces[DataPieceClass];
}
