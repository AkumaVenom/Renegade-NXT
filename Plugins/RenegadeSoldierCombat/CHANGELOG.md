# Changelog

## 1.1.3 - UE5.8 Compile Fix

- Fixed UE5.8 compiler errors caused by directly reading private `USkeletalMeshComponent` members.
- Ragdoll state capture now uses the public `GetAllowAnimDynamicsAnimNode()` and `GetAllowRigidBodyAnimNode()` accessors.
- Preserves each mesh's original AnimDynamics and RigidBody AnimGraph-node allow state across ragdoll and respawn.
- No Blueprint setup changes are required.

## 1.1.2 - Anti-Stretch Ragdoll Stability

- Fixed modular soldiers stretching when the selected ragdoll mesh is a Leader Pose follower.
- Ragdoll selection now resolves followers to the leader/body mesh automatically.
- Added Blueprint settings for a stable ragdoll root bone (`pelvis` by default).
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
