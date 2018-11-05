#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    leftLineFollower, sensorLineFollower)
#pragma config(Sensor, in2,    centerLineFollower, sensorLineFollower)
#pragma config(Sensor, in3,    rightLineFollower, sensorLineFollower)
#pragma config(Sensor, in4,    gyro,           sensorGyro)
#pragma config(Sensor, in6,    armPot,         sensorPotentiometer)
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  frontLimit,     sensorTouch)
#pragma config(Sensor, dgtl8,  sonarSensor,    sensorSONAR_cm)
#pragma config(Sensor, I2C_1,  rightIME,       sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  leftIME,        sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  armIME,         sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop, driveRight, encoderPort, I2C_1)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop, reversed, driveLeft, encoderPort, I2C_2)
#pragma config(Motor,  port6,           armMotor,      tmotorVex393_MC29, openLoop, encoderPort, I2C_3)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	while(vexRT [ Btn7D] == 0)  // start command with button pressed to zero
	{
	}

	clearTimer (T1);
	while(time1 [T1] < 90000)// Wait time command

{
		motor [leftMotor] = vexRT[Ch3];
		motor [rightMotor] = vexRT[Ch2];


	}
	motor[leftMotor] = 0;
	motor[rightMotor] = 0;
}
