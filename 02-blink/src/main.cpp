#include <Arduino.h>

#include "pins_arduino.h"

// We could also just use LED_BUILTIN
constexpr uint8_t PIN_LED = LED_BUILTIN;
constexpr uint32_t DELAY_LED_BLINK = 500;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_LED, HIGH);
  delay(DELAY_LED_BLINK);
  digitalWrite(PIN_LED, LOW);
  delay(DELAY_LED_BLINK);
}
