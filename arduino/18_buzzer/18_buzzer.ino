#define BUZZER_LOW 0
#define BUZZER_HIGH (255 / 5 * 4)

const int buttonPin = 2;
const int buzzerPin = 3;

void setup()
{
    pinMode(buttonPin, INPUT);
  	pinMode(buzzerPin, OUTPUT);

    digitalWrite(buzzerPin, BUZZER_LOW);
  
  	Serial.begin(9600);
    Serial.println();
}

void loop() {
    int reading = digitalRead(buttonPin);
	Serial.print(reading);
  
    if (reading == HIGH) {
      	Serial.println(" - off");
        analogWrite(buzzerPin, BUZZER_LOW);
    } else {
        Serial.println(" - on");
        analogWrite(buzzerPin, BUZZER_HIGH);
    }
    
    delay(250);
}
