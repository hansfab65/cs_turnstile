#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ArduinoBLE.h>

// Service
BLEService CS_AccessSystemService("AF000001-AFAF-A000-F000-A0F011110001");


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);  

  // Inizializzazione
  BLE.begin();
  BLE.setLocalName("CS_BLE_Turnstile1");  // Ciascun Tornello ha un pogressivo diverso

}

void loop() {
  // put your main code here, to run repeatedly:

}
