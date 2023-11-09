#define MIROPHONESENSOR 8
unsigned long preRead = 0;

void setup() {
  pinMode(MIROPHONESENSOR, INPUT); 
  Serial.begin(9600);
}

void loop() {
  int mICROPHONEVALUE = digitalRead(MIROPHONESENSOR);
  if (mICROPHONEVALUE == LOW) {
    if (millis() - preRead > 25) {
      Serial.println("Sound was detected!");
    }
    else{
      preRead = millis();
    }
  }
}
