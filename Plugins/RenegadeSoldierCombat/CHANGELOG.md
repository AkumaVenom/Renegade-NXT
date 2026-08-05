# Changelog

## 1.3.4 - Editable Player Input and Aim Defaults

- Fixed the complete Player Input and Player Aim Presentation settings being greyed out whenever `Player Controlled Combat` was disabled.
- Removed the parent-level Details-panel edit condition from the input, aim-presentation, aim-camera component, and aim-camera tag properties.
- Keyboard, mouse, gamepad, sensitivity, dead-zone, inversion, aim FOV, rotation, and camera settings can now be configured before enabling player combat or while editing shared parent Blueprints.
- Kept the internal child conditions: look settings still depend on `Enable Built-In Input` and `Enable Built-In Look Input`, while zoom subsettings still depend on the appropriate aim-presentation switches.
- Runtime behaviour is unchanged: the input system only processes controls when `Player Controlled Combat` is enabled on the active player component.
- Preserved v1.3.3 player hit registration, shot debugging, bullet visuals, blood splatter, aiming, AI combat, ragdoll, and respawning.

## 1.3.3 - Player Hit Registration and Shot Debugging

- Fixed player muzzle traces being blocked by attached weapon, armour, or Child Actor equipment owned by the firing Character.
- Player and AI weapon traces now ignore the complete firing-actor attachment hierarchy.
- Fixed hit registration when a trace strikes an attached child actor or equipment actor instead of the Character actor itself.
- Added an enabled-by-default combat-target object trace fallback (`Pawn` by default) so player shots can hit Character capsules even when they do not block the selected weapon trace channel.
- Combat targets are now resolved through attachment, owner, and instigator chains, and point damage is applied to the resolved Character/combat owner.
- Added a safe default `UDamageType` when a weapon profile does not specify one.
- Added exposed `Draw Debug Shot Line`, duration, thickness, impact-point, hit, blocked, and miss colour settings.
- Debug traces display the exact authoritative muzzle trace and log the raw hit actor, resolved damage actor, and applied damage.
- Preserved player aiming, input, bullet mesh travel, blood splatter, ragdoll, AI combat, and respawning.

## 1.3.2 - Polished Player Aim Presentation

- Fixed player aim doing only a replicated Boolean/spread change with no visible camera or Character response.
- Added camera-facing Character yaw while aiming, maintained every frame on the owning player and authority.
- Temporarily disables orient-to-movement and applies controller desired rotation/controller yaw; all original Character Movement settings are restored afterward.
- Added smooth exposed FOV zoom with separate zoom-in/zoom-out interpolation speeds and an exposed aimed FOV.
- Added selectable `Player Aim Camera Component`, camera-component tag fallback, active-camera auto-detection, runtime camera override nodes, and PlayerCameraManager fallback.
- Added `Get Player Aim Alpha`, `Snap Player Character To Aim Forward`, and `Restore Player Aim Presentation` Blueprint nodes.
- Aim presentation now restores safely on aim release, death, ragdoll, respawn, input shutdown, camera changes, and EndPlay.
- Manual Blueprint aim nodes and built-in mouse/gamepad aim input now use the same complete presentation path.
- Preserved server-authoritative shooting, bullet mesh travel, blood splatter, rifle/pistol ammo, ragdoll, and custom respawning.

## 1.3.1

- Added optional self-contained keyboard/mouse and gamepad input polling for player combat.
- Added exposed FKey bindings for fire, aim, reload, automatic rifle and pistol selection.
- Added exposed mouse and right-stick look axes, sensitivity, gamepad speed, dead zone and inversion settings.
- Added replicated player aiming state, `On Player Aim Changed`, Blueprint aim controls and aimed-spread multiplier.
- Added hold/toggle aim, require-aim-to-fire, pause/menu input blocking and runtime built-in-input enable/disable.
- Preserved all v1.3.0 AI combat, player hitscan, bullet visuals, blood, ragdoll and respawn behaviour.

## 1.3.0 - Player Combat, Rifle/Pistol Input, and Expanded Respawning

- Added exposed `Player Controlled Combat` mode to the existing combat component.
- Player mode disables automatic targeting, AI firing, combat movement, and spline takeover while keeping the player registered as a valid hostile target.
- Added Blueprint input nodes for automatic-rifle held fire, pistol single fire, generic fire, stop fire, reload, and weapon selection.
- Added separate inline/profile settings and independent magazine ammunition for the player's automatic rifle and pistol.
- Added replicated active player weapon, rifle ammo, pistol ammo, and Blueprint weapon/ammo events for HUD and equipment logic.
- Added server-authoritative player shot requests with cadence, ammunition, client camera-origin, and aim-angle validation.
- Added camera-to-crosshair aiming followed by a muzzle-to-aim obstruction trace to prevent shooting through close cover.
- Player shots reuse the existing pooled bullet mesh, selectable muzzle Scene Component, hit damage, critical bones, ground blood, ragdoll, and death logic.
- Added automatic-rifle reload pause/resume support while the local trigger remains held.
- Added Custom Transform List respawns with First, Random, and Sequential selection.
- Added respawning at level actors carrying a configurable Actor Tag.
- Added runtime respawn transform override and Blueprint nodes for managing custom respawn transforms.
- Added respawn vertical offset, controller rotation restoration, and `On Respawn Transform Selected`.
- Added `Docs/Player_Combat.md` with Enhanced Input and multiplayer setup.

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
