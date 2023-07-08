int LED1 = 9;
int LED2 = 10;
int LED3 = 11;
int LED4 = 12;

int Time = 100;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  delay(Time);
  digitalWrite(LED1,LOW);
  delay(Time);

  digitalWrite(LED2,HIGH);
  delay(Time);
  digitalWrite(LED2,LOW);
  delay(Time);

  digitalWrite(LED3,HIGH);
  delay(Time);
  digitalWrite(LED3,LOW);
  delay(Time);

  digitalWrite(LED4,HIGH);
  delay(Time);
  digitalWrite(LED4,LOW);
  delay(Time);

  digitalWrite(LED3,HIGH);
  delay(Time);
  digitalWrite(LED3,LOW);
  delay(Time);

  digitalWrite(LED2,HIGH);
  delay(Time);
  digitalWrite(LED2,LOW);
  delay(Time);

}
