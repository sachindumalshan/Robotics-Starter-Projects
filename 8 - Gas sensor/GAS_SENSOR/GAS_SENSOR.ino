#define GASSENSOR 2  

void setup() {
  Serial.begin(9600);
  pinMode(GASSENSOR, INPUT);
}

void loop() {
  int gAS = digitalRead(GASSENSOR);

  if (gAS == HIGH)
    Serial.println("Gas leak is detected!");
  else{
    Serial.println("Gas leak not is detected!");
  }
}
