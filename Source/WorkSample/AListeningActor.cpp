#include "AListeningActor.h"


AListeningActor::AListeningActor() :
	AActor()
{
	bReplicates = true;
}

AListeningActor::AListeningActor(FObjectInitializer const& objectInitializer) :
	AActor(objectInitializer)
{
	bReplicates = true;
}
