#pragma once

#include "CoreMinimal.h"
#include "BaseAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SpeedAttributeSet.generated.h"

UCLASS()
class PARKOURPROJECT_API USpeedAttributeSet : public UBaseAttributeSet
{
	GENERATED_BODY()
	
public:
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	 
	UPROPERTY()
	FPlayAttributeEvent OnSpeedChanged;
	 
	UPROPERTY()
	FGameplayAttributeData Speed;
	PLAY_ATTRIBUTE_ACCESSORS(USpeedAttributeSet, Speed);
};
