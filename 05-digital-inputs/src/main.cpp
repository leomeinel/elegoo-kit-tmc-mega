/*
 * File: main.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#include <Arduino.h>

#define SW1 5
#define SW2 6
#define D1 7

void setup() {
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(SW1) == LOW) {
    digitalWrite(D1, HIGH);
  }
  if (digitalRead(SW2) == LOW) {
    digitalWrite(D1, LOW);
  }
}
