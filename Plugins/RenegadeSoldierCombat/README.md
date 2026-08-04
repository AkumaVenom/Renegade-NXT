# Renegade NXT Soldier Combat — UE 5.8

**Plugin version: 1.1.0**

A Blueprint-first runtime plugin for automatic GDI/Nod NPC infantry combat.

## Main features

- One reusable Actor Component works on multiple Character Blueprint classes.
- Team-aware automatic target acquisition using a world combatant registry.
- Automatic rifle, pistol, or custom weapon profiles.
- Server-authoritative hitscan fire, point damage, range falloff, critical bones, bursts, magazines, and reloads.
- Blueprint events for muzzle particles, tracers, impacts, sounds, animations, reloads, death, and respawn.
- Combat movement that advances, retreats, strafes, and searches the last-known enemy location on NavMesh.
- Optional fixed combat-facing rotation keeps the soldier looking at its current enemy while moving in any direction.
- Clean pause/resume bridge for the Renegade NXT spline navigation plugin.
- Automatic ragdoll on death with hit-direction impulse.
- Same-actor respawning: the soldier is never destroyed by this plugin.
- Original-transform, custom-transform, or team spawn-point respawning.
- Replicated health, target, team, ammo, death state, ragdoll/respawn RPCs, and shot cosmetic RPCs.

## Anti-Stretch Ragdoll (v1.1.2)

For modular soldiers, tag the main body/leader Skeletal Mesh with `CombatRagdollMesh`. The plugin now resolves Leader Pose follower parts back to the leader automatically. Keep **Resolve Leader Pose Mesh For Ragdoll**, **Use Ragdoll Root Bone**, and **Disable Secondary Animation During Ragdoll** enabled. The default root bone is `pelvis`; change it to `hips`, `Hip`, or your skeleton's first central physics bone when needed.

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
