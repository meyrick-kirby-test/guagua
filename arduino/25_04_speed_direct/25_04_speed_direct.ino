#include "Prescaler.h"

void setup() {
    setClockPrescaler(CLOCK_PRESCALER_256);

    // Set pin D3 as OUTPUT.
    DDRD = B00001000;

    while (true) {
        PORTD = B00001000;
        delayMicroseconds(1);
        PORTD = B00000000;
        delayMicroseconds(1);
    }
}

void loop() {
}
