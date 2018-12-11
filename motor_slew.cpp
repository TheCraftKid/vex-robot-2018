#include "robotc.h"

#define MOTOR_COUNT 10

// Array to hold requested speed for the motors
int motorRequests[MOTOR_COUNT];

// Array to hold "slew rate" for the motors, the maximum change every time the task
// runs checking current mootor speed.
int motorSlew[MOTOR_COUNT];

task handleMotorSlew()
{
    int motorIndex;
    int motorTmp;

    // Initialize stuff
    for (motorIndex = 0; motorIndex < MOTOR_COUNT; motorIndex++)
    {
        motorRequests[motorIndex] = 0;
        motorSlew[motorIndex] = 10;
    }

    // run task until stopped
    while (true)
    {
        // run loop for every motor
        for (motorIndex = 0; motorIndex < MOTOR_COUNT; motorIndex++)
        {
            // So we don't keep accessing the internal storage
            motorTmp = motor[motorIndex];

            // Do we need to change the motor value ?
            if (motorTmp != motorRequests[motorIndex])
            {
                // increasing motor value
                if (motorRequests[motorIndex] > motorTmp)
                {
                    motorTmp += motorSlew[motorIndex];
                    // limit
                    if (motorTmp > motorRequests[motorIndex])
                        motorTmp = motorRequests[motorIndex];
                }

                // decreasing motor value
                if (motorRequests[motorIndex] < motorTmp)
                {
                    motorTmp -= motorSlew[motorIndex];
                    // limit
                    if (motorTmp < motorRequests[motorIndex])
                        motorTmp = motorRequests[motorIndex];
                }

                // finally set motor
                motor[motorIndex] = motorTmp;
            }
        }

        // Wait approx the speed of motor update over the spi bus
        wait1Msec(15);
    }
}