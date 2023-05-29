#include <Arduino.h>
#include <Adafruit_BME280.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

#define BME_I2C_ADDRESS 0x76

const uint16_t kIrLed = 14;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).
Adafruit_BME280 bme280;

IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600, SERIAL_8N1, SERIAL_TX_ONLY);

  bool status;

  status = bme280.begin(BME_I2C_ADDRESS);

  if (!status) {
    Serial.println("Could not find a valid BME280 sensor.");
    while (1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("NEC");
  irsend.sendNEC(0x00FFE01FUL);
  delay(2000);
}