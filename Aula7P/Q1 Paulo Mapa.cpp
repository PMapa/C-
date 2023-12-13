#include <iostream>
#include <vector>
using namespace std;

int main (){
    
    vector<int> numeros;
    
    cout << "Digite uma sequência de números inteiros (999 encerra a leitura):" << endl;

    int aux = 0;
    while (aux != 999){
        cout << " ";
        cin >> aux;
        numeros.push_back(aux);
    }

    int positivos=0, soma=0;

    int tamanho = numeros.size();
    for (int i=0; i < tamanho-1; i++){
        cout << numeros[i] << " ";
        if (numeros[i]>0){
            positivos++;
        }
        else {
            soma += numeros[i];
        }

    }

    
    cout << endl << "Quantidade de valores positivos: " << positivos;
    cout << endl << "Soma dos valores negativos: " << soma;

    return 0;
}