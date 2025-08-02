const int delayPeriod = 100;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    Serial.println();
}

void loop() {

    for (int i = 0; i < 20; i++)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(delayPeriod);
        digitalWrite(LED_BUILTIN, LOW);
        delay(delayPeriod);
    }
    delay(1000);
}
