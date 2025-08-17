#include <LiquidCrystal.h>

// lcd(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int numRows = 2;
int numCols = 16;

void setup() {
    Serial.begin(9600);
    Serial.println();

    lcd.begin(numRows, numCols);
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Arduino");

    lcd.setCursor(0, 1);
    lcd.print("Rules");
}

void loop() {
    if (Serial.available() > 0) {
        char ch = Serial.read();
        if (ch == '#') {
            Serial.println("Clear");
            lcd.clear();
        } else if (ch == '/') {
            Serial.println("Newline");
            lcd.setCursor(0, 1);
        } else if (ch == '-') {
            Serial.println("Screen off");
            lcd.noDisplay();
        } else if (ch == '+') {
            Serial.println("Screen on");
            lcd.display();
        } else {
            Serial.println(ch);
            lcd.write(ch);
        }
    }
}
