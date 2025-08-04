const int analogPin = A5;

void setup()
{
    Serial.begin(9600);
    Serial.println();
}

void loop()
{
    int reading = analogRead(analogPin);
    float voltage = reading / 204.6;

    Serial.print("Reading=");
    Serial.print(reading);
    Serial.print("\t\tVolts=");
    Serial.println(voltage);
    
    delay(500);
}
