# Changelog

## 1.4.4 - Team-Aware EVA Building Announcements and Low-Health State

- Added per-listener team-aware EVA/CABAL sound routing for all building announcements.
- Added separate GDI-friendly, GDI-enemy, Nod-friendly, and Nod-enemy sound slots for building under-attack events.
- Added the same four team-perspective sound slots for building low-health/imminent-destruction warnings and destroyed announcements.
- Every listening client selects the correct voice and friendly/enemy wording from its locally controlled player combat component and the damaged building's team.
- Kept the existing generic `Under Attack Sound` and `Destroyed Sound` values as backward-compatible fallbacks, and added a generic low-health warning fallback.
- Added replicated `Is Low Health` building state with exposed threshold and repair hysteresis settings.
- Added `On Building Low Health Changed` Blueprint event with low-health state, health percentage, and damage causer.
- Added `Is Building Low Health` Blueprint query.
- Low-health warnings fire only when crossing into the configured low-health range and reset after sufficient repair.
- Upgraded the world audio lock into one prioritized building EVA channel: ordinary under-attack lines do not overlap, low-health warnings may interrupt them, and destroyed announcements have highest priority.
- Added optional always-relevant building networking so friendly and enemy base announcements can reach players across the map.
- Preserved AGT rockets, Obelisk charge/damage/Niagara/Cascade visuals and cleanup, team power, building targeting, player combat, NPC combat, bullet visuals, blood, ragdoll, and respawning.

## 1.4.3 - Deterministic Obelisk Laser Activation and Cleanup

- Fixed looping Cascade Obelisk beams remaining permanently visible after firing.
- Added exposed `Laser Visual Lifetime Seconds` to control exactly how long each laser visual remains active.
- Cascade laser components are now created with auto activation disabled, fully configured with trace endpoints, transform, and scale, and only then activated.
- Removed the pre-activation window that could briefly display a Cascade asset's authored default beam before the first valid shot.
- Cascade cleanup now forcibly deactivates the system, kills remaining particles, clears its template, and destroys the temporary runtime component.
- Niagara laser visuals now use deterministic lifetime cleanup instead of relying on the authored system to stop itself.
- A new Obelisk shot removes any previous active laser visual before spawning the next one, preventing overlaps and accumulated looping beams.
- Optional Blueprint laser-effect actors now receive the same configured lifetime through Actor lifespan.
- Preserved the working Obelisk charge, trace, damage, kill, sound, endpoint alignment, scale controls, AGT defence, building warfare, player combat, and NPC combat.

## 1.4.2 - Automatic Cascade Trace Alignment and Laser Scaling

- Fixed the Obelisk Cascade effect spawning without visually reaching the authoritative damage-trace endpoint.
- Cascade source and target points are now applied automatically regardless of the legacy v1.4.1 checkbox value.
- Cascade endpoints are written before activation and again after activation for compatibility with native Beam TypeData emitters.
- Added automatic trace-length fitting for fixed-length or non-beam Cascade particle assets.
- Added exposed `Laser Visual Scale` XYZ control.
- Added independent `Laser Length Scale Multiplier` and `Laser Thickness Scale Multiplier` controls.
- Added exposed `Laser Visual Rotation Offset` for effects authored along an axis other than local +X.
- Kept `Authored Laser Length` exposed so transform-fitted effects terminate at the confirmed trace endpoint.
- Added safe upgrade handling so newly introduced scale fields cannot deserialize as zero and make the effect invisible.
- Preserved the working server-authoritative Obelisk targeting, charge timing, damage, kills, sounds, Niagara fallback, AGT defence, building health, player combat, and NPC combat.

## 1.4.1 - Cascade Obelisk Laser Fallback

- Added classic Cascade `Particle System` support for the Obelisk laser.
- Added exposed `Particle System Preference` with Niagara-first or Cascade-first fallback order.
- Added `Laser Cascade Particle System` asset selection.
- Added Cascade beam source/target assignment through emitter, source, and target indices.
- Added optional Cascade vector instance parameter names for assets driven by named start/end vectors.
- Cascade effects receive the same trace-facing rotation and optional +X distance scaling as Niagara.
- Preserved the existing Blueprint laser-effect actor as an optional additional presentation layer.
- Preserved all v1.4.0 building health, infantry building targeting, AGT rockets, Obelisk damage, power dependency, under-attack audio serialization, player combat, and NPC combat.

## 1.4.0 - Building Warfare, AGT Rockets, and Obelisk Laser

- Added `Renegade Building Combat Component` for all GDI/Nod building Blueprint actors.
- Added building types for Refinery, Barracks, Silo, Hand of Nod, Weapons Factory, Power Plant, Helipad, Repair Pad, Airstrip, Obelisk, Advanced Guard Tower, Generic, and custom use.
- Added replicated building team, health, destruction state, repair/restoration, targetability, defence target, Obelisk charging, and team-power state.
- Added Blueprint health, under-attack, destroyed, restored, defence-target, defence-fired, and team-power events.
- Expanded AI infantry target acquisition to include hostile buildings through the existing world registry.
- Added exposed infantry policies for ignoring buildings, attacking buildings only when no soldier is available, comparing closest targets, or preferring buildings.
- Expanded player and AI shot hierarchy resolution so attached building meshes redirect point damage to the owning building actor.
- Added global per-world/client under-attack audio serialization so several damaged buildings cannot overlap announcer sounds.
- Added AGT dual server traces, two selectable rocket muzzle Scene Components/tags, per-rocket damage, range, cadence, spread, fire sound, pooled visual rocket meshes, impact effect actors, and debug traces.
- Added Obelisk target acquisition, configurable charge time, separate charge and shoot sounds, post-charge server damage trace, and automatic reacquisition.
- Added Fab Niagara laser support with exposed start/end parameter names, Position or Vector3 parameter type, trace-facing rotation, optional +X distance scaling, and Blueprint actor visual fallback.
- Added optional team Power Plant dependency for AGT/Obelisk operation.
- Added defence target selection by closest enemy, lowest health, or random enemy.
- Added preview nodes for AGT rocket travel and Obelisk laser effects.
- Added `Docs/Building_Warfare.md` with full Blueprint, collision, Niagara, audio, power, debugging, and performance setup.
- Preserved all v1.3.4 player input, aiming, hit registration, NPC combat, bullet visuals, blood, ragdoll, spline integration, and respawning.

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
