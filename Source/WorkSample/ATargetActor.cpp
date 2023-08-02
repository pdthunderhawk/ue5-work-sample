#include "ATargetActor.h"


ATargetActor::ATargetActor() :
	AActor(),
	bDestroyListeningActor(false)
{
	// Nothing to do here
}

ATargetActor::ATargetActor(FObjectInitializer const& objectInitializer) :
	AActor(objectInitializer),
	bDestroyListeningActor(false)
{
	// Nothing to do here
}

// I think as we're only testing this likely in the editor, we just need to listen to a property change
#if WITH_EDITOR
void ATargetActor::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	static const FName NAME_bDestroyListeningActor = FName(TEXT("bDestroyListeningActor"));
	if (PropertyChangedEvent.Property != nullptr)
	{
		if (PropertyChangedEvent.Property->GetFName() == NAME_bDestroyListeningActor)
		{
			UE_LOG(LogTemp, Warning, TEXT("Triggering delegate on bDestroyListeningActor value change!"));

			OnDestroyListeningActorEvent.Broadcast();
		}
	}
}
#endif
