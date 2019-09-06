
int ledPin = 6;
int val = 0;
int analogPin = A0;
//#include <Servo.h>
void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
//  val = analogRead(analogPin);  // read the input pin
//  Serial.print(val/4);
//  delay(500);
//  Serial.write(val);
val = 10;
  analogWrite(ledPin, val / 4); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
