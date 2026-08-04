#include "RenegadeSplineFollowerComponent.h"

#include "AIController.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"
#include "Net/UnrealNetwork.h"
#include "RenegadeSplinePath.h"
#include "TimerManager.h"

URenegadeSplineFollowerComponent::URenegadeSplineFollowerComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
}

void URenegadeSplineFollowerComponent::BeginPlay()
{
    Super::BeginPlay();

    ResolveOwnerAndController();

    if (GetOwner() && GetOwner()->HasAuthority() && bAutoStart && IsValid(AssignedPath))
    {
        TryAutoStart();
    }
}

void URenegadeSplineFollowerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    ClearRuntimeTimers();
    UnbindCombatTarget();
    UnbindMoveFinishedDelegate();
    Super::EndPlay(EndPlayReason);
}

void URenegadeSplineFollowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(URenegadeSplineFollowerComponent, AssignedPath);
    DOREPLIFETIME(URenegadeSplineFollowerComponent, FollowState);
    DOREPLIFETIME(URenegadeSplineFollowerComponent, CurrentDistanceAlongSpline);
}

bool URenegadeSplineFollowerComponent::ResolveOwnerAndController()
{
    APawn* Pawn = Cast<APawn>(GetOwner());
    if (!IsValid(Pawn))
    {
        OwnerPawn.Reset();
        CachedAIController.Reset();
        return false;
    }

    OwnerPawn = Pawn;
    AAIController* AIController = Cast<AAIController>(Pawn->GetController());

    if (CachedAIController.Get() != AIController)
    {
        UnbindMoveFinishedDelegate();
        CachedAIController = AIController;
        BindMoveFinishedDelegate();
    }

    return IsValid(AIController);
}

void URenegadeSplineFollowerComponent::BindMoveFinishedDelegate()
{
    AAIController* AIController = CachedAIController.Get();
    if (!IsValid(AIController) || MoveFinishedDelegateHandle.IsValid())
    {
        return;
    }

    if (UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent())
    {
        MoveFinishedDelegateHandle = PathFollowing->OnRequestFinished.AddUObject(
            this,
            &URenegadeSplineFollowerComponent::HandleMoveFinished);
    }
}

void URenegadeSplineFollowerComponent::UnbindMoveFinishedDelegate()
{
    AAIController* AIController = CachedAIController.Get();
    if (IsValid(AIController) && MoveFinishedDelegateHandle.IsValid())
    {
        if (UPathFollowingComponent* PathFollowing = AIController->GetPathFollowingComponent())
        {
            PathFollowing->OnRequestFinished.Remove(MoveFinishedDelegateHandle);
        }
    }

    MoveFinishedDelegateHandle.Reset();
}

bool URenegadeSplineFollowerComponent::StartFollowing(
    ARenegadeSplinePath* NewPath,
    const bool bReacquireFromCurrentLocation)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(NewPath))
    {
        return false;
    }

    if (!NewPath->IsTeamAllowed(TeamId) || !ResolveOwnerAndController())
    {
        return false;
    }

    ClearRuntimeTimers();
    UnbindCombatTarget();
    ActiveCombatTarget.Reset();

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    CachedAIController->StopMovement();

    AssignedPath = NewPath;
    ConsecutiveMoveFailures = 0;
    bHasCommittedProgress = false;

    if (bReacquireFromCurrentLocation)
    {
        SetFollowState(ERenegadeSplineFollowState::Reacquiring);
        if (!ReacquireRouteFromCurrentLocation())
        {
            SetFollowState(ERenegadeSplineFollowState::Blocked);
            return false;
        }
    }
    else
    {
        const float Length = AssignedPath->GetRouteLength();
        CurrentDistanceAlongSpline = TravelDirection == ERenegadeSplineTravelDirection::Forward ? 0.0f : Length;
        LastCommittedDistance = CurrentDistanceAlongSpline;
        bHasCommittedProgress = true;
    }

    SetFollowState(ERenegadeSplineFollowState::Following);
    BroadcastProgress();
    ScheduleNextMove(0.0f);
    return true;
}

