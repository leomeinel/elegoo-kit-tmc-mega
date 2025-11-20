/*
 * File: main.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "pins_arduino.h"
#include <Arduino.h>

// We could also just use LED_BUILTIN
#define PIN_LED LED_BUILTIN
#define DELAY_LED_BLINK 500

void setup() { pinMode(PIN_LED, OUTPUT); }

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(DELAY_LED_BLINK);
  digitalWrite(PIN_LED, LOW);
  delay(DELAY_LED_BLINK);
}
