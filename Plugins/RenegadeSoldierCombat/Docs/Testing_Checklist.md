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
