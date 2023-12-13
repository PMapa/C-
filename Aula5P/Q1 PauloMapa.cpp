#include <iostream>
using namespace std;

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *vetor = new int[tamanho];

    cout << "Informe os elementos do vetor: ";
    for (int i=0; i<tamanho; i++){
        cin >> vetor[i];
    }

    int *endTam = &tamanho;
    int *endVet = vetor;
    int *endPri = &vetor[0];
    int vlPri = vetor[0];
    int *endUlt = &vetor[tamanho];

    cout << endl;
    cout << "Endereço de tamanho: " << endTam << endl;
    cout << "Endereço do vetor: " << endVet << endl;
    cout << "Endereço do primeiro elemento: " << endPri << endl;
    cout << "Valor do primeiro elemento: " << vlPri << endl;
    cout << "Endereço do último elemento: " << endUlt << endl;

    delete[] vetor;

    return 0;
}