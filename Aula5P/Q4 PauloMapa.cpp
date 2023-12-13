#include <iostream>
#include <math.h>
using namespace std;

struct Ponto {
    int X;
    int Y;
};

float distancia (Ponto p1, Ponto p2){
    float dist = sqrt(pow(p2.X-p1.X, 2) + pow(p2.Y-p1.Y,2));
    return dist;
}

int main () {
    int pontos;
    cout << "Informe o número de pontos: ";
    cin >> pontos;

    //Ponto vetor[pontos];
    Ponto *vetor = new Ponto[pontos];

    for (int i=0; i<pontos; i++){
        cout << "Informe a coordenada x do ponto "<< i+1 <<": ";
        cin >> vetor[i].X;
        cout << "Informe a coordenada y do ponto "<< i+1 <<": ";
        cin >> vetor[i].Y;
    }

    float tamanho = 0;

    for (int j=0; j<pontos-1; j++){
        tamanho += distancia(vetor[j], vetor[j+1]);
    }

    cout << "Tamanho do caminho: " << tamanho;

    delete[] vetor;

    return 0;
}