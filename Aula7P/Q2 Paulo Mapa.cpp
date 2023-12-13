#include <iostream>
#include <deque>
using namespace std;

int um (deque<int>& deq){
    int mai = deq.front();
    for (int i : deq) {
        if (i > mai) {
            mai = i;
        }
    }
    return mai;
}
int dois (deque<int>& deq){
    int men = deq.front();
    for (int i : deq) {
        if (i < men) {
            men = i;
        }
    }
    return men;
}
int tres (deque<int>& deq, int mai){
    int qtdMai = 0;
    for (int i : deq) {
        if (i == mai) {
            qtdMai++;
        }
    }
    return qtdMai;
}
int quatro (deque<int>& deq, int men){
    int qtdMen = 0;
    for (int i : deq) {
        if (i == men) {
            qtdMen++;
        }
    }
    return qtdMen;
}

int main (){
    deque<int> elementos;

    cout << "Digite uma sequência de números inteiros (999 encerra a leitura):" << endl;

    int aux = 0;
    while (aux != 999){
        cout << " ";
        cin >> aux;
        //o primeiro código estava incluindo o 999
        if (aux != 999){
            elementos.push_back(aux);
        }
    }

    int maior = um(elementos);
    cout << "Maior elemento: " << maior << endl;

    int menor = dois(elementos);
    cout << "Menor elemento: " << menor << endl;

    int qtdMaior = tres(elementos, maior);
    cout << "Quantidade maior: " << qtdMaior << endl;

    int qtdMenor = quatro(elementos, menor);
    cout << "Quantidade menor: " << qtdMenor << endl;

    return 0;
}