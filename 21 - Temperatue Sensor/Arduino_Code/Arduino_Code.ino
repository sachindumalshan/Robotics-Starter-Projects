#define DO 8
unsigned long last_event = 0;

void setup() {
  pinMode(DO, INPUT); 
  Serial.begin(115200);
}

void loop() {
  int output = digitalRead(DO);
  if (output == LOW) {
    if (millis() - last_event > 25) {
      Serial.println("Clap sound was detected!");
    }
    last_event = millis();
  }
}
