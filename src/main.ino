
#include <Servo.h>

Servo downleftservo;

Servo aservo;

int pos9 = 0;
int pos10 = 0;



void setup() {
  downleftservo.attach(9);
  aservo.attach(10);
}

void servoleft() { 
  for(pos9 = 0; pos9 < -40; pos9 += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    downleftservo.write(pos9);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos9 = -40; pos9>=1; pos9-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    downleftservo.write(pos9);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void servodown() { 
  for(pos9 = 0; pos9 < 40; pos9 += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    downleftservo.write(pos9);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos9 = 40; pos9>=1; pos9-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    downleftservo.write(pos9);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void servoa() { 
   int pos;
  for(pos10 = 0; pos10 < 40; pos10 += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    aservo.write(pos10);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos10 = 40; pos10>=1; pos10-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    aservo.write(pos10);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void loop() {

}