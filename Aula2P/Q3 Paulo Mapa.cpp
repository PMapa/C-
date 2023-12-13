#include <iostream>
using namespace std;

int main () {

    float trabalho, avaliacao, exame;
    cout << "Digite a nota do trabalho de laborat�rio: ";
    cin >> trabalho;
    cout << "Digite a nota da avalia��o semestral: ";
    cin >> avaliacao;
    cout << "Digite a nota do exame final: ";
    cin >> exame;

    float soma = 0;
    float trabalhoP = trabalho*2;
    soma += trabalhoP;

    float avaliacaoP = avaliacao*3;
    soma += avaliacaoP;

    float exameP = exame*5;
    soma += exameP;

    float media = soma/10;

    char conceito;
    if (media<5){
        conceito = 'E';
    }
    if (media<6 && media >5){
        conceito = 'D';
    }
    if (media<7 && media >6){
        conceito = 'C';
    }
    if (media<8 && media >7){
        conceito = 'B';
    }
    if (media<10 && media >8){
        conceito = 'A';
    }

    cout << endl << "M�dia ponderada: " << media << endl;
    cout << "Conceito: " << conceito << endl;

    return 0;
}
