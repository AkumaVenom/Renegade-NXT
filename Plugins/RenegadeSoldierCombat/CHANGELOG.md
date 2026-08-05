# Changelog

## 1.2.1

- Added a Blueprint/Details-panel selectable **Bullet Visual Spawn Component** using Unreal's component picker.
- Added **Bullet Visual Spawn Relative Offset** in the selected component's local space.
- Added **Bullet Visual Spawn Component Tag** as a simple fallback for modular or dynamically assembled soldiers.
- Added Blueprint nodes: **Set Bullet Visual Spawn Component**, **Clear Bullet Visual Spawn Component**, **Get Bullet Visual Spawn Component**, **Get Bullet Visual Spawn Location**, and **Preview Bullet Mesh From Configured Spawn**.
- Bullet visuals now travel from the configured Scene Component to the authoritative trace end; damage and line tracing remain unchanged and server authoritative.
- Existing muzzle socket/trace-start behavior remains the fallback when no Scene Component is selected.

## 1.2.0 - Pooled Bullet Meshes and Ground Blood

- Added an automatic pooled static-mesh bullet visual that travels from the configured muzzle socket to the authoritative hitscan trace end.
- Bullet visuals are cosmetic only; damage, spread, line traces, and hit results remain server authoritative.
- Added per-soldier bullet component pooling with a configurable cap, no collision, no navigation influence, and optional shadow/material/rotation controls.
- Added automatic ground blood placement after successful combat-character hits.
- Supports random Deferred Decal materials and an optional local Blueprint effect actor for existing blood assets.
- Ground blood aligns to the traced surface normal and exposes size, rotation, surface offset, lifetime, fade, spawn chance, collision channel, and throttle settings.
- Added optional blood timing delay so the splatter appears when the visible bullet reaches the impact point.
- Added Blueprint preview nodes for bullet travel and ground-blood placement.
- Added `On Ground Blood Spawned` for additional Blueprint-controlled effects.
- Refactored component ticking so client-side bullet visuals can continue travelling without interfering with server combat-facing rotation.
- Removed a duplicate replication superclass call found during the visual-system update.
- Updated the default Renegade NXT ragdoll root bone to `spine`, matching the working soldier Physics Assets.

## 1.1.3 - UE5.8 Compile Fix

- Fixed UE5.8 compiler errors caused by directly reading private `USkeletalMeshComponent` members.
- Ragdoll state capture now uses the public `GetAllowAnimDynamicsAnimNode()` and `GetAllowRigidBodyAnimNode()` accessors.
- Preserves each mesh's original AnimDynamics and RigidBody AnimGraph-node allow state across ragdoll and respawn.
- No Blueprint setup changes are required.

## 1.1.2 - Anti-Stretch Ragdoll Stability

- Fixed modular soldiers stretching when the selected ragdoll mesh is a Leader Pose follower.
- Ragdoll selection now resolves followers to the leader/body mesh automatically.
- Added Blueprint settings for a stable ragdoll root bone (`spine` by default for Renegade NXT).
- Uses `SetAllBodiesBelowSimulatePhysics` for humanoid ragdolls instead of blindly enabling every helper/root body.
- Temporarily disables cloth, AnimDynamics, RigidBody AnimGraph nodes, and post-process animation while dead.
- Restores all secondary-animation settings during same-actor respawn.
- Added validation for unresolved Leader Pose followers and invalid zero-scale meshes.


## 1.1.1

- Fixed automatic ragdoll selection for soldiers that use a child or modular Skeletal Mesh Component instead of the Character default Mesh.
- Added `Ragdoll Mesh Component Tag` so Blueprints can select the exact mesh to simulate.
- Added automatic fallback to a skeletal mesh that has a usable Physics Asset.
- Added `Validate Ragdoll Setup`, returning a precise Blueprint-readable failure reason.
- Added Output Log diagnostics when the mesh, Skeletal Mesh asset, Physics Asset, or physics bodies are missing.
- Added full physics pose blending during ragdoll and safe reset during same-actor respawn.
- Invalid hit-bone names now safely apply impulse to the whole ragdoll.

## 1.1.0

- Added Blueprint-exposed `bLockCombatRotationToCurrentTarget`, enabled by default.
- Added `CombatTargetRotationSpeedDegrees` for smooth or instant target-facing rotation.
- Added Blueprint callable `SetCombatRotationLockEnabled`.
- Soldiers can now advance, retreat, and strafe while their body yaw remains fixed toward the active enemy.
- Original Character Movement and controller-yaw settings are restored after combat, death, stop, and spline resume.
- Combat-facing state is server authoritative and works with existing replicated Character movement.

## 1.0.0

- Initial automatic team combat, weapon fire, damage, combat movement, ragdoll death, and same-actor respawn release.
