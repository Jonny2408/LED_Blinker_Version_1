
#define grueneLED 3 //grüne LED an Pin 3
void setup()
{
  pinMode(3, OUTPUT);

}

void loop()
{
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);
 
}