void URenegadeSplineFollowerComponent::StopFollowing(const bool bClearAssignedPath)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return;
    }

    ClearRuntimeTimers();
    UnbindCombatTarget();
    ActiveCombatTarget.Reset();

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    SetFollowState(ERenegadeSplineFollowState::Idle);

    if (ResolveOwnerAndController())
    {
        CachedAIController->StopMovement();
    }

    if (bClearAssignedPath)
    {
        AssignedPath = nullptr;
    }
}

void URenegadeSplineFollowerComponent::PauseForCombat(AActor* CombatTarget)
{
    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return;
    }

    ClearRuntimeTimers();
    UnbindCombatTarget();
    ActiveCombatTarget = CombatTarget;

    if (IsValid(CombatTarget) && bResumeWhenCombatTargetDestroyed)
    {
        CombatTarget->OnDestroyed.AddDynamic(this, &URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed);
    }

    SetFollowState(ERenegadeSplineFollowState::CombatPaused);

    if (ResolveOwnerAndController())
    {
        CachedAIController->StopMovement();
    }

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
}

bool URenegadeSplineFollowerComponent::ResumeFollowing(const bool bReacquireFromCurrentLocation)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(AssignedPath))
    {
        return false;
    }

    ClearRuntimeTimers();
    UnbindCombatTarget();
    ActiveCombatTarget.Reset();

    if (!AssignedPath->IsTeamAllowed(TeamId) || !ResolveOwnerAndController())
    {
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return false;
    }

    ConsecutiveMoveFailures = 0;

    if (bReacquireFromCurrentLocation)
    {
        SetFollowState(ERenegadeSplineFollowState::Reacquiring);
        if (!ReacquireRouteFromCurrentLocation())
        {
            SetFollowState(ERenegadeSplineFollowState::Blocked);
            return false;
        }
    }

    SetFollowState(ERenegadeSplineFollowState::Following);
    BroadcastProgress();
    ScheduleNextMove(0.0f);
    return true;
}

void URenegadeSplineFollowerComponent::SetCombatActive(
    const bool bCombatActive,
    AActor* CombatTarget,
    const float ResumeDelayOverride)
{
    if (bCombatActive)
    {
        PauseForCombat(CombatTarget);
        return;
    }

    if (!GetOwner() || !GetOwner()->HasAuthority())
    {
        return;
    }

    UnbindCombatTarget();
    ActiveCombatTarget.Reset();

    const float Delay = ResumeDelayOverride < 0.0f ? DefaultCombatResumeDelay : ResumeDelayOverride;
    if (Delay <= 0.0f)
    {
        ResumeFollowing(true);
        return;
    }

    GetWorld()->GetTimerManager().ClearTimer(CombatResumeTimerHandle);
    GetWorld()->GetTimerManager().SetTimer(
        CombatResumeTimerHandle,
        this,
        &URenegadeSplineFollowerComponent::ResumeAfterCombatDelay,
        Delay,
        false);
}

bool URenegadeSplineFollowerComponent::ReacquireRouteFromCurrentLocation()
{
    if (!IsValid(AssignedPath) || !OwnerPawn.IsValid())
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return false;
    }

    float ProjectedDistance = AssignedPath->GetClosestDistanceAlongRoute(OwnerPawn->GetActorLocation());

    if (bHasCommittedProgress &&
        !AssignedPath->IsClosedLoop() &&
        ResumePolicy == ERenegadeSplineResumePolicy::PreserveProgress)
    {
        if (TravelDirection == ERenegadeSplineTravelDirection::Forward)
        {
            ProjectedDistance = FMath::Max(ProjectedDistance, LastCommittedDistance - MaximumResumeBacktrack);
        }
        else
        {
            ProjectedDistance = FMath::Min(ProjectedDistance, LastCommittedDistance + MaximumResumeBacktrack);
        }
    }

    CurrentDistanceAlongSpline = FMath::Clamp(ProjectedDistance, 0.0f, Length);
    LastCommittedDistance = CurrentDistanceAlongSpline;
    bHasCommittedProgress = true;
    BroadcastProgress();
    return true;
}

