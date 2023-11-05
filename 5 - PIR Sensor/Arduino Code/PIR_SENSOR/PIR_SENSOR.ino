#define PIRSensor 10

void setup() {
  pinMode(PIRSensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  bool pIR = digitalRead(PIRSensor);
  if(pIR == 1){
    Serial.println("Motion Detected!");
    }
  else{
    Serial.println("Motion Not Detected!");
    }
}
