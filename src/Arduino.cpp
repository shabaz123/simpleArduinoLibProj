// dummy Arduino.cpp file
// Note: this file will not form part of the Arduino library

#include <stdio.h>
#include "Arduino.h"

void
pinMode(uint8_t pin, uint8_t mode) {
  printf("pinmode pin %d, mode %d\n", pin, mode);
}

void
digitalWrite(uint8_t pin, uint8_t val) {
  printf("digitalWrite pin %d, value %d\n", pin, val);
}
