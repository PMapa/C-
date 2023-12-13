#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void inverterFila (queue<int>& fila){
    cout << "Inversão: ";
    stack<int> aux;

    
    while (!fila.empty()){
        aux.push(fila.front());
        fila.pop();

    }
    
    while (!aux.empty()){
        fila.push(aux.top());
        aux.pop();
        
    }

}

void imprimirFila (queue<int> fila){
    cout <<"Elementos da fila:" << endl;
    cout << "Frente: " << fila.front() << endl;
    cout << "Trás: " << fila.back() << endl;
    
    while (!fila.empty()){
        cout << fila.front() << " ";
        fila.pop();

    }
    cout << endl;

}

int main (){

    queue<int> valores;

    int n=0;
    cout << "Digite os elementos da fila(-1 para encerrar):" << endl ;
    cout << "";
    cin >> n;

    while (n != -1){
        valores.push(n);

        cout << "";
        cin >> n;
    }

    cout << " " << endl;
    imprimirFila(valores);
    cout << " " << endl;
    inverterFila(valores);
    cout << " " << endl;
    imprimirFila(valores);

    return 0;
}