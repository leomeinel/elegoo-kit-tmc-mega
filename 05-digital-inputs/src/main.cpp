/*
 * File: main.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

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
