const int dotDelay = 200;

char* letters[] = {
    ".-", "-...", "-.-.", "-..", ".",  // A-E
    "..-.", "--.", "....", "..",       // F-I
    ".---", "-.-", ".-..", "--", "-.", // J-N
    "---", ".--.", "--.-", ".-.",      // O-R
    "...", "-", "..-", "...-", ".--",  // S-W
    "-..-", "-.--", "--.."             // X-z
};

char* numbers[] = {
    "-----", ".----", "..---", "...--", "....-", // 0-4
    ".....", "-....", "--...", "---..", "----."  // 5-9
};

void setup() {
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    char ch;
    if (Serial.available() > 0) {
        ch = Serial.read();
        if (ch >= 'a' && ch <= 'z') {

            char* seq = letters[ch - 'a'];
            Serial.println(seq);
            flashSequence(seq);

        } else if (ch >= 'A' && ch <= 'Z') {

            Serial.println(letters[ch - 'a']);
            flashSequence(letters[ch - 'A']);

        } else if (ch >= '0' && ch <= '9') {

            Serial.println(numbers[ch - 'a']);
            flashSequence(numbers[ch - '0']);

        } else if (ch == ' ') {

            delay(dotDelay * 4); // gap between words
        }
    }
}

void flashSequence(char* sequence)
{
    for (int i = 0; sequence[i] != '\0'; ++i) {
        flashDotOrDash(sequence[i]);
    }
    delay(dotDelay * 3); // gap between letters
}

void flashDotOrDash(char dotOrDash)
{
    digitalWrite(LED_BUILTIN, HIGH);
    int m = dotOrDash == '.' ? 1 : 3;
    delay(dotDelay * m);
    digitalWrite(LED_BUILTIN, LOW);
    delay(dotDelay); // gap between flashes
}
