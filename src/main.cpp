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
  if (!mqtt.connected()) {
    mqttConnect(mqttServer, 1883, "ESP32Client", "", ""); //* usuario e senha na aws
  }
}

