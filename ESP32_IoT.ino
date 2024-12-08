#include "ESP32_IoT.h"

void setup() {
  Serial.begin(115200);
  setupSensors();
  Serial.println("Setup selesai!");
}

void loop() {
  bacaDHT();
  bacaUltrasonik();
  kontrolServoDanBuzzer();
  delay(1000);
}
