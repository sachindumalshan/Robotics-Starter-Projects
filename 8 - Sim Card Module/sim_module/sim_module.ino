#include <SoftwareSerial.h>

SoftwareSerial GSM(7,8 );

void setup()
{
  GSM.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  Serial.println ("SIM900A Ready");
  delay(100);
  Serial.println ("Type s to send message or r to receive message");
}


void loop()
{
  if (Serial.available()>0)
   switch(Serial.read())
  {
    case 's':
      SendMessage();
      break;
    case 'r':
      RecieveMessage();
      break;
  }

 if (GSM.available()>0)
   Serial.write(GSM.read());
}


 void SendMessage()
{
  Serial.println ("Sending Message");
  GSM.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);
  Serial.println ("Set SMS Number");
  GSM.println("AT+CMGS=\"+94766166355\"\r"); //Mobile phone number to send message
  delay(1000);
  Serial.println ("Set SMS Content");
  GSM.println("Good morning, how are you doing?");// Messsage content
  delay(100);
  Serial.println ("Finish");
  GSM.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  Serial.println ("Message has been sent ->SMS Alert Service");
}


 void RecieveMessage()
{
  Serial.println ("SIM900A Membaca SMS");
  delay (1000);
  GSM.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(1000);
  Serial.write ("Unread Message done");
 }
