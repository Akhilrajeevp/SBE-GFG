#include <Servo.h>

const int trigPin = 3;
const int echoPin = 2;
const float maxDistance = 100.0; // Maximum distance in cm
const float threshold = 0.9; // 90% trash level

Servo servo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo.attach(9);
  servo.write(0); // Initial position: dustbin open
  delay(1000);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.0344 / 2;

  if (distance >= maxDistance) {
    distance = maxDistance;
  }

  float trashLevel = 1.0 - (distance / maxDistance);

  if (trashLevel >= threshold) {
    servo.write(90); // Dustbin closed
  } else {
    servo.write(0); // Dustbin open
  }

  delay(1000);
}
/*
    IoT part
    Components needed:

    Arduino Uno
    HC-SR04 Ultrasonic Sensor
    Servo motor (e.g., SG90)
    Breadboard
    Jumper wires
    Dustbin with a hinged lid
    Circuit connections:

    Connect the HC-SR04 ultrasonic sensor to the Arduino Uno:

    VCC pin to 5V
    GND pin to GND
    Echo pin to Arduino digital pin 2
    Trigger pin to Arduino digital pin 3
    Connect the servo motor to the Arduino Uno:

    VCC (red) wire to 5V
    GND (black/brown) wire to GND
    Signal (orange/yellow) wire to Arduino digital pin 9
*/

//Attach the servo motor to the dustbin's lid. The dustbin will close when the trash level reaches 90%.