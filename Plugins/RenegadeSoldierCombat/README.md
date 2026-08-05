# Renegade NXT Soldier Combat — UE 5.8

**Plugin version: 1.2.1**

A Blueprint-first runtime plugin for automatic GDI/Nod NPC infantry combat.

## Main features

- One reusable Actor Component works on multiple Character Blueprint classes.
- Team-aware automatic target acquisition using a world combatant registry.
- Automatic rifle, pistol, or custom weapon profiles.
- Server-authoritative hitscan fire, point damage, range falloff, critical bones, bursts, magazines, and reloads.
- Blueprint events for muzzle particles, impacts, sounds, animations, reloads, death, and respawn.
- Automatic pooled bullet-mesh visuals travelling from a selectable Scene Component (or muzzle fallback) to the authoritative trace end.
- Automatic ground blood decals/effect actors when a combat soldier is successfully hit.
- Combat movement that advances, retreats, strafes, and searches the last-known enemy location on NavMesh.
- Optional fixed combat-facing rotation keeps the soldier looking at its current enemy while moving in any direction.
- Clean pause/resume bridge for the Renegade NXT spline navigation plugin.
- Automatic ragdoll on death with hit-direction impulse.
- Same-actor respawning: the soldier is never destroyed by this plugin.
- Original-transform, custom-transform, or team spawn-point respawning.
- Replicated health, target, team, ammo, death state, ragdoll/respawn RPCs, and shot cosmetic RPCs.

## Bullet mesh and ground blood (v1.2.1)

Open the soldier Blueprint, select **Renegade Soldier Combat Component**, and expand **Renegade NXT | Combat Visuals**.

### Bullet visual

- Enable `Enable Bullet Mesh Visual`.
- Assign your bullet static mesh to `Bullet Mesh`.
- The plugin assumes the mesh points along local **+X**. Use `Bullet Mesh Rotation Offset` when your asset points along Y or Z.
- `Bullet Visual Speed` controls only the visible travel. Damage remains immediate, server-authoritative hitscan.
- Bullet components are pooled per soldier, have collision disabled, do not affect navigation, and cast no shadow by default.
- `Bullet Visual Pool Size` defaults to 6, which is suitable for automatic rifles without constantly creating and destroying components.

### Ground blood

- Enable `Enable Ground Blood Splatter`.
- Add one or more Deferred Decal materials to `Ground Blood Decal Materials`. A material is chosen randomly for each splatter.
- Alternatively, assign `Ground Blood Effect Actor Class` to a non-replicated Blueprint actor containing your blood decal, Niagara system, or other local effect. If both are assigned, both are spawned.
- The plugin traces downward from the bullet impact, ignores the damaged soldier, aligns the effect to the ground normal, and randomises rotation and size.
- Blood is only requested for a successfully damaged actor that has this combat component, so shots into rocks and buildings do not produce blood.
- `Delay Ground Blood Until Bullet Arrives` keeps the blood timing synchronised with the moving bullet mesh.
- Ground blood has configurable chance, trace distance, size, lifespan, fade, and per-soldier throttling.

For a 40-soldier battle, start with `Bullet Visual Pool Size = 4-6`, bullet shadows disabled, `Ground Blood Life Seconds = 12-20`, and `Minimum Seconds Between Ground Blood = 0.15-0.25` if decal counts become excessive.

## Anti-Stretch Ragdoll (v1.1.2)

For modular soldiers, tag the main body/leader Skeletal Mesh with `CombatRagdollMesh`. The plugin now resolves Leader Pose follower parts back to the leader automatically. Keep **Resolve Leader Pose Mesh For Ragdoll**, **Use Ragdoll Root Bone**, and **Disable Secondary Animation During Ragdoll** enabled. The Renegade NXT soldier assets currently use `spine` as the working ragdoll root. Keep that value for these soldiers; other skeletons can use their first central physics body.

If the body still stretches inside the Physics Asset Editor's Simulate mode, the Physics Asset itself has mismatched bodies/constraints or was generated for a different skeleton; runtime code cannot repair that asset.

## Installation

1. Copy the `RenegadeSoldierCombat` folder into your project's `Plugins` folder.
2. Right-click the `.uproject` and regenerate Visual Studio project files.
3. Build the project for Unreal Engine 5.8.
4. Open the editor and enable **Renegade NXT Soldier Combat** if it is not already enabled.

See `Docs/Blueprint_Setup.md` for the required soldier Blueprint setup.

## Version 1.1.0 — Combat target rotation lock

A new Blueprint-exposed `Lock Combat Rotation To Current Target` boolean is enabled by default. While a valid enemy is targeted, the plugin temporarily disables orientation-to-movement, uses combat controller yaw, and continuously rotates the body toward that enemy. Advancing, retreating, strafing, firing, ragdoll death, respawn, and spline resume continue to work normally. The soldier's original Character and Character Movement rotation settings are restored when combat ends.

## Ragdoll setup and v1.1.1 diagnostics

Enabling `Automatic Ragdoll` allows the plugin to start ragdoll, but the selected Skeletal Mesh must also have a Physics Asset containing physics bodies. Version 1.1.2 automatically searches modular soldier actors for a usable skeletal mesh. For an exact selection, add a Component Tag such as `CombatRagdollMesh` to the intended Skeletal Mesh Component and enter the same value in `Ragdoll Mesh Component Tag`.

Use the Blueprint node `Validate Ragdoll Setup` at Begin Play while testing. It returns `true` when ready, or a precise failure string that can be connected to Print String. Ragdoll setup failures are also written to the Output Log under `LogRenegadeSoldierCombat`.

## UE5.8 Compile Fix (v1.1.3)

Version 1.1.3 replaces direct access to private skeletal-mesh animation flags with the supported public getter APIs. This fixes `C2248` errors for `bDisableAnimDynamicsAnimNode` and `bDisableRigidBodyAnimNode` on UE5.8.1. No Blueprint changes are required.


## Selectable bullet spawn component (v1.2.1)

1. In the soldier Blueprint, add a **Scene Component** and name it `BulletSpawn`.
2. Attach it to the weapon mesh or hand/weapon socket and position it at the barrel muzzle.
3. Select the **Renegade Soldier Combat Component**.
4. Open **Renegade NXT > Combat Visuals > Bullet Spawn**.
5. Set **Bullet Visual Spawn Component** to `BulletSpawn`.
6. Use **Bullet Visual Spawn Relative Offset** for final local-space alignment.

At runtime, Blueprints can instead call **Set Bullet Visual Spawn Component** and pass any Scene Component owned by that same soldier. The selected component affects only the visible bullet mesh; the authoritative hitscan and damage logic remain unchanged.
