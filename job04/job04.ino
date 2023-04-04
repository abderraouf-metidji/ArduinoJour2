#include <LiquidCrystal.h>

// Création d'un afficheur appelé "lcd" :
LiquidCrystal lcd(4,6,10,11,12,13);        // Connecté aux broches 8, 9, 10, 11, 12 et 13 de l'Arduino.




// Initialisation du Arduino à travers la focntion "void setup(){...}".

void setup(){

// Intinitalisation de l'afficheur "lcd" (16 colonnes et 2 lignes):
    lcd.begin(16,2);

}




// Boucle sans fin du Arduino à travers la focntion "void loop(){...}".

void loop(){

        // Affichage d'un texte sur l'écran LCD :
        lcd.setCursor(2,0);                    // Positionnement du curseur.
        lcd.print("abderraouf");        // Affichage du texte.

          lcd.setCursor(2,1);                    // Positionnement du curseur.
        lcd.print("1 seconde");                // Affichage du texte.

        delay(1000);                        // Attendre 1000 ms = 1 s.

        lcd.clear();                        // Effacement de l'afficheur.

        delay(1000);                        // Attendre 1000 ms = 1 s.

}
