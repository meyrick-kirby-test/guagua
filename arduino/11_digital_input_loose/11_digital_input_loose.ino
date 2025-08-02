const int inputPin = 2;

void setup()
{
    pinMode(inputPin, INPUT);

    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);

    Serial.begin(9600);
    Serial.println();
}

void loop() {
    int reading = digitalRead(inputPin);
    Serial.print(reading);

    if (reading == LOW) {
        Serial.println(" - off");
        digitalWrite(LED_BUILTIN, LOW);
    } else {
        Serial.println(" - on");
        digitalWrite(LED_BUILTIN, HIGH);
    }
    
    delay(250);
}
