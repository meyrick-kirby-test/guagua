void setup()
{
  	Serial.begin(9600);
    Serial.println();
    Serial.println("Beginning test");

    long iterations = 2000000L;

    long startTime = millis();
   	// long j = 0;
    float j = 0;
  	for (long i = 0; i < iterations; ++i) {
        j = i * i * 10;
        if (j > 10)
            j = 0;
    }
    long endTime = millis();
    long duration = (endTime - startTime) / 1000L;
    float frequency = iterations / (endTime - startTime);

    Serial.println(j);

    Serial.println("Finished test");

    Serial.print("Seconds taken: ");
    Serial.print(duration);
    Serial.println(" s");

    Serial.print("Frequency:     ");
    Serial.print(frequency);
    Serial.println(" kHz");
}

void loop() {
}
