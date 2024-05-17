// dummy Arduino.h file
// Note: this file will not form part of the Arduino library

#ifndef DUMMY_ARDUINO_HEADER_FILE
#define DUMMY_ARDUINO_HEADER_FILE

#include <stdint.h>

#define LED_BUILTIN 10
#define OUTPUT 1
#define LOW 0
#define HIGH 1

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t val);


#endif // DUMMY_ARDUINO_HEADER_FILE
