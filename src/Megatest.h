// Megatest.h
// rev 1 - May 2024 - bob - first revision

#ifndef MEGATEST_HEADER_FILE
#define MEGATEST_HEADER_FILE

#include "Arduino.h"
#include "extracode.h"
#include <stdint.h>

// defines

// class definition
class Megatest
{
  public:
    Megatest();
    Megatest(uint8_t pin);
    void togglePin(void);
    void pinOff(void);
    
  private:
    uint8_t mPinNum;
    uint8_t mPinState;
    
};

#endif // MEGATEST_HEADER_FILE

