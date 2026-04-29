#include <Arduino.h>

constexpr uint8_t PIN_SW1 = 5;
constexpr uint8_t PIN_SW2 = 6;
constexpr uint8_t PIN_D1 = 7;

void setup()
{
  pinMode(PIN_SW1, INPUT_PULLUP);
  pinMode(PIN_SW2, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(PIN_SW1) == LOW)
  {
    digitalWrite(PIN_D1, HIGH);
  }
  if (digitalRead(PIN_SW2) == LOW)
  {
    digitalWrite(PIN_D1, LOW);
  }
}
