#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RenegadeCombatRegistrySubsystem.generated.h"

class AActor;
class UAudioComponent;
class URenegadeBuildingCombatComponent;
class URenegadeSoldierCombatComponent;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;

UCLASS()
class RENEGADESOLDIERCOMBAT_API URenegadeCombatRegistrySubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    void RegisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void UnregisterCombatant(URenegadeSoldierCombatComponent* Combatant);
    void GetCombatants(TArray<URenegadeSoldierCombatComponent*>& OutCombatants);

    void RegisterBuilding(URenegadeBuildingCombatComponent* Building);
    void UnregisterBuilding(URenegadeBuildingCombatComponent* Building);
    void GetBuildings(TArray<URenegadeBuildingCombatComponent*>& OutBuildings);

    /** Returns true when at least one live team Power Plant exists, or when no Power Plant exists and the caller allows that fallback. */
    bool IsTeamPowerOnline(FName TeamId, bool bTreatMissingPowerPlantAsPowered) const;

    /**
     * Plays a world-wide building under-attack sound only when no other building alert is currently playing.
     * Each world/client owns one lock, preventing simultaneous building announcements from overlapping.
     */
    bool TryPlayGlobalBuildingUnderAttackSound(
        USoundBase* Sound,
        const FVector& Location,
        float VolumeMultiplier,
        float PitchMultiplier,
        float QuietTimeAfterSound,
        USoundAttenuation* Attenuation,
        USoundConcurrency* Concurrency,
        AActor* OwningActor);

private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeSoldierCombatComponent>> RegisteredCombatants;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<URenegadeBuildingCombatComponent>> RegisteredBuildings;

    UPROPERTY(Transient)
    TObjectPtr<UAudioComponent> ActiveBuildingUnderAttackAudio;

    double NextBuildingUnderAttackAudioTime = -BIG_NUMBER;
};
