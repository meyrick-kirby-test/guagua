const int redPin = 4;
const int yellowPin = 3;
const int greenPin = 2;

void setup()
{
  	pinMode(redPin, OUTPUT);
  	pinMode(yellowPin, OUTPUT);
  	pinMode(greenPin, OUTPUT);

    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
}

void loop()
{
    digitalWrite(redPin, HIGH);
    delay(5000);
    digitalWrite(redPin, LOW);

    digitalWrite(yellowPin, HIGH);
    delay(1000);
    digitalWrite(yellowPin, LOW);

    digitalWrite(greenPin, HIGH);
    delay(5000);
    digitalWrite(greenPin, LOW);
}
