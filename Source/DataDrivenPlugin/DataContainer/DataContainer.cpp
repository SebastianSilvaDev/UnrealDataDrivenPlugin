// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainer.h"
#include "DataPiece.h"

UDataPiece* UDataContainer::GetDataPiece(TSubclassOf<UDataPiece> DataPieceClass)
{
	UDataPiece* DataPiece = nullptr;
	for (const auto& InternalDataPiece : DataPieces)
	{
		if (!IsValid(InternalDataPiece)) continue;
		if (InternalDataPiece->GetClass()->IsChildOf(DataPieceClass)) return InternalDataPiece;
	}
	return DataPiece;
}
