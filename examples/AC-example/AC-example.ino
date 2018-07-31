/*
  AC-example.ino - Exemple to show how to use this library
  Library to detect if there is an alternative current on an analog pin of your Arduino.
  Created by Emerick Herve
  https://github.com/EmerickH/Arduino-AC-detector
*/

#include <AC-detect.h>

ACdetect acd(A0); //Pin & frequency to mesure in Hz

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(acd.detect(50)); //return 0 if no AC current detected 
  delay(1000);
}
