#include "RenegadeCombatRegistrySubsystem.h"
#include "RenegadeSoldierCombatComponent.h"

void URenegadeCombatRegistrySubsystem::RegisterCombatant(URenegadeSoldierCombatComponent* Combatant)
{
    if (IsValid(Combatant))
    {
        RegisteredCombatants.AddUnique(Combatant);
    }
}

void URenegadeCombatRegistrySubsystem::UnregisterCombatant(URenegadeSoldierCombatComponent* Combatant)
{
    RegisteredCombatants.RemoveAll([Combatant](const TWeakObjectPtr<URenegadeSoldierCombatComponent>& Entry)
    {
        return !Entry.IsValid() || Entry.Get() == Combatant;
    });
}

void URenegadeCombatRegistrySubsystem::GetCombatants(TArray<URenegadeSoldierCombatComponent*>& OutCombatants)
{
    OutCombatants.Reset();
    RegisteredCombatants.RemoveAll([](const TWeakObjectPtr<URenegadeSoldierCombatComponent>& Entry)
    {
        return !Entry.IsValid();
    });

    OutCombatants.Reserve(RegisteredCombatants.Num());
    for (const TWeakObjectPtr<URenegadeSoldierCombatComponent>& Entry : RegisteredCombatants)
    {
        if (URenegadeSoldierCombatComponent* Component = Entry.Get())
        {
            OutCombatants.Add(Component);
        }
    }
}
