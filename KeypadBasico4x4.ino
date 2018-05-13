
#include <Keypad.h>

const byte LINHAS = 4;
const byte COLUNAS = 4;

const char TECLAS[LINHAS][COLUNAS] = {
        {'1', '2', '3', 'A'},
        {'4', '5', '6', 'B'},
        {'7', '8', '9', 'C'},
        {'*', '0', '#', 'D'}
};

byte pinosLinhas[LINHAS] = {4, 5, 6, 7};
byte pinosColunas[COLUNAS] = {8, 9, 10, 11};

Keypad teclado = Keypad(makeKeymap(TECLAS), pinosLinhas, pinosColunas, LINHAS, COLUNAS);

void setup() {
    Serial.begin(9600);
    Serial.println("Teclado OFF ROAD 4X4... ");
    Serial.println();
}

void loop() {
    char teclaPressionada = teclado.getKey();
    if (teclaPressionada) {
        Serial.print("Tecla pressionada -> ");
        Serial.println(teclaPressionada);
    }
}
