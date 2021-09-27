int VRpin = A0; // A0, A1, A2, A3, A4, A5
int val;
int x;

void setup()
{
  Serial.begin(9600);
  pinMode(VRpin, INPUT);
  pinMode(3, OUTPUT);

}

void loop()
{
  val = analogRead(VRpin);
  // x = map(val, 0, 1023, 255, 0);
  Serial.println(val);
  analogWrite(3, val);

}
