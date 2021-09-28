#include <Servo.h>

Servo myservo; 
int val, x;
int pos = 0;   

void setup() {
  
  myservo.attach(5); 
  pinMode(A5, INPUT);
   
}

void loop() {

  val = analogRead(A5);
  // x = map(val, 0, 1023, 0, 180);
  x = map(val, 0, 1023, 180, 0);
  myservo.write(x);
  delay(15);
  
  /*
  for (pos = 0; pos <= 180; pos += 1) { 
   
    myservo.write(pos);             
    delay(15);  

  }
    
  for (pos = 180; pos >= 0; pos -= 1) { 
    
    myservo.write(pos);              
    delay(15);
                          
  }
  */
  
}
