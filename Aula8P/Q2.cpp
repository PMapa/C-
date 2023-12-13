#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {
    map<int, string> dias;

    dias[1] = "domingo";
    dias[2] = "segunda";
    dias[3] = "terça";
    dias[4] = "quarta";
    dias[5] = "quinta";
    dias[6] = "sexta";
    dias[7] = "sabado";

    int dia;
    while (dia != -1) {
        cout<< "Digite o número: ";
        cin >> dia;

        auto diaS = dias.find(dia);
        cout << "Dia da semana: " << diaS->second << endl;
        
        cout << endl << "Digite o número: ";
        cin >> dia;
    }

    return 0;
}