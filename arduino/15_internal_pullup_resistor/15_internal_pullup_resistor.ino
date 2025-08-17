const int buttonPin = 2;
const int ledPin = 3;

void setup()
{
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);

    digitalWrite(ledPin, LOW);

    Serial.begin(9600);
    Serial.println();
}

void loop() {

    int reading = digitalRead(buttonPin);
	Serial.print(reading);
  
    if (reading == LOW) {
        Serial.println(" - on");
        digitalWrite(ledPin, HIGH);
    } else {
      	Serial.println(" - off");
        digitalWrite(ledPin, LOW);
    }

    delay(250);
}
