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
  for(int i = 2; i <= 10; i++){
    
    digitalWrite(i, HIGH);
    delay(D01); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    
  }
    
  for(int i = 9; i >= 3; i--){
    
    digitalWrite(i, HIGH);
    delay(D01); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
        
  }   
}
