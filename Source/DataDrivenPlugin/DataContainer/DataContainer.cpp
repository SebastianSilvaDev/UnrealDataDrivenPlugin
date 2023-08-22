// Fill out your copyright notice in the Description page of Project Settings.


#include "DataContainer.h"
#include "DataPiece.h"

UDataPiece* UDataContainer::GetDataPiece(TSubclassOf<UDataPiece> DataPieceClass)
{
	for (const auto& InternalDataPiece : DataPieces)
	{
		if (IsValid(InternalDataPiece) && InternalDataPiece->GetClass()->IsChildOf(DataPieceClass))
		{
			return InternalDataPiece;
		}
	}
	return nullptr;
}
