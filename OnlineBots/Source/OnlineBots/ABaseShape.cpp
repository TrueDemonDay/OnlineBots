// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseShape.h"


// Sets default values
AABaseShape::AABaseShape()
{
	PrimaryActorTick.bCanEverTick = false;
	SetReplicates(true);
	SetReplicateMovement(true);

	ShapeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = ShapeMesh;
	ShapeMesh->SetComponentTickEnabled(false);
	ShapeMesh->SetCanEverAffectNavigation(false);
}

