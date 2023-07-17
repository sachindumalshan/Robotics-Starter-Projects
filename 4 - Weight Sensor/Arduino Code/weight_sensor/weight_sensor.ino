#include <HX711_ADC.h>
#include <EEPROM.h>
#include <SoftwareSerial.h>

SoftwareSerial B(0,1);

const int HX711_DT = 4;
const int HX711_SCK = 5;

HX711_ADC LoadCell(HX711_DT, HX711_SCK);

const int calWeight = 0;
unsigned long t = 0;

int x =5;

void setup() {
  Serial.begin(57600);
  B.begin(9600);
  delay(10);
  Serial.println();
  Serial.println("Starting...");

  LoadCell.begin();
  //LoadCell.setReverseOutput(); //uncomment to turn a negative output value to positive
  float calibrationValue;
  calibrationValue = 696.0; // uncomment this if you want to set the calibration value in the sketch
  unsigned long stabilizingtime = 2000; // preciscion right after power-up can be improved by adding a few seconds of stabilizing time
  boolean _tare = true; //set this to false if you don't want tare to be performed in the next step
  LoadCell.start(stabilizingtime, _tare);
  
  if (LoadCell.getTareTimeoutFlag()) {
    Serial.println("Timeout, check MCU>HX711 wiring and pin designations");
    while (1);
  }
  else {
    LoadCell.setCalFactor(calibrationValue); // set calibration value (float)
    Serial.println("Startup is complete");
  }
}

void loop() {

  if(Serial.available() > ){
     print(Serial.read);
    }
  
  static boolean newDataReady = 0;
  const int serialPrintInterval = 500; //increase value to slow down serial print activity

  // check for new data/start next conversion:
  if (LoadCell.update()) newDataReady = true;

  // get smoothed value from the dataset:
  if (newDataReady) {
    if (millis() > t + serialPrintInterval) {
      int i = LoadCell.getData();
      Serial.print("Weight : ");
      Serial.print(i);
      Serial.println("g");
      newDataReady = 0;
      t = millis();
    }
  }

  // receive command from serial terminal, send 't' to initiate tare operation:
  if (Serial.available() > 0) {
    char inByte = Serial.read();
    if (inByte == 't') LoadCell.tareNoDelay();
  }

  // check if last tare operation is complete:
  if (LoadCell.getTareStatus() == true) {
    Serial.println("Tare complete");
  }

}
