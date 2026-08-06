# Renegade NXT Combat and Building Warfare

> v1.5.6 fixes lock-on vertical adjustment: `Targeting > Aim Height Offset` now accepts negative values so the target point can be moved down from the configured aim bone.

**Current version: 1.4.4** — UE 5.8

A Blueprint-first runtime plugin for automatic GDI/Nod AI infantry combat, manual player rifle/pistol combat, damageable team buildings, and automated base defences.

## Main features

- Reusable `Renegade Building Combat Component` for the Refinery, Barracks, Silo, Hand of Nod, Weapons Factory, Power Plant, Helipad, Repair Pad, Airstrip, Obelisk, Advanced Guard Tower, and custom structures.
- Server-authoritative building health, damage, destruction, repair, team ownership, target registration, and replicated Blueprint events.
- Infantry building-target policies: never, only when no soldier is available, closest valid target, or prefer buildings.
- Team-perspective GDI EVA/Nod EVA building announcements for friendly and enemy under-attack, low-health, and destroyed events, serialized through one prioritized non-overlapping audio channel.
- Replicated building low-health state with threshold, repair hysteresis, Blueprint event, and imminent-destruction warning.
- Advanced Guard Tower dual traced rockets with selectable launch Scene Components, pooled rocket meshes, damage, sounds, range, cadence, spread, impact effects, and debug lines.
- Obelisk charge-and-fire sequence with selectable start component, separate charge/shoot sounds, server damage trace, Fab Niagara or classic Cascade beam support, automatic fallback order, automatic trace endpoint alignment, exposed XYZ/length/thickness scaling, rotation correction, deterministic visual lifetime cleanup, and debug lines.
- Optional Power Plant dependency that disables and restores team defensive buildings.
- One reusable Actor Component works on multiple Character Blueprint classes.
- Exposed `Player Controlled Combat` mode disables automatic AI decisions while preserving teams, health, damage, visuals, ragdoll, and respawn.
- Blueprint input nodes for held automatic-rifle fire, single-shot pistol fire, reload, and weapon selection.
- Separate player rifle/pistol profiles, magazines, replicated active weapon, ammo values, and UI events.
- Polished player aiming with camera-facing Character yaw, smooth FOV zoom, aim-state events/alpha, and server-validated muzzle-obstruction tracing.
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
- Original, team spawn-point, custom transform, custom transform list, tagged actor, and runtime-override respawning.
- Replicated health, target, team, ammo, death state, ragdoll/respawn RPCs, and shot cosmetic RPCs.


## Building warfare (v1.4.4)

Add `Renegade Building Combat Component` to each building Blueprint, set its GDI/Nod team, choose the matching building type, assign health and a target Scene Component, then assign the GDI/Nod friendly and enemy EVA variants for under attack, low health, and destroyed events. Legacy generic sounds remain available as fallbacks. Player and AI point damage now resolve attached building meshes back to the owning building component.

AGT and Obelisk types automatically select their matching defence when `Defense Type` remains None. Both use server-authoritative traces against registered hostile player/AI combatants while rocket meshes, Niagara/Cascade lasers, and sounds are multicast as cosmetic presentation. A prioritized world registry EVA channel prevents announcement overlap: low-health warnings can supersede ordinary under-attack lines, and destroyed announcements have highest priority. Each client chooses its local GDI or Nod friendly/enemy voice independently.

Set `Laser Visual Lifetime Seconds` on the Obelisk settings to control how long Niagara, Cascade, and optional Blueprint laser visuals remain visible. Looping Cascade beams are forcibly deactivated and destroyed after this duration, and a new shot clears any previous beam first.

See `Docs/Building_Warfare.md` for complete building, AGT, Obelisk, Niagara/Cascade, power, collision, event, and debugging setup.

## Player combat (v1.3.2)

> **v1.3.4 editor fix:** Player Input, gamepad sensitivity, aiming, and camera values remain editable even while `Player Controlled Combat` is unticked. The Boolean controls runtime activation only.

Enable `Player Controlled Combat` on the player Character's combat component. Keep `Register As Combat Target` enabled so enemy AI can attack the player.

Recommended Enhanced Input connections:

- Rifle Started -> `Player Start Automatic Rifle Fire`
- Rifle Completed/Canceled -> `Player Stop Automatic Rifle Fire`
- Pistol Started -> `Player Fire Pistol`
- Reload Started -> `Player Reload`

The client submits its current view ray, but the server validates aim, fire cadence, ammo, and weapon state before tracing and applying damage. A second trace from the selected muzzle Scene Component to the camera aim point prevents shooting through nearby cover. Bullet mesh and ground blood effects use the same established visual pipeline.

See `Docs/Player_Combat.md` for the full setup, weapon-switch events, HUD values, multiplayer behaviour, and custom respawn modes.

### TPS lock-on targeting (v1.5.1)

Enable `Player Lock-On > Enable Lock On` and assign `Lock On Indicator Texture`. By default, hold `Left Alt` on keyboard or `Gamepad Left Shoulder / LB` to lock the best living hostile soldier near screen centre. Lock-on automatically enters the full aim zoom/body-facing presentation while held. Normal free aim remains separate on Right Mouse Button and Gamepad Left Trigger. Targets can be switched with Q/E, D-pad Left/Right, or an optional right-stick flick.

See `Docs/Player_Lock_On.md` for acquisition, obstruction, camera, shot-assist, indicator, Enhanced Input, and Blueprint-event setup.

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

At runtime, Blueprints can instead call **Set Bullet Visual Spawn Component** and pass any Scene Component owned by that same soldier. The selected component remains the visible bullet origin. In player mode it is also used as the server-authoritative muzzle-obstruction trace origin so close cover blocks the shot correctly.


### Built-in player controls and polished aiming (v1.3.2)
Player characters can fire, aim, reload, select rifle/pistol and control camera look through exposed keyboard/mouse and gamepad FKey settings without creating Input Action assets. Aim now performs actual presentation work: the Character faces the camera/controller yaw, orient-to-movement is temporarily disabled, the selected Camera Component smoothly zooms to `Aimed Field Of View`, and all original movement/FOV values are restored on release, death, respawn, or shutdown.

Assign `Player Aim Camera Component` to the exact player camera when the Character owns several cameras. If unassigned, the plugin prefers an active Camera Component and can fall back to PlayerCameraManager. Disable the built-in input path when using an existing Enhanced Input graph; the public `Player Start Aiming`, `Player Stop Aiming`, and `Player Set Aiming` nodes use the same polished presentation path.


## Lock-On Indicator Texture

Assign the visual PNG/Texture2D under `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`.

## Lock-on indicator colour (v1.5.4)

The main component Details panel now exposes both:

- `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`
- `Targeting > Player Lock-On Visual > Lock-On Indicator Color`

The colour is an RGBA tint. RGB recolours the visible pixels and Alpha controls additional opacity. The imported PNG's own alpha channel is multiplied rather than discarded, so transparent areas stay transparent. Runtime Blueprint control is available through `Set Player Lock On Indicator Color`.


## Player lock-on aim-point control (v1.5.6)

While locked, mouse or right-stick look input can shift the shared lock point vertically and horizontally around the selected soldier. The feature inherits the exposed camera sensitivity, dead-zone and inversion settings and adds dedicated limits, smoothing and optional automatic recentring. Enhanced Input projects can feed their look axis through `Player Add Lock On Aim Input`.
