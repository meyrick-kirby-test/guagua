void setup() {
    Serial.begin(9600);
    Serial.println();

    char message[] = "Hello, World!";
    // char* message = "Hello, World!";

    Serial.println(message);

    for (int i = 0; message[i] != '\0'; ++i) {
        Serial.print(message[i]);
        Serial.print(" ");
    }
    Serial.println();
}

void loop() {
}
