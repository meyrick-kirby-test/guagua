const int outputPin = 3;

void setup()
{
    pinMode(outputPin, OUTPUT);

    analogWrite(outputPin, 0);

    Serial.begin(9600);
    Serial.println();

    Serial.println("Enter Volts 0 to 5");
}

void loop()
{
    if (Serial.available() > 0)
    {
        float volts = Serial.parseFloat();
        Serial.println(volts);
        int pwmValue = volts * 255.0 / 5.0;
        analogWrite(outputPin, pwmValue);
    }
}
