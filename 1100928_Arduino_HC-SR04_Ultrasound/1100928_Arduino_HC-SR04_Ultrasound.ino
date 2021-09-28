long readUltrasonicDistance(int triggerPin, int echoPin)
{
  
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
  
}

void setup()
{
  
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{
  
  Serial.println("hello world");

  // 上觸發器 = TRIG， 回傳 = ECHO, readUltrasonicDistance(TRIG, ECHO)
  Serial.println(0.01723 * readUltrasonicDistance(10, 9));
  Serial.println("Cm");
  Serial.println(0.006783 * readUltrasonicDistance(10, 9));
  Serial.println("In");

}
