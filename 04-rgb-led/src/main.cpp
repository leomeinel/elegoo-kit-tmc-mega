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

#define RGB_LED_RED 4
#define RGB_LED_GREEN 5
#define RGB_LED_BLUE 6

int setRGB(int, int, int);

void setup() {
  const int PINS[3] = {RGB_LED_RED, RGB_LED_GREEN, RGB_LED_BLUE};
  for (int pin : PINS) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  const int HTML_COLORS[16][3] = {
      {255, 255, 255}, // HTML_WHITE
      {192, 192, 192}, // HTML_SILVER
      {128, 128, 128}, // HTML_GRAY
      {0, 0, 0},       // HTML_BLACK
      {255, 0, 0},     // HTML_RED
      {128, 0, 0},     // HTML_MAROON
      {255, 255, 0},   // HTML_YELLOW
      {128, 128, 0},   // HTML_OLIVE
      {0, 255, 0},     // HTML_LIME
      {0, 128, 0},     // HTML_GREEN
      {0, 255, 255},   // HTML_AQUA
      {0, 128, 128},   // HTML_TEAL
      {0, 0, 255},     // HTML_BLUE
      {0, 0, 128},     // HTML_NAVY
      {255, 0, 255},   // HTML_FUCHSIA
      {128, 0, 128}    // HTML_PURPLE
  };
  for (const int(&color)[3] : HTML_COLORS) {
    setRGB(color[0], color[1], color[2]);
    delay(1000);
  }
}

int setRGB(int red, int green, int blue) {
  analogWrite(RGB_LED_RED, red);
  analogWrite(RGB_LED_GREEN, green);
  analogWrite(RGB_LED_BLUE, blue);
  return 0;
}
