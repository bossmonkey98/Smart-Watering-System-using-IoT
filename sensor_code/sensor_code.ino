#define SensorPin 0
float sensorValue = 0;
float lig = 0;
#include <dht.h>

#define light 1
#define dht_apin 11 // Analog Pin sensor is connected to
 
dht DHT; 
void setup() { 
 Serial.begin(9600); 
  delay(100);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(10);//Wait before accessing Sensor
 
} 
void loop() { 
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(10); 
   lig = lig + analogRead(light);
 } 
 sensorValue = sensorValue/100; 
 Serial.print("soil moisture ");
 Serial.print(" = ");
 Serial.println(sensorValue);
 Serial.println("light ="); 
 Serial.println(lig);
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
 delay(10); 
} 
