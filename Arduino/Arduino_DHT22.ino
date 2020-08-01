#include "DHT.h"
#include<SoftwareSerial.h>
#define DHTPIN 7
#define DHTTYPE DHT21 
DHT dht(DHTPIN, DHTTYPE);
SoftwareSerial espSerial(0,1);
String str;
void setup() {
  Serial.println(F("DHT11 test!"));
  Serial.begin(115200);
  espSerial.begin(115200);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);
   Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));
  str =String("coming from arduino: ")+String("Humidity= ")+String(h)+String("Temperature= ")+String(t)+String("°C ")+String(f)+String("°F  Heat index: ")+String(hic)+String("°C ")+String(hif)+String("°F");
  espSerial.println(str);
  delay(1000);
}
