char val;
//Serial value is equal to 1 > LED will ON
//Serial value is equal to 2 > LED will OFF

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  Serial.println("Searching...");
  Serial.println("Ready to connect");
}

void loop() {
  if (Serial.available()){
    val = Serial.read();
    Serial.println(val);
    }

  if(val=="1"){
    digitalWrite(13,HIGH);
    Serial.println("LED ON");
    }
  else if(val=="2"){
    digitalWrite(13,LOW);
    Serial.println("LED OFF");
    }
  delay(100);
}
