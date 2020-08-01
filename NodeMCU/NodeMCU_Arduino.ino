float h, t, f, hic, hif;
String str;
void setup() {
  //Serial Begin at 9600 Baud 
  Serial.begin(115200);
  while (!Serial) {
; // wait for serial port to connect. Needed for native USB port only
}
}
void loop() {
  if (Serial.available()) {
    //str = Serial.read();
    Serial.write(Serial.read());
}
  //h = Serial.read(); //Read the serial data and store it
  //delay(1000);
  //t = Serial.read();
  //delay(1000);
  //f = Serial.read();
  //delay(1000);
  //hic = Serial.read();
  //delay(1000);
  //hif = Serial.read();
  //Serial.print(F("Humidity: "));
  //Serial.print(h);
  //Serial.print(F("%  Temperature: "));
  //Serial.print(t);
  //Serial.print(F("°C "));
  //Serial.print(f);
  //Serial.print(F("°F  Heat index: "));
  //Serial.print(hic);
  //Serial.print(F("°C "));
  //Serial.print(hif);
  //Serial.println(F("°F"));
}
