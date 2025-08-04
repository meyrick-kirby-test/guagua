

void setup() {
    Serial.begin(9600);
    Serial.println();

    // int x = 0b10001100;
    int x = 0x8C;

    for (int i = 0; i < 8; ++i) {
        int bit = bitRead(x, i);
        Serial.println(bit);
    }
}

void loop() {
}
