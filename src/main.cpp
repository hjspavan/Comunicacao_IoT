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
  waitForWiFiConnection();
  mqttConnect(mqttServer, 1883, "ESP32Client", mqttUser, mqttPass);
  mqttSubscribe(mqttsubTopic);
  mqtt.loop();
}

