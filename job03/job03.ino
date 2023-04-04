#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smiley[8] = {
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b10001,
  0b10001,
  0b01110,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, smiley);
}

void loop() {
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.write(byte(0));
  delay(1000);
}
