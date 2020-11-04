#include <Servo.h>

Servo htservo;  
int pos = 0;    

void setup() {
  htservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 90; pos += 30) {
    htservo.write(pos);            
    delay(1000);                
  }
  for (pos = 90; pos >= 0; pos -= 30) {
    htservo.write(pos);
    delay(1000);
  }
}
