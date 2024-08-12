#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DoorsPlayerController.generated.h"

UCLASS()
class ADoorsPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
		ADoorsPlayerController();

		virtual void BeginPlay() override;
};
