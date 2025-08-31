#include "MemoryFree.h"

const byte ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

void setup() {
    for (byte i = 0; i < 12; ++i) {
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW);
    }

    Serial.begin(9600);
    Serial.println();
    Serial.print(F("Memory: "));
    Serial.println(freeMemory());
}

void loop() {
}
