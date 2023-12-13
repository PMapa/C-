#include <iostream>:
using namespace std;

float cPf (float celsius){
    float fahrenheit = celsius * 1.8 + 32;
    return fahrenheit;
}

float fPc (float fahrenheit) {
    float celsius = (fahrenheit - 32)/1.8;
    return celsius;
}

int main () {
    float temperatura;
    cout << "Digite a temperatura: ";
    cin >> temperatura;

    char unidade;
    cout << "Digite a unidade (celsius ou fahrenheit): ";
    cin >> unidade;

    float convertida;
    if (unidade == 'celsius') {
        convertida = cPf(temperatura);
        cout << "Temperatura convertida: " << convertida << "ºC";
    }

    if (unidade == 'fahrenheit') {
        convertida = fPc(temperatura);
        cout << "Temperatura convertida: " << convertida << "ºF";
    }

    else {
        cout << "Unidade invalida!";
    }


    return 0;
}
