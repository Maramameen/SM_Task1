//Link to Tinkercad simulation:   https://www.tinkercad.com/things/j1lclcUvlhx-servo-motor/editel?sharecode=0-OgBROgSq7cmFN84IpsdDxsrjsoLSHM7QlssllMiN0

#include <Servo.h>

Servo myservo; 

int pos = 0;    

void setup() {
  myservo.attach(7);  
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);                     
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
