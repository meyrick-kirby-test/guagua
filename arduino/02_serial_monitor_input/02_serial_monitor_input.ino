void setup() {
    Serial.begin(9600);
    Serial.println();
}

void loop() {
    char ch;
    if (Serial.available() > 0) {
        ch = Serial.read();
        Serial.println(ch);
    }
}
