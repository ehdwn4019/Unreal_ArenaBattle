// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();

#pragma region MakeMannequin
	// 블루프린트 마네킹 클래스 가져와서 폰에 대입시키는 방법
	//static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));
	//if (BP_PAWN_C.Succeeded())
	//{
	//	DefaultPawnClass = BP_PAWN_C.Class;
	//}
#pragma endregion

}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}




