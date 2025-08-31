#include "Prescaler.h"

int pin = 3;
int state = LOW;

void setup() {
    setClockPrescaler(CLOCK_PRESCALER_16);
    pinMode(pin, OUTPUT);
}

void loop() {
    digitalWrite(pin, state);
    state = ! state;
}
