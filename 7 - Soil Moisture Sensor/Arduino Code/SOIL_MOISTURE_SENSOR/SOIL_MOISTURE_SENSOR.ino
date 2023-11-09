#define SOILMOISTURESENSOR 6

void setup() {
  Serial.begin(9600);
  pinMode(SOILMOISTURESENSOR,INPUT);
}

void loop() { 
  int sOILMOISTURE = analogRead(SOILMOISTURESENSOR);
  sOILMOISTURE = map(sOILMOISTURE, 0, 4095, 100, 0);  
  if(sOILMOISTURE <= ){
    Serial.println("Soil Moisture Level is LOW");
    //Your code
  }
  else{
    Serial.println("Soil Moisture Level is HIGH");
    //Your code
  }
  delay(1000); 
}
