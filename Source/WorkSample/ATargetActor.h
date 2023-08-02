// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATargetActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDestroyListeningActorEvent);

UCLASS(Blueprintable, BlueprintType, DisplayName="Target Actor")
class WORKSAMPLE_API ATargetActor : public AActor
{
	GENERATED_BODY()

public:
	ATargetActor();
	ATargetActor(FObjectInitializer const& objectInitializer);


public:
	UPROPERTY(EditAnywhere, Category="WorkSample")
	uint8 bDestroyListeningActor : 1;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "WorkSample")
	FDestroyListeningActorEvent OnDestroyListeningActorEvent;


private:
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
#endif

};
