#include <Arduino.h>
#include <WiFi.h>
#include "redes.h"




void setup() {
  WiFi.begin(networkName, networkPswd);
  while (WiFi.status() != WL_CONNECTED) 
  {
    Serial.print(".");
    delay(1000);
  }


  

}

void loop() {


}

