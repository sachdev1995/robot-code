#include <ros.h>
#include <Servo.h>
#include <ros.h>
#define USE_STM32_HW_SERIAL 

void setup() {
int lfront = 3;
int rfront = 4;
Serial.begin(9600); //revise/check
pinMode(lfront, OUTPUT);
pinMode(rfront, OUTPUT);
}


void loop() {
  //go forward
  digitalWrite(3, HIGH); //motor pin, SPEED
  digitalWrite(4, HIGH); //motor pin, SPEED
  delay(2);

  //go backward
  digitalWrite(3, HIGH); //motor pin, SPEED
  digitalWrite(4, HIGH); //motor pin, SPEED
  delay(2);
}
