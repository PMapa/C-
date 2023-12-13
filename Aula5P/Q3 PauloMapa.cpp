#include <iostream>
using namespace std;

int retornaModa (int *vet, int tam){
    int mod;

    if (frequenciaModa =-1){
        return -1;
    }
    else {
        return moda;
    }
}

int main(){
    int N;
    cout << "Informe o número de elementos do vetor: ";
    cin >> N;

    int *vetor = new int[N];
    cout << "Informe os elementos do vetor: ";
    for (int i=0; i<N; i++){
        cin >> vetor[i];
    }

    int moda = retornaModa(vetor, N);
    cout << endl << "A moda é: " << moda;

    delete[] vetor;

    return 0;
}