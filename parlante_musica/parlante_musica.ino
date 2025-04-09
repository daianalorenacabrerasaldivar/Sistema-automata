
#include <LiquidCrystal.h>


/**************** Antonio Guillermo Pérez Coronilla ***************/
/* declaración de variables */
int spk = 3;                                // altavoz a GND y pin 13
int c[5] = { 131, 262, 523, 1046, 2093 };   // frecuencias 4 octavas de Do
int cs[5] = { 139, 277, 554, 1108, 2217 };  // Do#
int d[5] = { 147, 294, 587, 1175, 2349 };   // Re
int ds[5] = { 156, 311, 622, 1244, 2489 };  // Re#
int e[5] = { 165, 330, 659, 1319, 2637 };   // Mi
int f[5] = { 175, 349, 698, 1397, 2794 };   // Fa
int fs[5] = { 185, 370, 740, 1480, 2960 };  // Fa#
int g[5] = { 196, 392, 784, 1568, 3136 };   // Sol
int gs[5] = { 208, 415, 831, 1661, 3322 };  // Sol#
int a[5] = { 220, 440, 880, 1760, 3520 };   // La
int as[5] = { 233, 466, 932, 1866, 3729 };  // La#
int b[5] = { 247, 494, 988, 1976, 3951 };   // Si

void nota(int a, int b);  // declaración de la función auxiliar. Recibe dos números enteros.

void sonidos() {
  /**************************************/
  /*                  HARRY POTTER                    */
  /**************************************/
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(e[3], 1000);
  nota(b[3], 500);
  nota(a[3], 1250);
  nota(fs[3], 1000);
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(d[3], 1000);
  nota(e[3], 500);
  nota(b[2], 1000);
  noTone(spk);
  delay(1000);
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(e[3], 1000);
  nota(b[3], 500);
  nota(d[4], 1000);
  nota(cs[4], 500);
  nota(c[4], 1000);
  nota(a[3], 500);
  nota(c[4], 1000);
  nota(b[3], 250);
  nota(as[3], 250);
  nota(b[2], 1000);
  nota(g[3], 500);
  nota(e[3], 1000);
  noTone(spk);
  delay(2000);
}

void nota(int frec, int t) {
  tone(spk, frec);  // suena la nota frec recibida
  delay(t);         // para despues de un tiempo t
}

enum Estado
{
  apagado= 0;
  prendido=1;
}
Estado Transicion(int valorentrante, estadoactual)
  case apagado:
    if(valorentrante=1){
        return prendido;
    }
    return apagado;
    break;
  case prendido:
    if()
  break;
}

const int filas = 4; // Número de filas del teclado
const int columnas = 3; // Número de columnas del teclado
const int teclas[filas][columnas] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {'*', 0, '#'}}; // Matriz de teclas

const int pinesFilas[filas] = {13, 12, 11, 10}; // Pines conectados a las filas del teclado
const int pinesColumnas[columnas] = {8, 9, 10}; // Pines conectados a las columnas del teclado

const int ledPin = 3; // Pin al que está conectado el LED

String codigoSecreto = "2024"; // Código secreto a ingresar
String codigoIngresado = "";
LiquidCrystal lcd(2, 0, A1, A2, 10, 9); // RS, E, D4, D5, D6, D7
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Ingrese contraseña");

  //sonidos();
   
}
void loop() {
  
}


