#include <iostream>
#include <fstream>
using namespace std;

struct Aluno{
    string nome;
    float nota1;
    float nota2;
    float media;
};

int main () {
    
    Aluno alunos[10];

    for (int i=0; i<10; i++){
        cout << "-";
        cin >> alunos[i].nome >> alunos[i].nota1 >> alunos[i].nota2;
    }

    for (int i=0; i<10; i++){
        float media;
        media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        alunos[i].media = media;
    }

    ofstream arquivo;
    arquivo.open("alunos.txt");
    
    for (int i=0; i<10; i++){
        arquivo << alunos[i].nome << " " << alunos[i].nota1 << " " << alunos[i].nota2 << " " << alunos[i].media << endl;
    }

    arquivo.close();
    return 0;
}