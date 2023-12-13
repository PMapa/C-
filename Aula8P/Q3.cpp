#include <iostream>
#include <map>
using namespace std;

int main () {

    map<string, float> precos;

    precos["feijao"] = 9.5;
    precos["tomate"] = 5.0;
    precos["cebola"] = 3.5;
    precos["banana"] = 7.5;
    precos["abacate"] = 4.0;
    precos["mamao"] = 3.0;
    precos["alho"] = 2.5;


    cout << "=== Mercadinho da tia Maria ===" << endl;
    cout << "-------------------------------" << endl;
    cout << "Preços por quilo: " << endl;
    cout << "-------------------------------" << endl;

    //printar tabela
    cout << "-------------------------------" << endl;

    float total = 0;

    string produto;
    while (produto != "fim") {
        cout << "Digite o nome do produto: ";
        cin >> produto;

        float quantidade;
        cout << "Digite a quantidade (Kg): ";
        cin >> quantidade;

        auto preco = precos.find(produto);
        
        float precKg = preco->second * quantidade;
        total += precKg;
        cout << preco->second << " * " << quantidade << " = " << precKg << endl;


        cout << "Digite o nome do produto: ";
        cin >> produto;
    }
    cout << "===============================" << endl;

    cout << "Total a pagar: " << total;

    return 0;
}