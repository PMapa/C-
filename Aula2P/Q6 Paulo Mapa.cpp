#include <iostream>
using namespace std;

int main(){

    int elementos;
    cout << "Informe o n�mero de elementos: ";
    cin >> elementos;

    int vetor[elementos];
    cout << "Informe os elementos: ";
    //PARA INSERIR, � ELEMENTO POR ELEMENTO! ::
    for (int i = 0; i < elementos; i++) {
        cin >> vetor[i];
    }

    cout << vetor; 
    
    int contaP=0;
    int somaI=0;

    for (int i=0; i <= elementos+1; i++){
        float resto = vetor[i] % 2;
        if (resto == 0){
            contaP++;
        }
        else {
            somaI = somaI + vetor[i];
        }
    }

    cout << "Quantidade de pares: " << contaP << endl;
    cout << "Soma dos ímpares: " << somaI << endl;

    return 0;
}
