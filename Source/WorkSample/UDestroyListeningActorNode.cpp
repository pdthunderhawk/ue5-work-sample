#include "UDestroyListeningActorNode.h"

UDestroyListeningActorNode::UDestroyListeningActorNode(FObjectInitializer const& objectInitializer) :
	UBlueprintAsyncActionBase(objectInitializer)
{
	// Nothing to do here
}

void UDestroyListeningActorNode::Activate()
{
	if (listeningActor != nullptr)
	{
		listeningActor->Destroy();
		listeningActor = nullptr;
	}
}

UDestroyListeningActorNode* UDestroyListeningActorNode::DestroyListeningActor(AActor* listeningActor)
{
	UDestroyListeningActorNode* node = NewObject<UDestroyListeningActorNode>();
	node->listeningActor = listeningActor;
	return node;
}