bool URenegadeSplineFollowerComponent::SetRouteDistance(
    const float NewDistanceAlongSpline,
    const bool bImmediatelyMove)
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !IsValid(AssignedPath))
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return false;
    }

    if (AssignedPath->IsClosedLoop())
    {
        CurrentDistanceAlongSpline = FMath::Fmod(NewDistanceAlongSpline, Length);
        if (CurrentDistanceAlongSpline < 0.0f)
        {
            CurrentDistanceAlongSpline += Length;
        }
    }
    else
    {
        CurrentDistanceAlongSpline = FMath::Clamp(NewDistanceAlongSpline, 0.0f, Length);
    }

    LastCommittedDistance = CurrentDistanceAlongSpline;
    bHasCommittedProgress = true;
    BroadcastProgress();

    if (bImmediatelyMove && IsActivelyFollowing())
    {
        ActiveMoveRequestId = FAIRequestID::InvalidRequest;
        if (ResolveOwnerAndController())
        {
            CachedAIController->StopMovement();
        }
        ScheduleNextMove(0.0f);
    }

    return true;
}

bool URenegadeSplineFollowerComponent::IsActivelyFollowing() const
{
    return FollowState == ERenegadeSplineFollowState::Following ||
           FollowState == ERenegadeSplineFollowState::Reacquiring;
}

float URenegadeSplineFollowerComponent::GetNormalizedRouteProgress() const
{
    if (!IsValid(AssignedPath))
    {
        return 0.0f;
    }

    const float Length = AssignedPath->GetRouteLength();
    if (Length <= UE_KINDA_SMALL_NUMBER)
    {
        return 0.0f;
    }

    const float RawProgress = FMath::Clamp(CurrentDistanceAlongSpline / Length, 0.0f, 1.0f);
    return TravelDirection == ERenegadeSplineTravelDirection::Forward ? RawProgress : 1.0f - RawProgress;
}

void URenegadeSplineFollowerComponent::ClearRuntimeTimers()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(NextMoveTimerHandle);
        World->GetTimerManager().ClearTimer(CombatResumeTimerHandle);
        World->GetTimerManager().ClearTimer(AutoStartTimerHandle);
    }
}

void URenegadeSplineFollowerComponent::ScheduleNextMove(const float DelaySeconds)
{
    if (!GetWorld() || FollowState != ERenegadeSplineFollowState::Following)
    {
        return;
    }

    GetWorld()->GetTimerManager().ClearTimer(NextMoveTimerHandle);

    if (DelaySeconds <= 0.0f)
    {
        NextMoveTimerHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(
            this,
            &URenegadeSplineFollowerComponent::IssueNextMove);
    }
    else
    {
        GetWorld()->GetTimerManager().SetTimer(
            NextMoveTimerHandle,
            this,
            &URenegadeSplineFollowerComponent::IssueNextMove,
            DelaySeconds,
            false);
    }
}


void URenegadeSplineFollowerComponent::TryAutoStart()
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || !bAutoStart || !IsValid(AssignedPath))
    {
        return;
    }

    if (StartFollowing(AssignedPath, true))
    {
        AutoStartElapsed = 0.0f;
        return;
    }

    // AI possession can occur just after BeginPlay for dynamically spawned pawns.
    constexpr float RetryInterval = 0.2f;
    constexpr float MaximumWait = 5.0f;
    AutoStartElapsed += RetryInterval;

    if (AutoStartElapsed < MaximumWait && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(
            AutoStartTimerHandle,
            this,
            &URenegadeSplineFollowerComponent::TryAutoStart,
            RetryInterval,
            false);
    }
}

