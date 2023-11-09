//Simple counter program

#define IRSensor 10
int count = 0;

void setup() {
  pinMode(IRSensor,INPUT);
  Serial.begin(9600);

}

void loop() {
  bool iR = digitalRead(IRSensor);
  if(iR == 1){
    count++;
    Serial.print("Count : ");
    Serial.println(count);
    } 
}
