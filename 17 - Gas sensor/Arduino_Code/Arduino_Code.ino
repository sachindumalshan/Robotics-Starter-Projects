#define DO_PIN 2  // Arduino's pin connected to DO pin of the MQ2 sensor

void setup() {
  // initialize serial communication
  Serial.begin(9600);
  // initialize the Arduino's pin as an input
  pinMode(DO_PIN, INPUT);

  Serial.println("Warming up the MQ2 sensor");
  delay(20000);  // wait for the MQ2 to warm up
}

void loop() {
  int gasState = digitalRead(DO_PIN);

  if (gasState == HIGH)
    Serial.println("The gas is NOT present");
  else
    Serial.println("The gas is present");
}
