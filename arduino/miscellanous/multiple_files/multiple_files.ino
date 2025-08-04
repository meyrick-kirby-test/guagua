#include "Arduino.h"
#include "Flasher.h"

Flasher fastFlasher(LED_BUILTIN, 100);

void setup() {
}

void loop() {
    fastFlasher.flash(10);
    delay(1000);
}
