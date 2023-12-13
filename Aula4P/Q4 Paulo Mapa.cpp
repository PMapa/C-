#include <iostream>
#include <fstream>
using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
    float media;
};

int main () {

    ifstream arquivo;
    arquivo.open("alunos.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir arquivo" << endl;
        return 1;
    }

    Aluno aluns[10];
    for (int i=0; i<10; i++){
        arquivo >> aluns[i].nome >> aluns[i].nota1 >> aluns[i].nota2 >> aluns[i].media;
    }

    Aluno melhorAluno;
    melhorAluno.media= 0;

    for (int i=0; i<10; i++){
        if (aluns[i].media > melhorAluno.media){
            melhorAluno.media = aluns[i].media;
        }
    }
    
    cout << "Aluno com maior média: " << endl;
    cout << melhorAluno.nome << " " << melhorAluno.nota1 << " " << melhorAluno.nota2 << " " << melhorAluno.media;

    return 0;
}