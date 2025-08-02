void setup() {
    Serial.begin(9600);
    Serial.println();
}

void loop() {
    if (Serial.available() > 0) {
        char ch = Serial.read();
        boolean isNumber = '0' <= ch && ch <= '9';
        if (isNumber) {
            int i = ch - '0';
            Serial.print(ch);
            Serial.print(" is the number ");
            Serial.println(i);
        } else {
            Serial.print(ch);
            Serial.println(" is not a number");
        }
    }
}
