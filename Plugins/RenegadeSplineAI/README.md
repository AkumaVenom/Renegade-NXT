# Renegade Spline AI — UE 5.8

A server-authoritative Unreal Engine runtime plugin for infantry and other AI pawns that should **follow an authored route without being attached to the spline**.

The plugin moves an `AAIController` toward a series of NavMesh-projected look-ahead locations sampled from a spline. The pawn remains a normal Character/Pawn, so collision, avoidance, animation, combat rotation, cover logic, chasing, and weapon systems remain independent.

## Main features

- Works with any AI-controlled Pawn or Character blueprint.
- Uses normal Unreal NavMesh movement; no spline attachment or forced transforms.
- Pauses immediately for combat and yields the AI controller to your combat system.
- Resumes from the pawn's current world position by projecting back onto the route.
- Optional progress preservation prevents a soldier from accidentally restarting far behind its previous position.
- Forward, reverse, open, and closed-loop routes.
- Per-soldier lane offsets so squads do not all target the exact spline centre.
- GDI/Nod-friendly generic integer team filtering without imposing a specific team framework.
- Route groups and nearest-compatible-route lookup for wave spawners.
- Failure recovery with reduced look-ahead distance and bounded retries.
- Multiplayer-safe authority model with replicated state/progress for observation.
- Blueprint delegates for state changes, progress, completion, and blocked movement.

## Installation

1. Close Unreal Editor.
2. Copy the `RenegadeSplineAI` folder into:
   `YourProject/Plugins/RenegadeSplineAI`
3. Right-click the `.uproject` and generate Visual Studio project files.
4. Build the **Development Editor** target for Win64.
5. Open the project and enable **Renegade Spline AI** under **Edit > Plugins > AI** if it is not already enabled.
6. Ensure the map has a `NavMeshBoundsVolume` covering every intended route and combat area.

This is a source plugin. It has been authored against the public UE 5.8 API but cannot be binary-compiled outside your local UE 5.8 installation.

## Fast Blueprint setup

### 1. Author a route

Place `RenegadeSplinePath` in the level and edit its `RouteSpline` points.

Recommended properties:

- `Route Group`: `GDI_Main_Assault`, `Nod_Main_Assault`, `GDI_Defence`, etc.
- `Allowed Team Ids`: leave empty for any team, or use your project team integers.
- Enable **Closed Loop** on the spline only for patrol circuits.

The route itself does not create navigation. Keep it over reachable NavMesh.

### 2. Add the follower to soldier blueprints

Add `RenegadeSplineFollowerComponent` to every GDI and Nod soldier class that can use routes. The same component works on multiple unrelated character blueprints.

Useful starting values for Renegade-style infantry:

- `Look Ahead Distance`: 500–800 cm
- `Minimum Look Ahead Distance`: 150 cm
- `Acceptance Radius`: 75–110 cm
- `Route End Tolerance`: 100–150 cm
- `Default Combat Resume Delay`: 0.5–1.0 s
- `Maximum Resume Backtrack`: 400–800 cm
- `Allow Partial Paths`: false

For squad spacing, assign lane offsets such as `-140`, `-70`, `0`, `70`, `140` cm.

### 3. Start the route

At spawn or BeginPlay:

```text
Path = Find Nearest Compatible Path(
    World Location = Soldier Location,
    Team Id = Soldier Team Id,
    Required Route Group = Desired Lane Group)

SplineFollower.Start Following(Path, Reacquire From Current Location = true)
```

You can instead assign a placed path directly and enable `Auto Start`.

## Combat integration

The follower intentionally does not decide who is an enemy. Your existing Renegade NXT perception, Behavior Tree, State Tree, or combat component remains responsible for target selection.

### Enemy acquired

Call this **before** issuing chase, cover, or attack movement:

```text
SplineFollower.Set Combat Active(
    Combat Active = true,
    Combat Target = Detected Enemy)
```

This stops the active route movement and changes state to `Combat Paused`. Your combat AI can then use `AI Move To`, strafing, cover, or stationary firing without fighting the route follower for controller ownership.

### Enemy dead, invalid, or abandoned

```text
SplineFollower.Set Combat Active(
    Combat Active = false,
    Combat Target = None,
    Resume Delay Override = -1)
```

After `Default Combat Resume Delay`, the component:

1. Locates the closest point on the assigned spline to the soldier's **current** position.
2. Applies the configured resume policy.
3. Starts NavMesh movement toward a new look-ahead point.

