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

  //Using for loop
 /*
  for(int i=9;i<13;i++){
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    delay(100);
  }

  for(int j=12;j>8;j--){
    digitalWrite(j,HIGH);
    delay(100);
    digitalWrite(j,LOW);
    delay(100);
  }
  */
}
