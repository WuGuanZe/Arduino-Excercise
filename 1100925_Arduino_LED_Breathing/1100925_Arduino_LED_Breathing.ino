void setup()
{
  Serial.begin(9600);

  pinMode(3, OUTPUT);

}

void loop()
{
  Serial.println("hello world");
  
  for(int i = 0; i <= 255; i+=5){
  
    analogWrite(3, i);
    Serial.println(i);
    delay(10); // Delay a little bit to improve simulation performance

  } 
  
  for(int i = 255; i >= 0; i-=5){
  
    analogWrite(3, i);
    Serial.println(i);
    delay(10); // Delay a little bit to improve simulation performance

  } 
}
