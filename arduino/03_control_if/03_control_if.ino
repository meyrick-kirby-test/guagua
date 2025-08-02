int delayPeriod = 100;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    Serial.println();
}

void loop() {

    digitalWrite(LED_BUILTIN, HIGH);
    delay(delayPeriod);
    digitalWrite(LED_BUILTIN, LOW);
    delay(delayPeriod);

    delayPeriod = delayPeriod + 100;
    if (delayPeriod > 1000)
    {
        delayPeriod = 100;
    }
    Serial.println(delayPeriod);
}
