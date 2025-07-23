#include <Servo.h>

Servo myservo1;

void setup() {
  myservo1.attach(9); // Servo di pin 9

}

void loop() {
  myservo1.write(0);   // Putar ke 0 derajat
  delay(1000);
  myservo1.write(90);  // Putar ke 90 derajat
  delay(1000);
  myservo1.write(180); // Putar ke 180 derajat
  delay(1000);

}
