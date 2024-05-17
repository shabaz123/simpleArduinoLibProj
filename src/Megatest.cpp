// Megatest.cpp
// rev 1 - May 2024 - bob - first version

#include "Megatest.h"

// defines

// *************************************************
// ********  Megatest class implementation  ********
// *************************************************

Megatest::Megatest()
{
  mPinState = 0;
  mPinNum = LED_BUILTIN;
  pinMode(mPinNum, OUTPUT);
  digitalWrite(mPinNum, LOW);
}

Megatest::Megatest(uint8_t pin) {
	mPinNum = pin;
	mPinState = 0;
	pinMode(mPinNum, OUTPUT);
	digitalWrite(mPinNum, LOW);
}

void Megatest::togglePin(void) {
	if (mPinState == 0) {
		digitalWrite(mPinNum, HIGH);
		mPinState = 1;
	} else {
		digitalWrite(mPinNum, LOW);
		mPinState = 0;
	}
}

void Megatest::pinOff(void) {
	pin_off_function(mPinNum);
}

// *************************************************
// ****   End of Megatest class implementation  ****
// *************************************************

