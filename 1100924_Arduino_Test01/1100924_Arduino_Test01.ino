byte LED01 = 8;
int D01 = 1000;
int D02 = 500;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED01, HIGH);
  delay(D01); // Wait for 2000 millisecond(s)
  digitalWrite(LED01, LOW);
  delay(D02); // Wait for 1000 millisecond(s)

}
