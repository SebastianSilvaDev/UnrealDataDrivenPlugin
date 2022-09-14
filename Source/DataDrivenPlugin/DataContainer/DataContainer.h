// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataContainer.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVENPLUGIN_API UDataContainer : public UDataAsset
{
	GENERATED_BODY()

public:
	template<class T>
	void RegisterDataPiece(FName Name, T*& DataPiece);

	UFUNCTION(BlueprintCallable)
	UObject* GetDataPiece(TSubclassOf<UObject> DataPieceClass);

	// TODO RegisterDataPiece for Blueprints
	
private:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess))
	TMap<TSubclassOf<UObject>, UObject*> DataPieces;
};

template <class T>
void UDataContainer::RegisterDataPiece(FName Name, T*& DataPiece)
{
	UClass* DataPieceClass = T::StaticClass();
	DataPiece = static_cast<T*>(CreateDefaultSubobject(Name,DataPieceClass, DataPieceClass, true, false));
	DataPieces.Add(DataPieceClass, DataPiece);
}
