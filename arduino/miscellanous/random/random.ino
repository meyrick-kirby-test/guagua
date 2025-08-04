const int delayDuration = 500;
const int analogPin = 0;
const float vToA = 1023 / 5;

void setup() {
    Serial.begin(9600);
    int seed = analogRead(analogPin);
    randomSeed(seed);
}

void loop() {
    int number = random(1, 10);
    Serial.println(number);
    delay(delayDuration);
}
