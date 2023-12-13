#include <iostream>
using namespace std;

int main(){

    //criar um vetor ilimitado
    double vetor[0];
    int i=0;

    cout << "Digite uma sequência de números inteiros (0 para encerrar): " << endl;
    while (vetor[i] != 0){
        cout << "";
        cin >> vetor[i];
        i++;
    }

    float maior = 0;
    float menor = 0;

    for (int j = 0 ; j < sizeof(vetor) ; j++){
        if (vetor[j] > maior) {
            maior = vetor[j];
        }
    }

    for (int l = 0 ; l < sizeof(vetor) ; l++){
        if (vetor[l] > menor) {
            menor = vetor[l];
        }
    }

    float soma = 0;
    for (int k = 0 ; k < sizeof(vetor) ; k++) {
        soma = soma + vetor[k];
    }
    float media = soma / sizeof(vetor);

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Média: " << media << endl;

    return 0;
}
