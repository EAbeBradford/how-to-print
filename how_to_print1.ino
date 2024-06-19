
void setup()
{
  //the number in Serial.begin need to match in the serial monitor for it to work
  Serial.begin(9600);
  Serial.println("Hello world");
}

void loop()
{
  Serial.println("loooooping");
  delay(1000);
}