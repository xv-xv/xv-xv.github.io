#include<Vex.h>
Vex Robot;
Gyro gyro;

Adafruit_DCMotor*motorA = Robot.setMotor(1);
Adafruit_DCMotor*motorB = Robot.setMotor(4);
Adafruit_DCMotor*motorC = Robot.setMotor(3);
Adafruit_DCMotor*motorD = Robot.setMotor(2);

float angle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Robot.begin();
  gyro.begin();
}

void loop() {
  Robot.moveTank(motorA, motorB, -80, -80, 3.1);
  delay(100);
  
  Robot.moveMotor(motorC, 20, 1.8);
  delay(100);

  Robot.moveTank(motorA, motorB, 80, 80, 1);
  delay(100);

  Robot.moveTank(motorA, motorB, -50, 20, 1.56);
  delay(100);


  Robot.moveTank(motorA, motorB, -80, -80, 0.8);
  delay(100);
  
  Robot.moveTank(motorA, motorB, -40, 40, 1.2);
  delay(100);
  
  Robot.moveTank(motorA, motorB, -80, -80, 1.6);
  delay(100);

//  Robot.moveMotor(motorD, -10, 1.2);
//  delay(100);

  Robot.moveMotor(motorC, -20, 2.5);
  delay(100);

  Robot.moveTank(motorA, motorB, 50, 50, 5);


//  Robot.moveTank(motorA, motorB, -40, 40, 1.3);
//  delay(100);
//
//  Robot.moveTank(motorA, motorB, 80, 80, 1);
//  delay(100);

  
  Robot.end();
}
