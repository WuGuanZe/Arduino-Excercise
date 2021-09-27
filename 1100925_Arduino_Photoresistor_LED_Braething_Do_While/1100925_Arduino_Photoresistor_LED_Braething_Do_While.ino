int VRpin = A0; // A0, A1, A2, A3, A4, A5
int val;
int x;
int y = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(VRpin, INPUT);
  pinMode(10, OUTPUT);

}

void loop()
{
  
  do{
  
    digitalWrite(10, HIGH);
    Serial.println(y);
    delay(1000);
    y++;
    
  }while(y > 10 && y < 20);
  
  digitalWrite(10, LOW);
  // y++;
  delay(500);
  
  
}
