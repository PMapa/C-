#include <iostream>
using namespace std;

int main () {
    int lin, col;
    cout << "Informe o número de linhas: ";
    cin >> lin;
    cout << "Informe o número de colunas: ";
    cin >> col;

    float matriz [lin][col];

    //cout << "Informe o número de elementos da matriz: ";
    for (int i; i < lin; i++){
        cout << " ";
        cin >> matriz[i]
    }

    int maior = 0;
    for (int j=0; j < lin; j++){
        for (int k=0; k < col; k++){
            if (matriz[j][k] > maior){
                maior = matriz[i][j]
            }
        }
    }

    int soma;
    soma += matriz[i]
    return 0;
}