#include <Servo.h>

Servo servo1;  
Servo servo2;  

void setup() {
  servo1.attach(9);   
  servo2.attach(10);  
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    servo1.write(angle);         
    servo2.write(180 - angle);   
    delay(15);                   
  }
}
