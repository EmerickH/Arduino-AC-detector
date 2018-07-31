/*
  AC-detect.cpp - Library to detect if there is an alternative current on an analog pin of your Arduino.
  Created by Emerick Herve
  https://github.com/EmerickH/Arduino-AC-detector
*/

#include "Arduino.h"
#include "AC-detect.h"

ACdetect::ACdetect(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}

bool ACdetect::detect(int period)
{
  int del = (1000 / period / 4) - 1;
  int fvalue = analogRead(_pin);
  delay(del);
  int svalue = analogRead(_pin);
  return (abs(fvalue - svalue) > 10);
}