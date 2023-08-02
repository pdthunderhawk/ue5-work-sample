// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UDestroyListeningActorNode.generated.h"

class ATargetActor;

UCLASS()
class WORKSAMPLE_API UDestroyListeningActorNode : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()


public:
	virtual void Activate() override;

	
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "WorkSample")
    static UDestroyListeningActorNode* DestroyListeningActor(AActor* listeningActor);


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkSample")
	AActor* listeningActor = nullptr;


};
