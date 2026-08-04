#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenegadeSplineAIBlueprintLibrary.generated.h"

class ARenegadeSplinePath;

UCLASS()
class RENEGADESPLINEAI_API URenegadeSplineAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Finds the nearest enabled route that accepts TeamId.
     * RequiredRouteGroup NAME_None accepts any route group.
     * MaxSearchDistance <= 0 means unlimited.
     */
    UFUNCTION(BlueprintCallable, Category = "Renegade Spline AI|Routing", meta = (WorldContext = "WorldContextObject"))
    static ARenegadeSplinePath* FindNearestCompatiblePath(
        const UObject* WorldContextObject,
        FVector WorldLocation,
        int32 TeamId,
        FName RequiredRouteGroup = NAME_None,
        float MaxSearchDistance = 0.0f);
};
