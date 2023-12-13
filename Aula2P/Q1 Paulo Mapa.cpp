#include <iostream>
using namespace std;

#include <math.h>

int main (){

    float X, Y;
    cout << "Digite valor de X: ";
    cin >> X;
    cout << "Digite o valor de Y: ";
    cin >> Y;

    if (X>0){
        if (Y>0){
            float primeiro = X/Y;
            cout << "Primeiro quadrante: Quociente = " << primeiro << endl;
        }

        else {
            float quarto = pow(X,Y);
            cout << "Quarto quadrante: X elevado a Y = " << quarto << endl;
        }
    }

    else {
        if (Y>0){
            float segundo = X*Y;
            cout << "Segundo quadrante: Produto = " << segundo << endl;
        }

        else {
            float terceiro = X + Y;
            cout << "Terceiro quadrante: Soma = " << terceiro << endl;
        }
    }

    return 0;
}
