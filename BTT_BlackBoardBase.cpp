// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_BlackBoardBase.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_BlackBoardBase::UBTT_BlackBoardBase()
{
	NodeName = TEXT("Clear Blackboard Value");
}

EBTNodeResult::Type UBTT_BlackBoardBase::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

	return EBTNodeResult::Succeeded;
}
