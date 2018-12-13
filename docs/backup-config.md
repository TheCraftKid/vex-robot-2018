# Foxbot (Legacy) Config
This doc contains information related to motor and sensor setup and physical
port configuration for the **legacy Foxbot**.

**Motor and sensor config for legacy Foxbot can be found in its [header](../src/foxbot_legacy_onfig.h) file.**

## Quick Notes
As a general rule, for motors that are facing opposite directions but spin in
the same direction, the one on the "right" (relative to the front of the robot)
should be reversed in config.

## Motor Config
Note: All motors except `leftDrive` and `rightDrive` are standard VEX Motor 393s
using Motor Controller 29's.
The servos for `leftDrive` and `rightDrive` use integrated encoder modules. 

| Port | Subcomponent          | Code Name       | Reversed? |
|------|-----------------------|-----------------|-----------|
| 1    | Left Motor            | leftDrive       | ❌         |
| 2    | Left Lower Arm Motor  | liftBottomLeft  | ❌         |
| 3    | Left Upper Arm Motor  | liftUpperLeft   | ❌         |
| 4    | Right Lower Arm Motor | liftBottomRight | ✔️         |
| 5    | Right Upper Arm Motor | liftUpperRight  | ✔️         |
| 6    | N/A                   |                 | ❌         |
| 7    | N/A                   |                 | ❌         |
| 8    | N/A                   |                 | ❌         |
| 9    | N/A                   |                 | ❌         |
| 10   | Right Motor           | rightDrive      | ✔️         |

## Other
The `I2C` port plugs directly into the motor for `leftDrive`.

In code, `I2C_1` represents the left integrated encoder module, and `I2C_2`
represents the right integrated encoder module.