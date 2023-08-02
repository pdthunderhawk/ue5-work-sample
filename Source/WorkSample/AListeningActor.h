// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AListeningActor.generated.h"

class ATargetActor;

UCLASS(Blueprintable, BlueprintType, DisplayName="Listening Actor")
class WORKSAMPLE_API AListeningActor : public AActor
{
	GENERATED_BODY()

public:
	AListeningActor();
	AListeningActor(FObjectInitializer const& objectInitializer);


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkSample")
	ATargetActor* targetActor = nullptr;


};
