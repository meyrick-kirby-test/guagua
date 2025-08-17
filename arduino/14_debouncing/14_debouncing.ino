const int buttonPin = 2;
const int ledPin = 3;

int ledValue = LOW;

void setup()
{
    pinMode(buttonPin, INPUT);
  	pinMode(ledPin, OUTPUT);

    digitalWrite(ledPin, LOW);

    Serial.begin(9600);
    Serial.println();
}

void loop() {
    int reading = digitalRead(buttonPin);

    // Toggle.
    if (reading == LOW) {
        ledValue = ! ledValue;

        Serial.print(reading);
        if (ledValue == HIGH) {
            Serial.println(" - on");
        } else {
            Serial.println(" - off");
        }

        digitalWrite(ledPin, ledValue);
    }
    
    delay(250);
}
