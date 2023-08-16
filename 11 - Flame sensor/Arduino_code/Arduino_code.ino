void setup()
{
  pinMode(2, INPUT); //initialize Flame sensor output pin connected pin as input.
  pinMode(13, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);// initialize serial communication @ 9600 baud:
}
void loop()
{
  if (digitalRead(2) == 0 )
  {
    digitalWrite(13, HIGH); // Led ON
    Serial.println("** Fire detected!!! **");
  }
  else
  {
    digitalWrite(13, LOW); // Led OFF
    Serial.println("No Fire detected");
  }
  delay(100);
