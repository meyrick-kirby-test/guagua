const int buttonPin = 2;
const int buzzerPin = 3;

void setup()
{
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(buzzerPin, OUTPUT);

    analogWrite(buzzerPin, LOW);

    Serial.begin(9600);
    Serial.println();
}

void loop() {

    int reading = digitalRead(buttonPin);
	Serial.print(reading);
  
    if (reading == LOW) {
        Serial.println(" - on");
        int pwmValue = 1 * 255.0 / 5.0;
        analogWrite(buzzerPin, pwmValue);
    } else {
      	Serial.println(" - off");
        analogWrite(buzzerPin, LOW);
    }

    delay(250);
}
