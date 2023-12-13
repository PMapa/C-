#include <iostream>
using namespace std;

int main(){

    int inteiro;
    cout << "Digite um valor inteiro: ";
    cin >> inteiro;

    int soma = 0;
    for (int cont = 1; cont < inteiro; cont++){
        float resto = cont%2;
        if (resto == 0){
            soma = soma + cont;

        }
    }
    cout << "Soma dos �mpares: " << soma << endl;

    return 0;
}
