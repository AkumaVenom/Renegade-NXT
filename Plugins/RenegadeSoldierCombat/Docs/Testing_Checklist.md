# Testing Checklist

1. Add a NavMesh Bounds Volume over the combat area and verify green navigation coverage.
2. Place one GDI and one Nod AI Character, each with the combat component.
3. Confirm both Characters are possessed by an AIController.
4. Confirm the mesh has a Physics Asset and the `Ragdoll` collision profile exists.
5. Verify the weapon muzzle socket name. Change `Muzzle Socket Name` if your skeleton uses another socket.
6. Verify the aim bone. Change `Aim Bone Name` if the skeleton does not contain `spine_03`.
7. Bind `On Shot Fired` to visible particles or debug drawing.
8. Test close range: soldiers should retreat or strafe rather than remain stationary.
9. Test long range: soldiers should advance until they can fire.
10. Test cover: line traces should hit the cover before the target and prevent damage.
11. Test death: mesh ragdolls with an impulse and the actor remains in the World Outliner.
12. Test respawn: the same actor restores health, capsule, mesh attachment, animation, and AI movement.
13. Test spline integration: combat pauses spline travel and resumes from the current post-combat position.
14. Test a dedicated server or two-player PIE session for replicated effects and health.

## Combat-facing rotation lock (v1.1.0)

- With `Lock Combat Rotation To Current Target` enabled, verify advancing soldiers keep their body yaw toward the enemy.
- Verify retreat movement runs away from the enemy while body yaw remains toward the enemy.
- Verify left/right strafing does not rotate the body toward the movement destination.
- Disable the boolean at runtime with `Set Combat Rotation Lock Enabled`; verify normal movement-facing rotation returns.
- Clear the target or leave combat; verify the Character Blueprint's original rotation settings are restored.
- Kill the soldier while rotation lock is active; verify focus clears, ragdoll starts, and respawn restores normal combat acquisition.
- In multiplayer PIE, verify the server-authoritative body rotation is replicated to clients.


## Bullet mesh and blood visuals (v1.2.0)

- [ ] Assign a bullet static mesh and verify it begins at the configured muzzle socket.
- [ ] Verify the mesh reaches the exact trace end without collision or extra damage.
- [ ] Confirm the rotation offset matches the mesh's authored forward axis.
- [ ] Fire automatic bursts and confirm the per-soldier pool reuses components without visible leftovers.
- [ ] Assign at least one Deferred Decal blood material and verify blood appears only after combat-character hits.
- [ ] Confirm rocks, walls, and missed shots do not create blood.
- [ ] Confirm the ground trace ignores the damaged soldier and places blood on the floor beneath the impact.
- [ ] Verify decal lifespan and fade remove old blood from long-running loop battles.
- [ ] Test `Delay Ground Blood Until Bullet Arrives` both enabled and disabled.
- [ ] Test `Preview Bullet Mesh Visual` and `Preview Ground Blood At Location` in Blueprint.
- [ ] In multiplayer PIE, confirm each client sees one local bullet/blood effect and no blood effect actor replicates twice.

## Bullet spawn component

- [ ] Add a Scene Component at the muzzle and assign it as **Bullet Visual Spawn Component**.
- [ ] Call **Preview Bullet Mesh From Configured Spawn** and confirm the mesh starts at that component.
- [ ] Move the component and confirm the next shot starts from the new world location.
- [ ] Clear the selection and confirm the original muzzle socket/trace-start fallback still works.
- [ ] In multiplayer PIE, confirm each client resolves the Blueprint component and sees the same visual origin.


## Player combat (v1.3.0)

