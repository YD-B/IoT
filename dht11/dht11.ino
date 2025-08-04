#include <dht.h>
#define outPin 8
dht DHT;

void setup(){
Serial.begin(9600);
}

void loop(){
int read_data=DHT.read11(outPin);
float temp=DHT.temperature;
float humi=DHT.humidity;
Serial.println("Temperature: ");
Serial.println(temp);
Serial.println("Humidity: ");
Serial.println(humi);
delay(2500);
}