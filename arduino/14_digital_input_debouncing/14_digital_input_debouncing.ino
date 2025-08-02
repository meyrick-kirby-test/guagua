const int inputPin = 2;
int ledValue = LOW;

void setup()
{
    pinMode(inputPin, INPUT_PULLUP);
    pinMode(LED_BUILTIN, OUTPUT);

    digitalWrite(LED_BUILTIN, ledValue);

    Serial.begin(9600);
    Serial.println();
}

void loop() {
    int reading = digitalRead(inputPin);
    Serial.print(reading);

    // Toggle.
    if (reading == LOW) {
        ledValue = ! ledValue;

        if (ledValue == HIGH) {
            Serial.print(" - on");
        } else {
            Serial.print(" - off");
        }

        digitalWrite(LED_BUILTIN, ledValue);
    }
    Serial.println();
    
    delay(250);
}
