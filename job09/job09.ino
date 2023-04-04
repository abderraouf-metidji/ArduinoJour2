#include <LiquidCrystal.h>

// Broches de connexion du joystick
const int pin_x = A0;
const int pin_y = A1;

// Broches de connexion de l'écran LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Initialisation de l'écran LCD
  lcd.begin(16, 2);
  // Affichage du message de bienvenue
  lcd.print("Joystick LCD");
}

void loop() {
  // Lecture des valeurs du joystick
  int x = analogRead(pin_x);
  int y = analogRead(pin_y);

  // Affichage du sens de direction sur l'écran LCD
  if (x < 400) {
    lcd.setCursor(0, 1);
    lcd.print("Gauche ");
  } else if (x > 600) {
    lcd.setCursor(0, 1);
    lcd.print("Droite ");
  } else if (y < 400) {
    lcd.setCursor(0, 1);
    lcd.print("Haut   ");
  } else if (y > 600) {
    lcd.setCursor(0, 1);
    lcd.print("Bas    ");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Centre ");
  }

  // Attente d'une seconde avant la prochaine lecture
  delay(1000);
}
