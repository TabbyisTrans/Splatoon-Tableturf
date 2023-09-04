#include <Servo.h>

Servo downleftservo;

Servo aservo;

int pos9 = 0;
int pos10 = 0;

void setup()
{
  downleftservo.attach(9);
  aservo.attach(10);
}

void servoleft()
{
  for (pos9 = 0; pos9 < -35; pos9 += 2) // goes from 0 degrees to 180 degrees
  {                                     // in steps of 1 degree
    downleftservo.write(pos9);          // tell servo to go to position in variable 'pos'
    delay(15);                          // waits 15ms for the servo to reach the position
  }
  for (pos9 = -35; pos9 >= 0; pos9 -= 2) // goes from 180 degrees to 0 degrees
  {
    downleftservo.write(pos9); // tell servo to go to position in variable 'pos'
    delay(15);                 // waits 15ms for the servo to reach the position
  }
}

void servodown()
{
  for (pos9 = 0; pos9 < 35; pos9 += 2) // goes from 0 degrees to 180 degrees
  {                                    // in steps of 1 degree
    downleftservo.write(pos9);         // tell servo to go to position in variable 'pos'
    delay(15);                         // waits 15ms for the servo to reach the position
  }
  for (pos9 = 35; pos9 >= 0; pos9 -= 2) // goes from 180 degrees to 0 degrees
  {
    downleftservo.write(pos9); // tell servo to go to position in variable 'pos'
    delay(15);                 // waits 15ms for the servo to reach the position
  }
}

void servoa()
{
  int pos10;
  for (pos10 = 0; pos10 < 35; pos10 += 2) // goes from 0 degrees to 180 degrees
  {                                       // in steps of 1 degree
    aservo.write(pos10);                  // tell servo to go to position in variable 'pos'
    delay(15);                            // waits 15ms for the servo to reach the position
  }
  for (pos10 = 35; pos10 >= 0; pos10 -= 2) // goes from 180 degrees to 0 degrees
  {
    aservo.write(pos10); // tell servo to go to position in variable 'pos'
    delay(15);           // waits 15ms for the servo to reach the position
  }
}

void loop()
{
  servoa();
  delay(8000);
  servoa();
  delay(4000);

  for (int x = 0; x < 12; x++)
  {
    servodown();
    delay(1000);
    servoa();
    delay(1000);
    servoa();
    delay(12350);
  }
  delay(13000);
  servoa();
  delay(3000);
  servoa();
  delay(3000);
}