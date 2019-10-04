#include "Arduino.h"

#define LED_BUILTIN PC13
// Serial usb;
#define INTERVAL 100

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  // usb.begin(9600);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Serial LED OFF");
  // usb.println("usb LED OFF");

  delay(INTERVAL);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Serial LED ON");
  // usb.println("usb LED ON");

  delay(INTERVAL);
}
