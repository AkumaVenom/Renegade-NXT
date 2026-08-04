# Blueprint Setup

## 1. Add the component

Open each soldier Character Blueprint—rifle soldier, pistol soldier, and any future infantry class—and add:

`Renegade Soldier Combat Component`

The same component can be used on every soldier Blueprint.

## 2. Set the team

Set `Team Id` to exactly one of:

- `GDI`
- `Nod`

Any two different non-neutral team names are enemies by default, so custom factions also work. `None` and `Neutral` do not automatically fight.

## 3. Select the weapon

For a fast setup, leave `Use Weapon Profile` disabled and edit `Inline Weapon Settings`.

Suggested rifle values:

- Damage: 11
- Range: 4500
- RPM: 600
- Burst: 3–7
- Magazine: 30
- Reload: 2.1 seconds

Suggested pistol values:

- Damage: 18
- Range: 2800
- RPM: 260
- Burst: 1–2
- Magazine: 12
- Reload: 1.65 seconds

You can also create a **Renegade Weapon Profile** Data Asset and assign it to many soldier classes.

## 4. Connect your particles, sounds, and animations

From the component, bind these Blueprint dispatchers:

- `On Shot Fired`: spawn muzzle flash at `Trace Start`, tracer toward `Trace End`, impact effect from `Hit Result`, and play the firing montage.
- `On Reload Started`: play reload montage and sound.
- `On Reload Finished`: finish or reset weapon animation state.
- `On Combat Started`: set an Animation Blueprint `In Combat` variable.
- `On Combat Ended`: clear the Animation Blueprint combat variable.
- `On Death`: play team-specific death audio, award score, or update match logic.
- `On Ragdoll Started`: optional extra blood, voice, or dropped-weapon effects.
- `On Respawned`: reset visible weapon state and Animation Blueprint variables.

The plugin performs the trace and damage. Your existing weapon particles and sounds remain fully controlled in Blueprint.


## 5. Combat-facing rotation lock

In the component's **Renegade NXT | Combat Facing** category:

- Enable `Lock Combat Rotation To Current Target` to keep the soldier's body yaw fixed toward its active enemy while advancing, retreating, or strafing.
- Set `Combat Target Rotation Speed Degrees` to control turning speed. The default is `1080` degrees per second. Set it to `0` for instant facing.
- Use the Blueprint node `Set Combat Rotation Lock Enabled` when this behaviour must be changed at runtime. Call it on the server.

The plugin temporarily overrides `Orient Rotation to Movement`, `Use Controller Desired Rotation`, and `Use Controller Rotation Yaw` only during combat. Their original Blueprint values are restored when the target is cleared, the soldier dies, automatic combat stops, or spline movement resumes.

This allows the AI to run backward or strafe sideways while its body remains aimed at the current enemy. Directional locomotion or strafe animations are recommended for the best visual result.

## 6. Required ragdoll setup

The Character Skeletal Mesh must have a valid Physics Asset. The project should contain the standard `Ragdoll` collision profile.

On death the plugin:

1. Stops AI movement and combat.
2. Disables Character Movement.
3. Disables capsule collision if configured.
4. Enables mesh physics and the `Ragdoll` collision profile.
5. Applies an impulse in the bullet direction at the hit bone.
6. Waits for `Respawn Delay Seconds`.
7. Disables physics, reattaches the mesh, restores its original relative transform and collision, teleports the same actor to its respawn transform, restores health, and restarts combat.

The actor is not destroyed.

## 7. Respawn choices

Inside `Health And Respawn`, choose:

- `Original Actor Transform`: return to where the soldier was originally placed/spawned.
- `Random Matching Team Spawn Point`: place `Renegade Soldier Spawn Point` actors in the map and assign matching `GDI` or `Nod` Team Id values.
- `Custom Transform`: use the transform stored directly in the component settings.

Higher-priority matching spawn points are selected before lower-priority points. Equal-priority points are selected randomly.

## 8. Multiplayer

Place and possess soldiers on the server as normal. Target selection, movement decisions, firing, damage, death, and respawn are server authoritative. Shot/reload/ragdoll/respawn cosmetic events are multicast so Blueprint effects can run on clients.

## v1.1.1 ragdoll validation

1. Select the soldier Skeletal Mesh Component that contains the Physics Asset.
2. For modular soldiers, add the Component Tag `CombatRagdollMesh`.
3. On the Renegade Soldier Combat Component, set `Ragdoll Mesh Component Tag` to `CombatRagdollMesh`.
4. Temporarily call `Validate Ragdoll Setup` from Begin Play and Print String the failure output.
5. Open the assigned Physics Asset and use its Simulate control. If it does not collapse in that editor, the Physics Asset itself needs valid bodies and constraints.


## Anti-Stretch Ragdoll Settings (v1.1.2)

Recommended defaults:

- `Resolve Leader Pose Mesh For Ragdoll`: true
- `Use Ragdoll Root Bone`: true
- `Ragdoll Root Bone`: `pelvis` (or the skeleton's hip/root physics bone)
- `Include Ragdoll Root Bone`: true
- `Disable Secondary Animation During Ragdoll`: true

For modular characters using Set Leader Pose Component, put the `CombatRagdollMesh` component tag on the leader/body mesh. Do not independently simulate a head, clothing, hands, or other follower component.
