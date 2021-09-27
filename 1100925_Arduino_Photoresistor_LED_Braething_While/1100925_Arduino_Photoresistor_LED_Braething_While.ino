int VRpin = A0; // A0, A1, A2, A3, A4, A5
int val;
int x;

void setup()
{
  Serial.begin(9600);
  pinMode(VRpin, INPUT);
  pinMode(10, OUTPUT);

}

void loop()
{
  val = analogRead(VRpin);
  x = map(val, 54, 974, 255, 0);
  
  while(x > 200){
  
    val = analogRead(VRpin);
    x = map(val, 54, 974, 255, 0);
    digitalWrite(10, HIGH);
    Serial.println(x);
    Serial.println("LED ON");
    delay(500);
    
  }
  
  digitalWrite(10, LOW);
  Serial.println(x);
  Serial.println("LED OFF");
  
  
}
