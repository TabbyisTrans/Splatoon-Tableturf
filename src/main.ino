
#include <Servo>

Servo downleftservo;

Servo aservo;

int 9pos = 0;
int 10pos = 0;



void setup() {
  downleftservo.attach(9)
  aservo.attach(10)
}

void servoleft() { 
  for(9pos = 0; 9pos < -40; 9pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    downleftservo.write(9pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(9pos = -40; 9pos>=1; 9pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    downleftservo.write(9pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void servodown() { 
  for(9pos = 0; 9pos < 40; 9pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    downleftservo.write(9pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(9pos = 40; 9pos>=1; 9pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    downleftservo.write(9pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}

void servoa() { 
   int pos;
  for(10pos = 0; 10pos < 40; 10pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    aservo.write(10pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(10pos = 40; 10pos>=1; 10pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    aservo.write(10pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}
void servo
void loop() {

}