#define DO 8
unsigned long last_event = 0;

void setup() {
  pinMode(DO, INPUT); 
  Serial.begin(9600);
}

void loop() {
  float t = dht.readTemperature();
  temperature = t;
  float h = dht.readHumidity();
  humidity = h;
  Serial.print("Temperature: "); Serial.println(t);
  Serial.print("Humidity: "); Serial.println(h);
  delay(500);
}
