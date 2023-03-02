#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t kIrLed = 14;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).

IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600, SERIAL_8N1, SERIAL_TX_ONLY);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("NEC");
  irsend.sendNEC(0x00FFE01FUL);
  delay(2000);
}