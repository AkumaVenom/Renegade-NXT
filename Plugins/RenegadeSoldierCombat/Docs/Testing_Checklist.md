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
