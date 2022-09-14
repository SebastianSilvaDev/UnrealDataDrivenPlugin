// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenHelpers.h"

#include "DataDrivenPlugin/DataContainer/DataContainerComponent.h"

UActorComponent* UDataDrivenHelpers::GetValidatedComponentByClass(AActor* Target,
                                                                  TSubclassOf<UActorComponent> ComponentClass, TEnumAsByte<EValidationPin>& ExecOutput)
{
	if (!IsValid(Target))
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	UActorComponent* Component = Target->FindComponentByClass(ComponentClass);
	ExecOutput = IsValid(Component) ? EValidationPin::Valid : EValidationPin::Invalid;
	return Component;
}

UObject* UDataDrivenHelpers::GetValidatedDataPiece(UDataContainerComponent* Target, TSubclassOf<UObject> DataPieceClass,
	TEnumAsByte<EValidationPin>& ExecOutput)
{
	if (!IsValid(Target))
	{
		ExecOutput = EValidationPin::Invalid;
		return nullptr;
	}
	UObject* DataPiece = Target->GetDataPiece(DataPieceClass);
	ExecOutput = IsValid(DataPiece) ? EValidationPin::Valid : EValidationPin::Invalid;
	return DataPiece;
}