If the combat target actor is destroyed, optional automatic resume can perform this step. For pooled enemies or health systems that do not destroy actors, explicitly send the combat-ended call.

## Behavior Tree pattern

A clean high-level selector is:

```text
Root
└─ Selector
   ├─ Combat branch (Enemy Actor is set)
   │  ├─ Call SetCombatActive(true, Enemy) once on entry
   │  └─ Existing chase / cover / attack tasks
   └─ Route branch
      ├─ Call SetCombatActive(false) once when combat clears
      └─ Keep branch alive while follower state is Following/Reacquiring
```

Do not run a repeating Blueprint `AI Move To` for the spline at the same time. The component owns route movement while in `Following`; combat owns movement while in `Combat Paused`.

If another system unexpectedly interrupts a route move without pausing first, the component enters `Suspended` instead of stealing movement back. Call `Resume Following` when that external action is finished.

## Route completion

For an open spline, `On Route Completed` fires near the final end according to travel direction. Typical uses:

- Switch an assault soldier to base attack/defence logic.
- Assign a new route.
- Hold position and scan for targets.
- Despawn AI that reached a reinforcement destination.

Closed-loop routes never complete automatically.

## Multiplayer notes

`AAIController` navigation exists on the server, so route commands are authority-only. `AssignedPath`, `FollowState`, and `CurrentDistanceAlongSpline` replicate for clients to inspect. Character movement replication remains Unreal's normal movement replication.

Call `Start Following`, `Pause For Combat`, and `Resume Following` from server-owned AI logic. If a client UI requests a route change, pass that request through your validated server RPC first.

## Important design choices

### Why short NavMesh goals instead of attaching to the spline?

Attaching or directly setting transforms can bypass navigation, collision-aware detours, Character Movement, network prediction, and combat movement. Short look-ahead goals preserve the authored direction while still allowing the soldier to move naturally around world geometry and other pawns.

### Why the component does not detect enemies

Enemy detection and combat state vary heavily between projects. Keeping perception/combat external makes the plugin compatible with GDI, Nod, neutral units, vehicles, different health systems, Behavior Trees, State Trees, and custom controllers.

### Why progress preservation is configurable

After combat, the geometrically closest spline point may be behind the soldier's previous progress—especially on routes that pass near themselves. `Preserve Progress` limits that backwards jump on open routes. `Closest Point` is better when combat is allowed to move units anywhere and exact local reacquisition matters more than previous progress.

## Troubleshooting

### Soldier does not move

- Confirm the pawn is possessed by an `AAIController`.
- Confirm a `NavMeshBoundsVolume` covers both pawn and route goals.
- Press **P** in the editor to inspect NavMesh coverage.
- Verify the route accepts the component's `Team Id`.
- Check `On Move Failure` and the `Follow State` value.

### Soldier fights the route while attacking

Call `SetCombatActive(true, Enemy)` before your combat system issues movement. If the state becomes `Suspended`, another system interrupted movement without first pausing the follower.

### Soldiers bunch together

Use different `Lane Offset` values, Character Movement avoidance, RVO, or Detour Crowd on the AI controller. Lane offsets reduce identical goals but are not a complete crowd simulation.

### Route cuts through blocked geometry

The spline is guidance, not navigation geometry. Move points onto navigable space, expand NavMesh coverage, or add nav links where traversal is valid.

## C++ API example

```cpp
if (URenegadeSplineFollowerComponent* Follower =
        Soldier->FindComponentByClass<URenegadeSplineFollowerComponent>())
{
    Follower->TeamId = SoldierTeamId;
    Follower->LaneOffset = FormationOffset;
    Follower->StartFollowing(RouteActor, true);
}

// Combat begins
Follower->SetCombatActive(true, EnemyActor);

// Combat ends
Follower->SetCombatActive(false, nullptr, 0.75f);
```

## Suggested Renegade NXT extension points

The first project-specific layer should stay outside the plugin:

- Map your GDI/Nod team enum to `TeamId`.
- Let wave spawners select `RouteGroup` by barracks/base/lane.
- Set lane offsets from squad formation slots.
- Pause the route from your current perception/combat state transition.
- On completion, switch soldiers to attack-building or base-defence behavior.
- Bind `OnMoveFailure` to telemetry so broken NavMesh sections are easy to locate during map testing.
