// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "AIController.h"
#include "ABAIController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABAIController : public AAIController
{
	GENERATED_BODY()

		//비헤이비어 트리 쓰기전 		

//public:
//	AABAIController();
//	virtual void Possess(APawn* InPawn) override;
//	virtual void UnPossess() override;
//
//private:
//	void OnPepeatTimer();
//
//	FTimerHandle RepeatTimerHandle;
//	float RepeatInterval;

public:
	AABAIController();
	virtual void Possess(APawn* InPawn) override;

	static const FName HomePosKey;
	static const FName PatrolPosKey;

private:
	UPROPERTY()
		class UBehaviorTree* BTAsset;
	UPROPERTY()
		class UBlackboardData* BBAsset;


};
