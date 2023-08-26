#include <Servo.h>

Servo servoa;  // create servo object to control a servo
Servo servob; 
// twelve servo objects can be created on most boards

int posa = 0;    // variable to store the servo position
int posb = 0;
void setup() {
  servoa.attach(9);  // attaches the servo on pin 9 to the servo object
  servob.attach(10);
}

void loop() {
  for (posa = 0; posa <= 180; posa += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servoa.write(posa);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (posa = 180; posa >= 0; posa -= 1) { // goes from 180 degrees to 0 degrees
    servoa.write(posa);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
