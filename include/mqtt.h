#include <PubSubClient.h>
#include <WiFiClient.h>
#ifndef MQTT_H
#define MQTT_H


WiFiClient espClient;
PubSubClient mqtt(espClient);


void mqttConnect(const char* server, uint16_t port, const char* clientId, const char* username, const char* password) {
  mqtt.setServer(server, port);
  while (!mqtt.connected()) {
    Serial.print("Conctando to MQTT broker...");
    if (mqtt.connect(clientId, username, password)) {
      Serial.println("conectado");
    } else {
      Serial.print("Falha na conexão, estado: ");
      Serial.println(mqtt.state());
      delay(2000);
    }
  }
}


void mqttPublish(const char* topic, const char* payload) {
  if (!mqtt.connected()) {
    Serial.println("MQTT não conectado. Tentando reconectar...");
    return;
  }
  mqtt.publish(topic, payload);

    

}






#endif