void URenegadeSplineFollowerComponent::IssueNextMove()
{
    if (!GetOwner() || !GetOwner()->HasAuthority() || FollowState != ERenegadeSplineFollowState::Following)
    {
        return;
    }

    if (!IsValid(AssignedPath) || !AssignedPath->IsTeamAllowed(TeamId) || !ResolveOwnerAndController())
    {
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return;
    }

    if (IsAtEndOfOpenRoute(CurrentDistanceAlongSpline))
    {
        CompleteRoute();
        return;
    }

    PendingTargetDistance = AdvanceDistance(CurrentDistanceAlongSpline, GetEffectiveLookAheadDistance());
    CurrentMoveGoal = AssignedPath->GetRouteLocationAtDistance(PendingTargetDistance, LaneOffset);

    if (bDrawDebug && GetWorld() && OwnerPawn.IsValid())
    {
        DrawDebugSphere(GetWorld(), CurrentMoveGoal, 28.0f, 12, FColor::Cyan, false, 2.0f, 0, 2.0f);
        DrawDebugLine(GetWorld(), OwnerPawn->GetActorLocation(), CurrentMoveGoal, FColor::Cyan, false, 2.0f, 0, 1.5f);
    }

    FAIMoveRequest MoveRequest;
    MoveRequest.SetGoalLocation(CurrentMoveGoal);
    MoveRequest.SetAcceptanceRadius(AcceptanceRadius);
    MoveRequest.SetUsePathfinding(bUsePathfinding);
    MoveRequest.SetProjectGoalLocation(bProjectGoalsToNavigation);
    MoveRequest.SetAllowPartialPath(bAllowPartialPaths);
    MoveRequest.SetCanStrafe(bCanStrafe);
    MoveRequest.SetReachTestIncludesAgentRadius(bStopOnOverlap);

    const FPathFollowingRequestResult RequestResult = CachedAIController->MoveTo(MoveRequest);
    ActiveMoveRequestId = RequestResult.MoveId;

    switch (RequestResult.Code)
    {
        case EPathFollowingRequestResult::RequestSuccessful:
            break;

        case EPathFollowingRequestResult::AlreadyAtGoal:
            CurrentDistanceAlongSpline = PendingTargetDistance;
            LastCommittedDistance = CurrentDistanceAlongSpline;
            ConsecutiveMoveFailures = 0;
            BroadcastProgress();
            ScheduleNextMove(SegmentDelay);
            break;

        case EPathFollowingRequestResult::Failed:
        default:
            HandleMoveRequestFailure();
            break;
    }
}

void URenegadeSplineFollowerComponent::HandleMoveFinished(
    const FAIRequestID RequestId,
    const FPathFollowingResult& Result)
{
    if (RequestId != ActiveMoveRequestId)
    {
        return;
    }

    ActiveMoveRequestId = FAIRequestID::InvalidRequest;

    // Combat and explicit stop intentionally abort the active request.
    if (FollowState == ERenegadeSplineFollowState::CombatPaused ||
        FollowState == ERenegadeSplineFollowState::Idle ||
        FollowState == ERenegadeSplineFollowState::Completed ||
        FollowState == ERenegadeSplineFollowState::Disabled)
    {
        return;
    }

    if (Result.IsSuccess())
    {
        CurrentDistanceAlongSpline = PendingTargetDistance;
        LastCommittedDistance = CurrentDistanceAlongSpline;
        ConsecutiveMoveFailures = 0;
        BroadcastProgress();

        if (IsAtEndOfOpenRoute(CurrentDistanceAlongSpline))
        {
            CompleteRoute();
        }
        else
        {
            ScheduleNextMove(SegmentDelay);
        }
        return;
    }

    if (Result.IsInterrupted())
    {
        // Another system used the controller without first pausing this component.
        // Yield permanently until ResumeFollowing is explicitly called, avoiding movement tug-of-war.
        SetFollowState(ERenegadeSplineFollowState::Suspended);
        return;
    }

    HandleMoveRequestFailure();
}

