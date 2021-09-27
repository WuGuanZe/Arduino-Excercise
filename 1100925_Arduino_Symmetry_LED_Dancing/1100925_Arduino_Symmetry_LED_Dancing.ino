int D01 = 200;
int D02 = 200;

void setup()
{
  for(int i = 2; i <= 10; i++){
    
    pinMode(i, OUTPUT);
    
  }  
}

void loop()
{
  for(int i = 4; i >= 0; i--){
    
    digitalWrite(6 - i, HIGH);
    digitalWrite(6 + i, HIGH);
    delay(D01); // Wait for 1000 millisecond(s)
    
    digitalWrite(6 - i, LOW);
    digitalWrite(6 + i, LOW);
    
  }
    
  for(int i = 1; i <= 3; i++){
    
    digitalWrite(6 + i, HIGH);
    digitalWrite(6 - i, HIGH);
    delay(D01); // Wait for 1000 millisecond(s)
    
    digitalWrite(5 + i, LOW);
    digitalWrite(6 - i, LOW);
        
  }   
}
