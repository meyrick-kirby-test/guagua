int delayPeriod = 500;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(delayPeriod);
    digitalWrite(LED_BUILTIN, LOW);
    delay(delayPeriod);
}
