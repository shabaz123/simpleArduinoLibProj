// ********** main code *************
// rev 1 - bob - May 2024
// Note: this code will not be part of the Arduino library

#include <stdio.h>
#include "Megatest.h"

// global vars

int
main(void) {
    printf("** test code (in main.cpp) for Megatest **\n");

    int i;
    printf("calling constructor..\n");
    Megatest mt(100);

    printf("calling togglePin several times..\n");
    for (i=0; i<5; i++) {
        mt.togglePin();
    }

    printf("calling pinOff..\n");
    mt.pinOff();

    printf("** test complete **\n");
    return(0);
}
