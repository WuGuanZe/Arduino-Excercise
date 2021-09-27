int D01 = 1000;
int D02 = 500;

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
    delay(D02); // Wait for 1000 millisecond(s)
  
  } 
}
