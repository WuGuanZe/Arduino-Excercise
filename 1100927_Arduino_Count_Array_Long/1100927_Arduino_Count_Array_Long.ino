int i;
int melody[] = {
  1, 0, 1, 1, 1, 4, 4, 7, 7, 8, 41, 5
};


void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
}

void loop()
{
  
  for(i = 0; i < sizeof(melody)-1; i++){
          
  }
  
  Serial.println((i+1/2));
  delay(10000);
  
}
