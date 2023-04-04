

void ledRVBpwm(int pwmRouge, int pwmVert, int pwmBleu);

const int ledRouge=3; // Constante pour la broche 3
const int ledVert=5; // Constante pour la broche 5
const int ledBleu=6; // Constante pour la broche 6

int tension, val;
void setup() {

pinMode (ledVert,OUTPUT);
pinMode (ledRouge,OUTPUT);
pinMode (ledBleu,OUTPUT);

}

void loop(){

"C'est ici qu'on change la couleur"
tension = 2*255;

val = map(tension,0,1023,0,2*255);

if( val < 255)
ledRVBpwm(0,val,255-val);

if( val >= 255 && val <= 2*255)
ledRVBpwm(val-255, 255-(val-255),0);

}

void ledRVBpwm(int pwmRouge, int pwmVert, int pwmBleu) { // reçoit valeur 0-255 par couleur

analogWrite(ledRouge, pwmRouge);
analogWrite(ledVert, pwmVert);
analogWrite(ledBleu, pwmBleu);
}
