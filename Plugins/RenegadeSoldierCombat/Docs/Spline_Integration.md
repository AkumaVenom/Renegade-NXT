# Spline Navigation Integration

The combat component deliberately does not depend on the spline plugin's C++ module. This keeps both plugins reusable and prevents circular dependencies.

Use either of these two Blueprint-friendly methods.

## Recommended: movement bridge interface

In the soldier Character Blueprint:

1. Open **Class Settings**.
2. Add the `Renegade Combat Movement Bridge` interface.
3. Implement `Combat Movement Interrupted`:
   - Pause or interrupt the spline-follow command.
   - Do not clear the soldier's remembered spline route/progress.
4. Implement `Combat Movement Resumed`:
   - Tell the spline component to resume from `Resume From World Location`.
   - Recalculate the nearest valid point/distance along the assigned spline.
5. `Can Combat Take Movement Control` should return `true` while the spline system permits combat interruption.

## Alternative: event dispatchers

Bind:

- `On Spline Movement Pause Requested`
- `On Spline Movement Resume Requested`

The pause event fires when an enemy is acquired. The resume event supplies the soldier's current world location after combat or respawn.

## Runtime behaviour

While fighting, the component uses the possessed `AIController` and NavMesh to:

- advance when outside preferred range,
- retreat when too close,
- strafe left/right while firing,
- move toward the last-known enemy position after losing line of sight.

When combat ends, it releases movement control so the spline plugin can continue from the soldier's current location rather than teleporting or restarting the full path.
