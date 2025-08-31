#include "Prescaler.h"

const byte pin = 3;
byte state = LOW;

void setup() {
    setClockPrescaler(CLOCK_PRESCALER_16);
    pinMode(pin, OUTPUT);
}

void loop() {
    digitalWrite(pin, state);
    state = ! state;
}
