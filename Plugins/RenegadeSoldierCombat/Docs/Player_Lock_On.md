# Player TPS Lock-On Targeting

Version 1.5.1 adds a local, hold-to-lock targeting mode for player-controlled combatants. The lock target is selected locally for responsiveness, while firing still uses the plugin's existing server-authoritative player shot validation, camera trace, muzzle obstruction trace, damage, bullet mesh, and blood systems.

## Quick setup

On the player Character's `Renegade Soldier Combat Component`:

- Enable `Player Controlled Combat`.
- Enable `Player Lock-On > Enable Lock On`.
- Default keyboard lock-on: `Left Alt`.
- Default gamepad lock-on: `Gamepad Left Shoulder / LB` (the button above Left Trigger).
- Assign a transparent texture to `Lock On Indicator Texture`.
- Hold the dedicated lock button while an enemy soldier is near the screen centre. Release it to stop targeting.

Lock-on automatically enters the existing full aim presentation, including FOV zoom, aimed accuracy, and camera-facing Character rotation. Normal free aim remains independent on Right Mouse Button and Gamepad Left Trigger. Holding either normal aim or lock-on keeps aiming active; releasing one does not cancel the other while it is still held.

## Acquisition and maintenance

- `Maximum Acquisition Distance`: initial lock range.
- `Acquisition Half Angle Degrees`: initial camera-centred selection cone.
- `Break Distance Multiplier`: extra distance allowed for an already-selected target.
- `Break Half Angle Degrees`: wider maintenance cone.
- `Require Line Of Sight To Acquire`: rejects enemies hidden behind cover.
- `Break Lock When Occluded`: clears the target after continuous obstruction.
- `Occlusion Grace Seconds`: prevents rapid lock loss at cover edges.
- `Line Of Sight Trace Channel`: collision channel used by the visibility test.

Only living hostile Actors with another `Renegade Soldier Combat Component` and `Register As Combat Target` enabled can be locked. Buildings are intentionally excluded.

## Camera and shooting

- `Camera Rotation Interp Speed`: smooth tracking speed; 0 snaps immediately.
- `Track Target Pitch`: follows the target vertically as well as horizontally.
- `Target Lead Seconds`: small visual prediction for moving soldiers.
- `Target Aim Offset`: additional world-space adjustment.
- `Aim Player Shots At Locked Target`: feeds the locked aim point into the established player shot request.
- `Maximum Shot Assist Angle Degrees`: limits correction when the camera is not sufficiently aligned.

The server continues to validate the submitted view, cadence, weapon, ammunition, trace, obstruction, and damage. Lock-on does not bypass walls or the authoritative muzzle trace.

## Target switching

Default switching controls:

- Keyboard: `Q` for left and `E` for right.
- Gamepad: D-pad Left and D-pad Right.
- Optional: flick the right stick horizontally while locked.

All keys, the stick threshold, and switch cooldown are exposed.

## Indicator image

Assign `Lock On Indicator Texture` to a transparent reticle/ring texture. The plugin creates one local-only `Billboard Component`, positions it at the locked soldier's combat aim point, and keeps it camera-facing.

Exposed presentation controls:

- `Lock On Indicator World Offset`
- `Lock On Indicator Scale`
- `Use Screen Size Scaling`
- `Indicator Screen Size`
- `Indicator Pulse Amount`
- `Indicator Pulse Speed`

The texture can also be changed at runtime with `Set Player Lock On Indicator Texture`.

## Enhanced Input / external input

When Built-In Input is disabled, connect an Input Action:

- `Started` -> `Player Start Lock On`
- `Completed` -> `Player Stop Lock On`
- `Canceled` -> `Player Stop Lock On`

Alternatively send the action's held Boolean to `Player Set Lock On Held`.

Useful Blueprint events:

- `On Player Lock On Target Changed`
- `On Player Lock On State Changed`

Useful queries:

- `Is Player Lock On Held`
- `Is Player Locked On`
- `Get Player Lock On Target`
- `Get Player Lock On Aim Location`

## Lock-on PNG / Texture

Select the `RenegadeSoldierCombat` component and expand:

`Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`

Assign an imported PNG as a `Texture2D`. The component creates and updates the local billboard automatically while a hostile soldier is locked. Existing v1.5.0/v1.5.1 assignments migrate from the previous nested setting.

## Lock-on indicator colour (v1.5.3)

The main component Details panel now exposes both:

- `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`
- `Targeting > Player Lock-On Visual > Lock-On Indicator Color`

The colour is an RGBA tint. RGB recolours the visible pixels and Alpha controls additional opacity. The imported PNG's own alpha channel is multiplied rather than discarded, so transparent areas stay transparent. Runtime Blueprint control is available through `Set Player Lock On Indicator Color`.

## Indicator colour and transparency

Assign the PNG under `Targeting > Player Lock-On Visual > Lock-On Indicator PNG / Texture`, then choose `Lock-On Indicator Color`. The selected RGBA value is multiplied directly with the Slate image that renders the texture. RGB changes the visible colour, Alpha changes opacity, and transparent pixels in the source PNG remain transparent. Runtime changes through `Set Player Lock On Indicator Color` update an active indicator immediately.
