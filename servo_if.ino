#include <Servo.h>

Servo htservo;  
int pos = 0;    

void setup() {
  htservo.attach(9);
  pinMode (2,INPUT);
  
}

void loop() {
    htservo.write(pos);
     
    if (digitalRead(2) == HIGH)
    {
      pos = 90;
      htservo.write(pos);
      delay(3000);
    }
    
    else 
    {
      pos = 0;
      htservo.write(pos);
    }
}
