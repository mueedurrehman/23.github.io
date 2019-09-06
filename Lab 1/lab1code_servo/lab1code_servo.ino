int leftServo =6;
int rightServo= 5;
#include <Servo.h>
Servo parallax;

void setup() {
  pinMode(leftServo, OUTPUT);
  pinMode(rightServo, OUTPUT);
  parallax.attach(leftServo);
  parallax.attach(rightServo);
}

void loop() {
    parallax.write(leftServo, 80);
    paralax.write(rightServo, 40);
    delay(1000);
    parallax.write(leftServo, 90);
    parallax.write(rightServo, 90);
    delay(500);
    parallax.write(leftServo, 80);
    parallax.write(rightServo, 40);
    delay(5000);
}
