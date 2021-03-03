// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/MultiplayerMenuWidget.h"
#include "MultiplayerInGameMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class BIONICAPEUI_API UMultiplayerInGameMenuWidget : public UMultiplayerMenuWidget
{
	GENERATED_BODY()
protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

	UFUNCTION()
	void CancelPressed();

	UFUNCTION()
	void QuitPressed();
};
