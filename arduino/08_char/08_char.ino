void setup() {
    Serial.begin(9600);
    Serial.println();

    // Change to uppercase
    // Change to number characters
    char ch;
    for (int i = 'a'; i < 'a' + 26; ++i) {
        ch = i;
        Serial.print(ch);
    }
    Serial.println();
}

void loop() {
}
