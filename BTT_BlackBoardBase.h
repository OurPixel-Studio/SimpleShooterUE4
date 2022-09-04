// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_BlackBoardBase.generated.h"

UCLASS()
class SIMPLESHOOTER_API UBTT_BlackBoardBase : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	public:
	UBTT_BlackBoardBase();

	protected:
	virtual  EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
