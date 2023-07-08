int redLED = 13;

void setup() {
  pinMode(redLED,OUTPUT);
    
}

void loop() {
  digitalWrite(redLED,HIGH);
  delay(1000);
  digitalWrite(redLED,LOW);
  delay(1000);

}
