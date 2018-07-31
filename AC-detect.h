/*
  AC-detect.h - Library to detect if there is an alternative current on an analog pin of your Arduino.
  Created by Emerick Herve
  https://github.com/EmerickH/Arduino-AC-detector
*/
#ifndef ACdetect_h
#define ACdetect_h

#include "Arduino.h"

class ACdetect
{
  public:
    ACdetect(int pin);
    bool detect(int period);
  private:
    int _pin;
};

#endif