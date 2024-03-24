#include <Servo.h>

Servo servo1;  
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos = 0;    

void setup() {
  servo1.attach(9);  
  servo2.attach(10); 
  servo3.attach(11); 
  servo4.attach(12); 
  servo5.attach(13); 
}
void loop() {
  for (pos = 0; pos <= 70; pos += 1) { 
    servo1.write(pos);   
    servo3.write(pos * 1);  
    servo2.write(pos * 2); 
    servo4.write(pos * 1);  
    servo5.write(pos * 1);  
    delay(10);  
  }
  for (pos = 70; pos >= 0; pos -= 1) { 
    servo1.write(pos);  
    servo2.write(pos * 2);  
    servo3.write(pos * 1);  
    servo4.write(pos * 1);  
    servo5.write(pos * 1);  
    delay(10);  
  }
}
