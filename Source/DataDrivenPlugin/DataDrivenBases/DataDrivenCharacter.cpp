// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenCharacter.h"

#include "DataDrivenPlugin/DataContainer/DataContainerComponent.h"
#include "DataDrivenPlugin/DataDrivenHelpers/DataDrivenHelpers.h"
#include "DataDrivenPlugin/Initialization/InitializableInterface.h"


// Sets default values
ADataDrivenCharacter::ADataDrivenCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	DataContainerComponent = CreateDefaultSubobject<UDataContainerComponent>(TEXT("DataContainerComponent"));
}

// Called when the game starts or when spawned
void ADataDrivenCharacter::BeginPlay()
{
	Super::BeginPlay();
	INITIALIZE_COMPONENTS
}

void ADataDrivenCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

