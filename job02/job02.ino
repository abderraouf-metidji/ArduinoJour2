//potentiomètre sur LCD
#include "LiquidCrystal.h"

int sensorPin = A0; // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor

int memory_tension=0;
int i=0;
LiquidCrystal lcd(11,10,5,4,3,2);
void setup() {
 // declare the ledPin as an OUTPUT:
  lcd.begin(16,2); // utilisation d'un écran 16 colonnes et 2 lignes
  //décalage sur curseur (optionnel)
  Serial.begin(9600);
}
void loop() {
 // read the value from the sensor:
 lcd.clear();
 sensorValue = analogRead(sensorPin);
 sensorValue = map(sensorValue, 0, 1023, 0, 5);
 lcd.print(sensorValue,DEC);
 lcd.print(" Volt");
 delay(1000);
}