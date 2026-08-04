#include "RenegadeSplineAIBlueprintLibrary.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "RenegadeSplinePath.h"

ARenegadeSplinePath* URenegadeSplineAIBlueprintLibrary::FindNearestCompatiblePath(
    const UObject* WorldContextObject,
    const FVector WorldLocation,
    const int32 TeamId,
    const FName RequiredRouteGroup,
    const float MaxSearchDistance)
{
    if (!IsValid(WorldContextObject) || !GEngine)
    {
        return nullptr;
    }

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
    if (!IsValid(World))
    {
        return nullptr;
    }

    ARenegadeSplinePath* BestPath = nullptr;
    double BestDistanceSquared = MaxSearchDistance > 0.0f
        ? FMath::Square(static_cast<double>(MaxSearchDistance))
        : TNumericLimits<double>::Max();

    for (TActorIterator<ARenegadeSplinePath> It(World); It; ++It)
    {
        ARenegadeSplinePath* Candidate = *It;
        if (!IsValid(Candidate) || !Candidate->IsTeamAllowed(TeamId))
        {
            continue;
        }

        if (!RequiredRouteGroup.IsNone() && Candidate->RouteGroup != RequiredRouteGroup)
        {
            continue;
        }

        const float RouteDistance = Candidate->GetClosestDistanceAlongRoute(WorldLocation);
        const FVector ClosestLocation = Candidate->GetRouteLocationAtDistance(RouteDistance);
        const double DistanceSquared = FVector::DistSquared(WorldLocation, ClosestLocation);

        if (DistanceSquared < BestDistanceSquared)
        {
            BestDistanceSquared = DistanceSquared;
            BestPath = Candidate;
        }
    }

    return BestPath;
}
