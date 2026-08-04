#include "RenegadeCombatBlueprintLibrary.h"
#include "GameFramework/Actor.h"
#include "RenegadeSoldierCombatComponent.h"

URenegadeSoldierCombatComponent* URenegadeCombatBlueprintLibrary::GetRenegadeCombatComponent(const AActor* Actor)
{
    return Actor ? Actor->FindComponentByClass<URenegadeSoldierCombatComponent>() : nullptr;
}

bool URenegadeCombatBlueprintLibrary::AreRenegadeActorsHostile(const AActor* FirstActor, const AActor* SecondActor)
{
    const URenegadeSoldierCombatComponent* FirstCombat = GetRenegadeCombatComponent(FirstActor);
    return FirstCombat && FirstCombat->IsHostileToActor(SecondActor);
}

FName URenegadeCombatBlueprintLibrary::GetRenegadeTeamId(const AActor* Actor)
{
    const URenegadeSoldierCombatComponent* Combat = GetRenegadeCombatComponent(Actor);
    return Combat ? Combat->TeamId : NAME_None;
}

bool URenegadeCombatBlueprintLibrary::SetRenegadeTeamId(AActor* Actor, FName NewTeamId)
{
    URenegadeSoldierCombatComponent* Combat = GetRenegadeCombatComponent(Actor);
    if (!Combat || !Actor || !Actor->HasAuthority())
    {
        return false;
    }

    Combat->SetTeamId(NewTeamId);
    return true;
}

FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakeAutomaticRiflePreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::AutomaticRifle;
    Result.DamagePerShot = 11.0f;
    Result.MaximumRange = 4500.0f;
    Result.RoundsPerMinute = 600.0f;
    Result.MinimumBurstShots = 3;
    Result.MaximumBurstShots = 7;
    Result.MinimumBurstPause = 0.20f;
    Result.MaximumBurstPause = 0.55f;
    Result.HipFireSpreadDegrees = 2.2f;
    Result.MovingSpreadPenaltyDegrees = 1.4f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 30;
    Result.ReloadSeconds = 2.1f;
    return Result;
}

FRenegadeWeaponSettings URenegadeCombatBlueprintLibrary::MakePistolPreset()
{
    FRenegadeWeaponSettings Result;
    Result.WeaponClass = ERenegadeWeaponClass::Pistol;
    Result.DamagePerShot = 18.0f;
    Result.MaximumRange = 2800.0f;
    Result.RoundsPerMinute = 260.0f;
    Result.MinimumBurstShots = 1;
    Result.MaximumBurstShots = 2;
    Result.MinimumBurstPause = 0.25f;
    Result.MaximumBurstPause = 0.65f;
    Result.HipFireSpreadDegrees = 1.8f;
    Result.MovingSpreadPenaltyDegrees = 1.8f;
    Result.bUseMagazine = true;
    Result.MagazineSize = 12;
    Result.ReloadSeconds = 1.65f;
    return Result;
}
