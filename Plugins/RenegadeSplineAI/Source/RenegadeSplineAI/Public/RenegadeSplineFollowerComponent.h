#pragma once

#include "CoreMinimal.h"
#include "AITypes.h"
#include "TimerManager.h"
#include "Components/ActorComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "RenegadeSplineAITypes.h"
#include "RenegadeSplineFollowerComponent.generated.h"

class AAIController;
class APawn;
class ARenegadeSplinePath;

/**
 * NavMesh-driven spline route follower for combat AI.
 *
 * Add this component to any Pawn/Character blueprint possessed by an AIController.
 * It repeatedly asks the controller to move toward short look-ahead points on a spline.
 * Combat can pause the component, use the same controller for attacking/chasing, then resume
 * by projecting the pawn's current world location back onto the route.
 */
UCLASS(ClassGroup = (AI), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class RENEGADESPLINEAI_API URenegadeSplineFollowerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URenegadeSplineFollowerComponent();

    // -------------------- Route assignment --------------------

    /** Route used when auto-starting. Can also be assigned at runtime. */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Replicated, Category = "Renegade Spline AI|Route")
    TObjectPtr<ARenegadeSplinePath> AssignedPath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    bool bAutoStart = false;

    /** Game-defined team ID. A path with an empty AllowedTeamIds array accepts every team. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    int32 TeamId = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route")
    ERenegadeSplineTravelDirection TravelDirection = ERenegadeSplineTravelDirection::Forward;

    /** Lateral offset from the spline, useful for several soldiers sharing a route. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Route", meta = (ClampMin = "-2000.0", ClampMax = "2000.0", Units = "cm"))
    float LaneOffset = 0.0f;

    // -------------------- Movement --------------------

    /** Distance ahead of current route progress used as the next NavMesh goal. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "100.0", Units = "cm"))
    float LookAheadDistance = 600.0f;

    /** Minimum look-ahead used while recovering from failed move requests. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "50.0", Units = "cm"))
    float MinimumLookAheadDistance = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "1.0", Units = "cm"))
    float AcceptanceRadius = 90.0f;

    /** Distance from the end of an open route at which it is considered complete. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "1.0", Units = "cm"))
    float RouteEndTolerance = 120.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bUsePathfinding = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bProjectGoalsToNavigation = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bAllowPartialPaths = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bCanStrafe = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement")
    bool bStopOnOverlap = true;

    /** Small delay between successful route segments. Zero gives continuous movement. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Movement", meta = (ClampMin = "0.0", Units = "s"))
    float SegmentDelay = 0.0f;

    // -------------------- Recovery --------------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery")
    ERenegadeSplineResumePolicy ResumePolicy = ERenegadeSplineResumePolicy::PreserveProgress;

    /** Maximum backwards route loss allowed by PreserveProgress on an open route. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0.0", Units = "cm"))
    float MaximumResumeBacktrack = 600.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0.05", Units = "s"))
    float FailedMoveRetryDelay = 0.35f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Recovery", meta = (ClampMin = "0", ClampMax = "100"))
    int32 MaximumConsecutiveMoveFailures = 5;

    /** Delay used when SetCombatActive(false) receives a negative ResumeDelayOverride. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Combat", meta = (ClampMin = "0.0", Units = "s"))
    float DefaultCombatResumeDelay = 0.6f;

    /** Automatically resume when the supplied combat target actor is destroyed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Combat")
    bool bResumeWhenCombatTargetDestroyed = true;

    // -------------------- Debug --------------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Renegade Spline AI|Debug")
    bool bDrawDebug = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_FollowState, Category = "Renegade Spline AI|State")
    ERenegadeSplineFollowState FollowState = ERenegadeSplineFollowState::Idle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Renegade Spline AI|State")
    float CurrentDistanceAlongSpline = 0.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Renegade Spline AI|State")
    FVector CurrentMoveGoal = FVector::ZeroVector;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineStateChangedSignature OnFollowStateChanged;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineProgressSignature OnRouteProgress;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplinePathSignature OnRouteCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Renegade Spline AI|Events")
    FRenegadeSplineMoveFailureSignature OnMoveFailure;

    // -------------------- Blueprint API --------------------

    /** Assign and begin following a route. Runs on the authority/server. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    bool StartFollowing(ARenegadeSplinePath* NewPath, bool bReacquireFromCurrentLocation = true);

    /** Stops issuing movement without entering combat. Assigned route is retained unless requested. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    void StopFollowing(bool bClearAssignedPath = false);

    /** Immediately yields movement to combat logic. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    void PauseForCombat(AActor* CombatTarget = nullptr);

    /** Resumes route following, normally after combat ends. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    bool ResumeFollowing(bool bReacquireFromCurrentLocation = true);

    /**
     * Convenience combat bridge.
     * Call true when an enemy is acquired. Call false when combat ends.
     * A negative ResumeDelayOverride uses DefaultCombatResumeDelay.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Combat")
    void SetCombatActive(bool bCombatActive, AActor* CombatTarget = nullptr, float ResumeDelayOverride = -1.0f);

    /** Projects the pawn's current location onto the assigned spline and updates progress. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Recovery")
    bool ReacquireRouteFromCurrentLocation();

    /** Explicitly set progress, useful for spawning waves part-way along a route. */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Control")
    bool SetRouteDistance(float NewDistanceAlongSpline, bool bImmediatelyMove = true);

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    bool IsActivelyFollowing() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    float GetNormalizedRouteProgress() const;

    UFUNCTION(BlueprintPure, Category = "Renegade Spline AI|State")
    AActor* GetCombatTarget() const { return ActiveCombatTarget.Get(); }

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    TWeakObjectPtr<APawn> OwnerPawn;
    TWeakObjectPtr<AAIController> CachedAIController;
    TWeakObjectPtr<AActor> ActiveCombatTarget;

    FDelegateHandle MoveFinishedDelegateHandle;
    FAIRequestID ActiveMoveRequestId;
    FTimerHandle NextMoveTimerHandle;
    FTimerHandle CombatResumeTimerHandle;
    FTimerHandle AutoStartTimerHandle;

    float LastCommittedDistance = 0.0f;
    float PendingTargetDistance = 0.0f;
    int32 ConsecutiveMoveFailures = 0;
    float AutoStartElapsed = 0.0f;
    bool bHasCommittedProgress = false;

    bool ResolveOwnerAndController();
    void BindMoveFinishedDelegate();
    void UnbindMoveFinishedDelegate();
    void ClearRuntimeTimers();
    void ScheduleNextMove(float DelaySeconds);
    void TryAutoStart();
    void IssueNextMove();
    void HandleMoveRequestFailure();
    void CompleteRoute();
    void SetFollowState(ERenegadeSplineFollowState NewState);
    void BroadcastProgress();
    void UnbindCombatTarget();
    float GetEffectiveLookAheadDistance() const;
    float AdvanceDistance(float FromDistance, float DeltaDistance) const;
    bool IsAtEndOfOpenRoute(float DistanceAlongSpline) const;

    UFUNCTION()
    void HandleCombatTargetDestroyed(AActor* DestroyedActor);

    UFUNCTION()
    void ResumeAfterCombatDelay();

    UFUNCTION()
    void OnRep_FollowState(ERenegadeSplineFollowState PreviousState);

    void HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result);
};
