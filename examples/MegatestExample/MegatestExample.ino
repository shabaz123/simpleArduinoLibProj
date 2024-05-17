// MegatestExample.ino
// rev 1 - May 2024 - bob
// This code demonstrates the Megatest library

// ******** includes ********
#include <Megatest.h>

// ******** defines ********


// ********global variables ********
// create object
Megatest led;

// ******** setup() function ********
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

// ******** loop() function ********
void loop() {
  // put your code here, to run repeatedly:
  led.togglePin();
  delay(100);
  led.togglePin();
  delay(1000);
}


