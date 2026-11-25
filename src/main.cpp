#include <Arduino.h>
#include <WiFi.h>
#include "mqtt.h"
#include "redes.h"




void setupWiFi();

void setup() {
  Serial.begin(115200);
  setupWiFi();
  

}

void loop() {
  mqtt.loop();
}

