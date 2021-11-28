#include <SoftwareSerial.h>   
SoftwareSerial esp8266(6,7);  //Rx ==> Pin 6; TX ==> Pin7 
#define speed8266 9600 
void setup() 
{
  esp8266.begin (speed8266); 
  Serial.begin(speed8266);
  Serial.println("ESP8266 Setup test - use AT coomands");
}
void loop() 
{
  while(esp8266.available())
  {
    Serial.write(esp8266.read());
  }
  while(Serial.available())
  {
    esp8266.write(Serial.read());
  }
}
