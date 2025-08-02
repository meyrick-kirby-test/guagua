const int outPin = 2;

void setup()
{
    pinMode(outPin, OUTPUT);

    Serial.begin(9600);
    Serial.println();
    Serial.println("Enter 1 or 0");
}

void loop()
{
    if (Serial.available() > 0)
    {
        char ch = Serial.read();
        if (ch == '1')
        {
            Serial.println("On");
            digitalWrite(outPin, HIGH);
        }
        else if (ch == '0')
        {
            Serial.println("Off");
            digitalWrite(outPin, LOW);
        }
    }
}