- [ ] Enable `Player Controlled Combat` on the player Character and confirm it does not automatically target, rotate toward, or move toward enemies.
- [ ] Keep `Register As Combat Target` enabled and verify hostile AI acquires and damages the player.
- [ ] Hold automatic-rifle input and verify shots follow configured RPM, stop on release, consume rifle ammo, and reload at zero.
- [ ] Hold the rifle through reload and verify fire resumes only while the input remains held.
- [ ] Press pistol input and verify exactly one pistol shot occurs per press with independent pistol ammunition.
- [ ] Switch rifle/pistol and verify `Active Player Weapon`, `Current Magazine Ammo`, and weapon/ammo events update the HUD.
- [ ] Aim beside close cover in third person and verify the muzzle obstruction trace hits the cover instead of shooting through it.
- [ ] Confirm player shots use the selected bullet-spawn Scene Component, moving bullet mesh, impact result, and ground blood.
- [ ] Kill the player and verify same-actor ragdoll/respawn restores movement, controller rotation, health, and configured ammo.
- [ ] Test Original, Team Spawn Point, Custom Transform, Custom Transform List, Tagged Actor, and Runtime Override respawning.
- [ ] In two-player PIE, verify only the owning client sends input, the server limits cadence/ammo, and all clients see one shot/blood visual.

## v1.3.2 built-in player input and aim presentation

- Enable `Player Controlled Combat` and `Enable Built-In Input` on the locally possessed Character.
- Left Mouse Button and Gamepad Right Trigger fire the currently selected weapon.
- Right Mouse Button and Gamepad Left Trigger update `Is Player Aiming`, `On Player Aim Changed`, body-facing rotation, and camera zoom.
- Mouse X/Y and the gamepad right stick rotate the controller view without drift outside the configured dead zone.
- R and Gamepad Face Button Left reload.
- 1 / D-Pad Up selects the automatic rifle; 2 / D-Pad Down selects the pistol.
- Holding fire repeats only for the automatic rifle and respects RPM, ammunition and reload.
- Opening a cursor-driven menu stops fire and aim when `Ignore Input While Mouse Cursor Visible` is enabled.
- Disable built-in input before testing an existing Enhanced Input graph to avoid duplicate look/fire calls.


## v1.3.2 aim presentation regression checks

- [ ] Select the exact player Camera Component in `Player Aim Camera Component`, or confirm active-camera auto-find resolves the correct one.
- [ ] Press aim and verify the Character immediately turns to camera yaw and remains aligned while moving sideways/backward.
- [ ] Verify the camera interpolates to `Aimed Field Of View` and restores the exact original FOV on release.
- [ ] Call `Player Start Aiming` and `Player Stop Aiming` manually from Blueprint and verify they produce the same rotation/zoom as built-in input.
- [ ] Kill the player while aimed and verify yaw settings and FOV restore before/through ragdoll and respawn.
- [ ] Test a pawn without a Camera Component and verify PlayerCameraManager fallback zooms and unlocks cleanly.

## Building warfare — v1.4.0

- [ ] Every building Blueprint has `Renegade Building Combat Component` and the correct GDI/Nod Team Id.
- [ ] The visible building collision blocks the infantry weapon trace channel, normally Visibility.
- [ ] The selected Target Point Scene Component is inside the visible structure and not behind unrelated collision.
- [ ] AI soldiers with `Buildings When No Soldier Target` fight soldiers first, then acquire a hostile building.
- [ ] Player and AI bullets reduce the building's replicated Current Health.
- [ ] Attached child meshes resolve damage to the owning building actor.
- [ ] Destroyed buildings stop being valid infantry targets.
- [ ] `On Building Destroyed` fires once and Blueprint destruction presentation runs.
- [ ] Repair/Restore returns the building to a targetable operational state.
- [ ] Multiple buildings damaged simultaneously play only one under-attack sound.
- [ ] AGT resolves both rocket muzzle Scene Components and launches two visual meshes.
- [ ] AGT traces can damage and kill both AI soldiers and the player.
- [ ] AGT rocket meshes have no collision and reach the confirmed trace endpoints.
- [ ] Obelisk charge sound plays before the configured Charge Seconds delay.
- [ ] Obelisk shoot sound and Niagara laser appear after charging.
- [ ] Niagara start/end parameter names exactly match the Fab laser system's user parameters.
- [ ] Obelisk trace damages and can kill both AI soldiers and the player.
- [ ] Defence debug traces show expected hit/block/miss colours.
- [ ] When power dependency is enabled, destroying the team's Power Plant disables AGT/Obelisk attacks.
- [ ] Restoring the Power Plant automatically returns team defences to service.
