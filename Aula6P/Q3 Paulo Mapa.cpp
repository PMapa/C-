#include <iostream>
using namespace std;

int verPosi (int N, int vet[], int proc) {
    int esq = 0, dir = N-1, meio;
    int posi;
    while(esq <= dir){
        meio = (esq+dir)/2;
        if(vet[meio] == proc){
            posi = meio;
            return posi;
        }
        else if(vet[meio] > proc){
            dir = meio-1;
        }
        else {
            esq = meio+1;
        }
        return -1;
    }
}

int main () {
    int n;
    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> n;

    int vetor[n];
    cout << "Digite os elementos do vetor: ";
    for (int i =0; i<n; i++){
        cin >> vetor[i];
    }

    int procurado;
    cout << "Digite o elemento procurado: ";
    cin >> procurado;

    int posicao = verPosi(n, vetor, procurado);

    cout << "Posição do elemento procurado: " << posicao;

    return 0;
}