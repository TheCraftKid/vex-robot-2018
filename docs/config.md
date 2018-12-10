# Foxbot Config
This doc contains information related to motor and sensor setup and physical
port configuration.

**Motor and sensor config for Foxbot 2.0.x can be found in its [header](../src/foxbot_2_config.h) file.**

## Quick Notes
As a general rule, for motors that are facing opposite directions but spin in
the same direction, the one on the "right" (relative to the front of the robot)
should be reversed in config.

## Motor Config
Note: All motors except `leftDrive` and `rightDrive` are standard VEX Motor 393s
using Motor Controller 29's.
The servos for `leftDrive` and `rightDrive` use integrated encoder modules. 

| Port | Subcomponent         | Code Name        | Reversed? |
|------|----------------------|------------------|-----------|
| 1    | Two-wheel Drive      | leftDrive        | ❌         |
| 2    | Powered Drive Assist | leftDriveAssist  | ❌         |
| 3    | Powered Drive Assist | rightDriveAssist | ✔️         |
| 4    | Ball Lift            | ballLift         | ❌         |
| 5    | Launcher Platform    | turretRotater    | ❌         |
| 6    | Launcher Platform    | turretTilt       | ❌         |
| 7    | Ball Launcher        | ballLauncher     | ❌         |
| 8    | Arm Lift             | armLiftLeft      | ❌         |
| 9    | Arm Lift             | armLiftRight     | ✔️         |
| 10   | Two-wheel Drive      | rightDrive       | ✔️         |

## Analog Sensor Config
| Port | Sensor System   | Sensor Type   | Code Name            |
|------|-----------------|---------------|----------------------|
| 1    | Turret Feedback | Potentiometer | turretTilt           |
| 2    | Position        | Line Sensor   | leftFrontLineSensor  |
| 3    | Position        | Line Sensor   | rightFrontLineSensor |
| 4    | Position        | Line Sensor   | leftBackLineSensor   |
| 5    | Position        | Line Sensor   | rightBackLineSensor  |
| 6    |                 |               |                      |
| 7    |                 |               |                      |
| 8    |                 |               |                      |

## Digital Sensor Config
| Port | Sensor System   | Sensor Type           | Code Name        |
|------|-----------------|-----------------------|------------------|
| 1    | Distance        | Sonar (inch)          | leftSonar        |
| 2    | Distance        | Sonar 2nd Port        |                  |
| 3    | Distance        | Sonar (inch)          | rightSonar       |
| 4    | Distance        | Sonar 2nd Port        |                  |
| 5    | Distance        | Sonar (inch)          | frontSonar       |
| 6    | Distance        | Sonar 2nd Port        |                  |
| 7    |                 |                       |                  |
| 8    |                 |                       |                  |
| 9    | Proximity       | Touch                 | leftFrontBumper  |
| 10   | Proximity       | Touch                 | rightFrontBumper |
| 11   | Turret Feedback | Quadrapture Encoder   | turretRotater    |
| 12   | Turret Feedback | Quad Encoder 2nd Port |                  |

## Other
The `I2C` port plugs directly into the motor for `leftDrive`.

In code, `I2C_1` represents the left integrated encoder module, and `I2C_2`
represents the right integrated encoder module.