void URenegadeSplineFollowerComponent::HandleMoveRequestFailure()
{
    ++ConsecutiveMoveFailures;
    OnMoveFailure.Broadcast(ConsecutiveMoveFailures, CurrentMoveGoal);

    if (ConsecutiveMoveFailures > MaximumConsecutiveMoveFailures)
    {
        SetFollowState(ERenegadeSplineFollowState::Blocked);
        return;
    }

    // Reproject after failures in case avoidance or physics displaced the pawn.
    ReacquireRouteFromCurrentLocation();
    ScheduleNextMove(FailedMoveRetryDelay);
}

void URenegadeSplineFollowerComponent::CompleteRoute()
{
    ClearRuntimeTimers();
    ActiveMoveRequestId = FAIRequestID::InvalidRequest;
    SetFollowState(ERenegadeSplineFollowState::Completed);
    BroadcastProgress();
    OnRouteCompleted.Broadcast(AssignedPath);
}

void URenegadeSplineFollowerComponent::SetFollowState(const ERenegadeSplineFollowState NewState)
{
    if (FollowState == NewState)
    {
        return;
    }

    const ERenegadeSplineFollowState PreviousState = FollowState;
    FollowState = NewState;
    OnFollowStateChanged.Broadcast(PreviousState, FollowState);
}

void URenegadeSplineFollowerComponent::BroadcastProgress()
{
    OnRouteProgress.Broadcast(CurrentDistanceAlongSpline, GetNormalizedRouteProgress());
}

void URenegadeSplineFollowerComponent::UnbindCombatTarget()
{
    if (AActor* CombatTarget = ActiveCombatTarget.Get())
    {
        CombatTarget->OnDestroyed.RemoveDynamic(this, &URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed);
    }
}

float URenegadeSplineFollowerComponent::GetEffectiveLookAheadDistance() const
{
    const float FailureScale = FMath::Pow(0.65f, static_cast<float>(ConsecutiveMoveFailures));
    return FMath::Max(MinimumLookAheadDistance, LookAheadDistance * FailureScale);
}

float URenegadeSplineFollowerComponent::AdvanceDistance(
    const float FromDistance,
    const float DeltaDistance) const
{
    if (!IsValid(AssignedPath))
    {
        return FromDistance;
    }

    const float Length = AssignedPath->GetRouteLength();
    const float SignedDelta = TravelDirection == ERenegadeSplineTravelDirection::Forward
        ? DeltaDistance
        : -DeltaDistance;

    float NewDistance = FromDistance + SignedDelta;

    if (AssignedPath->IsClosedLoop() && Length > UE_KINDA_SMALL_NUMBER)
    {
        NewDistance = FMath::Fmod(NewDistance, Length);
        if (NewDistance < 0.0f)
        {
            NewDistance += Length;
        }
        return NewDistance;
    }

    return FMath::Clamp(NewDistance, 0.0f, Length);
}

bool URenegadeSplineFollowerComponent::IsAtEndOfOpenRoute(const float DistanceAlongSpline) const
{
    if (!IsValid(AssignedPath) || AssignedPath->IsClosedLoop())
    {
        return false;
    }

    const float Length = AssignedPath->GetRouteLength();
    return TravelDirection == ERenegadeSplineTravelDirection::Forward
        ? DistanceAlongSpline >= Length - RouteEndTolerance
        : DistanceAlongSpline <= RouteEndTolerance;
}

void URenegadeSplineFollowerComponent::HandleCombatTargetDestroyed(AActor* DestroyedActor)
{
    if (DestroyedActor == ActiveCombatTarget.Get() && FollowState == ERenegadeSplineFollowState::CombatPaused)
    {
        SetCombatActive(false, nullptr, -1.0f);
    }
}

void URenegadeSplineFollowerComponent::ResumeAfterCombatDelay()
{
    ResumeFollowing(true);
}

void URenegadeSplineFollowerComponent::OnRep_FollowState(const ERenegadeSplineFollowState PreviousState)
{
    OnFollowStateChanged.Broadcast(PreviousState, FollowState);
}
