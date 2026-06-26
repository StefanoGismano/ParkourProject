#include "Attributes/SpeedAttributeSet.h"
#include "GameplayEffectExtension.h"

void USpeedAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute == GetSpeedAttribute())
	{
		OnSpeedChanged.Broadcast(Data.EvaluatedData.Magnitude, GetSpeed());
	}
}