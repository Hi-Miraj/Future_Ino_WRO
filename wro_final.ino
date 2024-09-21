#include <AFMotor.h>
#include <Servo.h>

// Define motor objects for 4 motors
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

// Servo object for robotic arm
Servo servo1, servo2, servo3, servo4;

// Fire extinguisher components
Servo myservo;
AF_DCMotor pump(4);

int Left = A8;
int Right = A9;
int Forward = A10;

int speedValue = 0;
int turnValue = 0;
boolean fire = false;

void setup() {
  Serial.begin(9600);
  
  // Initialize sensors and motors
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Forward, INPUT);
  
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);
  pump.setSpeed(150);
  
  // Initialize fire extinguisher servo
  myservo.attach(10);
  myservo.write(90);

  // Initialize robotic arm servos
  servo1.attach(5);  // Servo 1 connected to pin 5
  servo2.attach(6);  // Servo 2 connected to pin 6
  servo3.attach(7);  // Servo 3 connected to pin 7
  servo4.attach(8);  // Servo 4 connected to pin 8
}

void loop() {
  // Check if data is available to read from Serial
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    
    if (command.startsWith("motor")) {
      controlMotors(command);
    } else if (command.startsWith("servo")) {
      controlRoboticArm(command);
    }
  }
  
  // Fire extinguisher logic
  if (digitalRead(Left) == 1 && digitalRead(Right) == 1 && digitalRead(Forward) == 1) {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  } else if (digitalRead(Forward) == 0) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    fire = true;
  } else if (digitalRead(Left) == 0) {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
  } else if (digitalRead(Right) == 0) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }

  delay(300);

  if (fire) {
    put_off_fire();
  }
}

void controlMotors(String command) {
  int commaIndex = command.indexOf(',');
  if (commaIndex > 0) {
    speedValue = command.substring(6, commaIndex).toInt();
    turnValue = command.substring(commaIndex + 1).toInt();
  }
  
  int leftMotorSpeed = speedValue - turnValue;
  int rightMotorSpeed = speedValue + turnValue;

  leftMotorSpeed = constrain(leftMotorSpeed, -255, 255);
  rightMotorSpeed = constrain(rightMotorSpeed, -255, 255);

  setMotorSpeed(motor1, leftMotorSpeed);
  setMotorSpeed(motor2, leftMotorSpeed);
  setMotorSpeed(motor3, rightMotorSpeed);
  setMotorSpeed(motor4, rightMotorSpeed);
}

void setMotorSpeed(AF_DCMotor& motor, int speed) {
  if (speed > 0) {
    motor.setSpeed(speed);
    motor.run(FORWARD);
  } else if (speed < 0) {
    motor.setSpeed(abs(speed));
    motor.run(BACKWARD);
  } else {
    motor.run(RELEASE);
  }
}

void put_off_fire() {
  delay(500);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  pump.run(FORWARD);
  
  delay(500);
  for (int pos = 50; pos <= 130; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
  for (int pos = 130; pos >= 50; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
  pump.run(RELEASE);
  myservo.write(90);
  fire = false;
}

void controlRoboticArm(String command) {
  int index1 = command.indexOf(',');
  int index2 = command.indexOf(',', index1 + 1);
  int index3 = command.indexOf(',', index2 + 1);
  
  int servo1Pos = command.substring(6, index1).toInt();
  int servo2Pos = command.substring(index1 + 1, index2).toInt();
  int servo3Pos = command.substring(index2 + 1, index3).toInt();
  int servo4Pos = command.substring(index3 + 1).toInt();
  
  servo1.write(servo1Pos);
  servo2.write(servo2Pos);
  servo3.write(servo3Pos);
  servo4.write(servo4Pos);
}
