// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
    Serial.println();
    
    for (int c = 20; c < 40; ++c) {
        float f = cToF(c);
        Serial.print("c: ");
        Serial.print(c);
        Serial.print("\tf: ");
        Serial.println(f);
    }
}

void loop() {
}

float cToF(float c) {
    float f = c * 9 / 5 + 32;
    return f;
}
