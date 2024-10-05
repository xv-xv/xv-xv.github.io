#include<Vex.h>
Vex Robot;
Gyro gyro;

Adafruit_DCMotor*motorA = Robot.setMotor(1);
Adafruit_DCMotor*motorB = Robot.setMotor(4);
Adafruit_DCMotor*motorC = Robot.setMotor(3);

float angle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Robot.begin();
  gyro.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Robot.moveTank(motorA, motorB, 80, 80, 4);
  Robot.moveMotor(motorC, -20, 1.3);
  delay(100);

  Robot.moveTank(motorA, motorB, 80, 80, 1.3);
  Robot.moveMotor(motorC, -20, 1.3);


  delay(100);
  
//  angle = gyro.getZAngle();

  Robot.moveTank(motorA, motorB, -80, -80, 1);
  delay(100);

  Robot.moveTank(motorA, motorB, 50, -20, 1.7);
  delay(100);

 
//  while (angle<=90){
//    Robot.moveTank(motorA, motorB, 20, -20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }
//  
  Robot.moveTank(motorA, motorB, 80, 80, 0.8);
  delay(100);
  
//  angle = gyro.getZAngle();
//
//  while (angle<=90){
//    Robot.moveTank(motorA, motorB, 20, -20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }

  Robot.moveTank(motorA, motorB, 40, -40, 1.1);
  delay(100);

  Robot.moveTank(motorA, motorB, 80, 80, 3.6);
  delay(100);
  
  Robot.moveMotor(motorC, 8, 2.4);
  delay(100);

  Robot.moveTank(motorA, motorB, -50, -50, 8);

//  while (angle<=180){
//    Robot.moveTank(motorA, motorB, 20, -20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }

//  Robot.moveTank(motorA, motorB, 40, -40, 2.6);
//  delay(100);

//  Robot.moveTank(motorA, motorB, -80, -80, 3.5);
//  delay(100);

//  while (angle<=90){
//    Robot.moveTank(motorA, motorB, -20, 20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }

  Robot.moveTank(motorA, motorB, -40, 40, 1.3);
  delay(100);

  Robot.moveTank(motorA, motorB, 80, 80, 1);
  delay(100);

//  while (angle<=90){
//    Robot.moveTank(motorA, motorB, 20, -20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }

//  Robot.moveTank(motorA, motorB, -40, 40, 1.3);
//  delay(100);
//
//  Robot.moveTank(motorA, motorB, 80, 80, 1.5);
//  delay(100);

//  while (angle<=90){
//    Robot.moveTank(motorA, motorB, 20, -20, 0.2);
//    angle = gyro.getZAngle();
//    Serial.println(angle);
//   }

//  Robot.moveTank(motorA, motorB, 40, -40, 1.3);
//  delay(100);
//  
//  Robot.moveTank(motorA, motorB, 100, 100, 1);
//  delay(100);
//
////  while (angle<=90){
////    Robot.moveTank(motorA, motorB, -20, 20, 0.2);
////    angle = gyro.getZAngle();
////    Serial.println(angle);
////   }
//
//  Robot.moveTank(motorA, motorB, -24, 40, 1.6);
//  delay(100);
//
//  Robot.moveTank(motorA, motorB, 80, 80, 2);
  
  Robot.end();
}

//use gyro sensor to get the same angle every time
