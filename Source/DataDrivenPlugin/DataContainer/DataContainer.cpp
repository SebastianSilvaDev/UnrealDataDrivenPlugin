// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainer.h"

UObject* UDataContainer::GetDataPiece(TSubclassOf<UObject> DataPieceClass)
{
	UObject* DataPiece = nullptr;
	for (const auto& InternalDataPiece : DataPieces)
	{
		if (!IsValid(InternalDataPiece)) continue;
		if (InternalDataPiece->GetClass()->IsChildOf(DataPieceClass)) return InternalDataPiece;
	}
	return DataPiece;
}
