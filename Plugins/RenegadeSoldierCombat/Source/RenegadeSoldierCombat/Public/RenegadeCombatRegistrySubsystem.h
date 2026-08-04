#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RenegadeCombatRegistrySubsystem.generated.h"

class URenegadeSoldierCombatComponent;

UCLASS()
class RENEGADESOLDIERCOMBAT_API URenegadeCombatRegistrySubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    void RegisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void UnregisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void GetCombatants(TArray<URenegadeSoldierCombatComponent*>& OutCombatants);

private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeSoldierCombatComponent>> RegisteredCombatants;
};
