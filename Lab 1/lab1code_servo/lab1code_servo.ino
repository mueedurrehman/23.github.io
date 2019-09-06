int leftServo =6;
int rightServo= 5;
#include <Servo.h>
Servo parallax1;
Servo parallax2;

void setup() {
  pinMode(leftServo, OUTPUT);
  pinMode(rightServo, OUTPUT);
  parallax1.attach(leftServo);
  parallax2.attach(rightServo);
}

void loop() {
    parallax1.write(180); //wheel on the other side so it is flipped
    parallax2.write(40);
    delay(3000);
    parallax1.write(90);
    parallax2.write(90);
    delay(500);
    parallax1.write(180);
    parallax2.write(90);
    delay(1500);
//    parallax1.write(80);
//    parallax2.write(40);
//    delay(5000);
}
