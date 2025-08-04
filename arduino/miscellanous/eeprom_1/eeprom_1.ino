#include <avr/eeprom.h>
#define UINT unsigned int

void setup() {
    Serial.begin(9600);
    Serial.println("\n\n\n");

    byte b0;
    
    // for (int i = 0; i < 128; ++i) {
    //     b0 = lowByte(i);
    //     eeprom_write_block(&b0, i, 1);    
    // }

    for (int i = 0; i < 1024; ++i) {
        eeprom_read_block(&b0, i, 1);

        Serial.print(b0 < 16 ? "0" : "");
        Serial.print(b0, HEX);

        int j = i % 50;
        if (j == 49)
            Serial.println();
        else if (j == 9 || j == 19 || j == 29 || j == 39)
            Serial.print("    ");
        else
            Serial.print(" ");
    }
}

void loop() {
}
