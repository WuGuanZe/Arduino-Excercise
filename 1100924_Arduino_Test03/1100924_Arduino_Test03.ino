int x01;

void setup()
{
  Serial.begin(9600);
  
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop()
{
  x01 = digitalRead(3);
  Serial.println(x01);
  
  if(x01 == 1){   
    digitalWrite(5, HIGH);
    delay(1000); // Wait for 2000 millisecond(s)
    
  }
  
  if(x01 == 0){
    digitalWrite(5, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    
  }

}
