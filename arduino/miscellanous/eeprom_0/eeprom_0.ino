#include <EEPROM.h>

void setup() {
    Serial.begin(9600);
    Serial.println();

    int address = 0;

    // EEPROM.write(address, 'A');
    Serial.println((char)EEPROM.read(address));
}

void loop() {
}
