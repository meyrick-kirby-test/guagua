// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    Serial.println();
}

void loop() {

    blink(10, 100);
    delay(1000);
}

void blink(int numFlashes, int delayPeriod) {
    for (int i = 0; i < numFlashes; ++i)
        blinkOnce(delayPeriod);
}

void blinkOnce(int delayPeriod) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(delayPeriod);
    digitalWrite(LED_BUILTIN, LOW);
    delay(delayPeriod);
}
