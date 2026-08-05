#include "RenegadeCombatRegistrySubsystem.h"

#include "RenegadeBuildingCombatComponent.h"
#include "RenegadeSoldierCombatComponent.h"

#include "Components/AudioComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundAttenuation.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundConcurrency.h"

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

void URenegadeCombatRegistrySubsystem::RegisterBuilding(URenegadeBuildingCombatComponent* Building)
{
    if (IsValid(Building))
    {
        RegisteredBuildings.AddUnique(Building);
    }
}

void URenegadeCombatRegistrySubsystem::UnregisterBuilding(URenegadeBuildingCombatComponent* Building)
{
    RegisteredBuildings.RemoveAll([Building](const TWeakObjectPtr<URenegadeBuildingCombatComponent>& Entry)
    {
        return !Entry.IsValid() || Entry.Get() == Building;
    });
}

void URenegadeCombatRegistrySubsystem::GetBuildings(TArray<URenegadeBuildingCombatComponent*>& OutBuildings)
{
    OutBuildings.Reset();
    RegisteredBuildings.RemoveAll([](const TWeakObjectPtr<URenegadeBuildingCombatComponent>& Entry)
    {
        return !Entry.IsValid();
    });

    OutBuildings.Reserve(RegisteredBuildings.Num());
    for (const TWeakObjectPtr<URenegadeBuildingCombatComponent>& Entry : RegisteredBuildings)
    {
        if (URenegadeBuildingCombatComponent* Component = Entry.Get())
        {
            OutBuildings.Add(Component);
        }
    }
}

bool URenegadeCombatRegistrySubsystem::IsTeamPowerOnline(const FName TeamId, const bool bTreatMissingPowerPlantAsPowered) const
{
    bool bFoundTeamPowerPlant = false;

    for (const TWeakObjectPtr<URenegadeBuildingCombatComponent>& Entry : RegisteredBuildings)
    {
        const URenegadeBuildingCombatComponent* Building = Entry.Get();
        if (!IsValid(Building)
            || Building->BuildingType != ERenegadeBuildingType::PowerPlant
            || !Building->TeamId.IsEqual(TeamId, ENameCase::IgnoreCase))
        {
            continue;
        }

        bFoundTeamPowerPlant = true;
        if (!Building->bIsDestroyed && Building->CurrentHealth > 0.0f)
        {
            return true;
        }
    }

    return !bFoundTeamPowerPlant && bTreatMissingPowerPlantAsPowered;
}

bool URenegadeCombatRegistrySubsystem::TryPlayGlobalBuildingEvaSound(
    USoundBase* Sound,
    const FVector& Location,
    const float VolumeMultiplier,
    const float PitchMultiplier,
    const float QuietTimeAfterSound,
    USoundAttenuation* Attenuation,
    USoundConcurrency* Concurrency,
    AActor* OwningActor,
    const int32 Priority,
    const bool bInterruptLowerPriority)
{
    if (!IsValid(Sound) || !IsValid(GetWorld()) || GetWorld()->GetNetMode() == NM_DedicatedServer)
    {
        return false;
    }

    const double Now = GetWorld()->GetTimeSeconds();
    if (IsValid(ActiveBuildingEvaAudio) && ActiveBuildingEvaAudio->IsPlaying())
    {
        if (!bInterruptLowerPriority || Priority <= ActiveBuildingEvaPriority)
        {
            return false;
        }

        ActiveBuildingEvaAudio->Stop();
        ActiveBuildingEvaAudio = nullptr;
    }
    else if (Now < NextBuildingEvaAudioTime)
    {
        // A higher-priority imminent-destruction or destroyed message may bypass the quiet tail.
        if (!bInterruptLowerPriority || Priority <= ActiveBuildingEvaPriority)
        {
            return false;
        }
    }

    ActiveBuildingEvaAudio = UGameplayStatics::SpawnSoundAtLocation(
        this,
        Sound,
        Location,
        FRotator::ZeroRotator,
        FMath::Max(0.0f, VolumeMultiplier),
        FMath::Max(0.01f, PitchMultiplier),
        0.0f,
        Attenuation,
        Concurrency,
        true);

    if (!IsValid(ActiveBuildingEvaAudio))
    {
        return false;
    }

    // OwningActor is retained for future UI/audio routing while playback remains world/client local.
    (void)OwningActor;

    ActiveBuildingEvaPriority = Priority;
    const float EstimatedDuration = FMath::Max(0.0f, Sound->GetDuration()) / FMath::Max(0.01f, PitchMultiplier);
    NextBuildingEvaAudioTime = Now + EstimatedDuration + FMath::Max(0.0f, QuietTimeAfterSound);
    return true;
}

bool URenegadeCombatRegistrySubsystem::TryPlayGlobalBuildingUnderAttackSound(
    USoundBase* Sound,
    const FVector& Location,
    const float VolumeMultiplier,
    const float PitchMultiplier,
    const float QuietTimeAfterSound,
    USoundAttenuation* Attenuation,
    USoundConcurrency* Concurrency,
    AActor* OwningActor)
{
    return TryPlayGlobalBuildingEvaSound(
        Sound,
        Location,
        VolumeMultiplier,
        PitchMultiplier,
        QuietTimeAfterSound,
        Attenuation,
        Concurrency,
        OwningActor,
        0,
        false);
}

