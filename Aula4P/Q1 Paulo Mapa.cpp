#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    float media;
    int faltas;
};

int main () {
    int nAlunos;
    cout << "Digite a quantidade de alunos: ";
    cin >> nAlunos;

    Aluno alunos[nAlunos];

    for (int i=0; i < nAlunos; i++){
        cout << "Digite o nome: ";
        cin >> alunos[i].nome;
        cout << "Digite a média: ";
        cin >> alunos[i].media;
        cout << "Digite o número de faltas: ";
        cin >> alunos[i].faltas;
    }

    for (int i=0; i < nAlunos; i ++){
        if (alunos[i].media >=6 && alunos[i].faltas <=18){
            cout << alunos[i].nome << " APROVADO(A)" << endl;
        }
        else {
            cout << alunos[i].nome << " REPROVADO(A)" << endl;
        }
    }

    return 0;
}