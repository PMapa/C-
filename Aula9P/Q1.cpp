#include <iostream>
#include <stack>
using namespace std;

bool remove (stack<int>& c, int K) {
    stack<int> a;
    bool retorno = false;

    while (!c.empty()){
        int elemento = c.top();
        c.pop();

        if (elemento != K){
            a.push(elemento);
        }
        else{
            retorno = true;
        }
    }

    while (!a.empty()){
        int elemento = a.top();
        c.push(elemento);
        a.pop();
    }

    return retorno;    
}

void imprimir (stack<int> c){
    cout << endl << "Elementos da pilha:" << endl;

    cout << "Topo: " << c.top() << endl;

    while (!c.empty()){
        cout << c.top() << " ";
        c.pop();

    }
}

int main () {
    stack<int> conjunto;
    cout << "Digite os elementos da pilha (-1 para encerrar):" << endl;

    int valor;
    cout << "";
    cin >> valor;
    while (valor != -1){
        conjunto.push(valor);

        cout << "";
        cin >> valor;
    }

    int k;
    cout << "Digite o valor a ser removido: ";
    cin >> k;

    bool del;
    del = remove(conjunto, k);

    if (del == true){
        cout << "O valor " << k << " foi removido com sucesso." << endl;
    }
    else {
        cout << "O valor " << k << " não pertence a pilha." << endl;
    }

    imprimir(conjunto);


    return 0;
}