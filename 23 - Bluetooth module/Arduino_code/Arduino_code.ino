/*   
HC05 - Bluetooth AT-Command mode  
modified on 10 Feb 2019 
by Saeed Hosseini 
<blockquote class="wp-embedded-content" data-secret="dNn3Ux1NUG"><a href="https://electropeak.com/learn/">Home</a></blockquote><iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" title="“Home” — Electropeak" src="about:blank" data-secret="dNn3Ux1NUG" width="500" height="282" frameborder="0" marginwidth="0" marginheight="0" scrolling="no" loading="lazy" data-rocket-lazyload="fitvidscompatible" data-lazy-src="https://electropeak.com/learn/embed/#?secret=dNn3Ux1NUG" data-pin-description="Arduino and HC-05 Bluetooth Module Complete Tutorial" data-pin-title="Arduino and HC-05 Bluetooth Module Complete Tutorial"></iframe><noscript><iframe class="wp-embedded-content" sandbox="allow-scripts" security="restricted" style="position: absolute; clip: rect(1px, 1px, 1px, 1px);" title="&ldquo;Home&rdquo; &mdash; Electropeak" src="https://electropeak.com/learn/embed/#?secret=dNn3Ux1NUG" data-secret="dNn3Ux1NUG" width="500" height="282" frameborder="0" marginwidth="0" marginheight="0" scrolling="no" loading="lazy"></iframe></noscript> 
*/ 
#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(2, 3); // RX | TX 
int flag = 0; 
int LED = 8; 
void setup() 
{   
 Serial.begin(9600); 
 MyBlue.begin(9600); 
 pinMode(LED, OUTPUT); 
 Serial.println("Ready to connect\nDefualt password is 1234 or 000"); 
} 
void loop() 
{ 
 if (MyBlue.available()) 
   flag = MyBlue.read(); 
 if (flag == 1) 
 { 
   digitalWrite(LED, HIGH); 
   Serial.println("LED On"); 
 } 
 else if (flag == 0) 
 { 
   digitalWrite(LED, LOW); 
   Serial.println("LED Off"); 
 } 
}
