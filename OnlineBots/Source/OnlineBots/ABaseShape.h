// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseShape.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBotReachShape, AActor*, BotRef);

UCLASS()
class ONLINEBOTS_API AABaseShape : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AABaseShape();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShapeMesh;

	UPROPERTY(BlueprintAssignable)
	FBotReachShape OnBotReachShape;

	UPROPERTY(EditDefaultsOnly)
	int ScoreForShape = 1;

	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetScore() const {return ScoreForShape;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void BotTouchShape(AActor* BotRef) {OnBotReachShape.Broadcast(BotRef);};

};
