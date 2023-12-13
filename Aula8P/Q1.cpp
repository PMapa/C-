#include <iostream>
#include <set>
using namespace std;

int maior (set<int> c){
    return *c.rbegin();
}

int menor (set<int> c){
    return *c.begin();
}

void imprimir (set<int> c){
    for (int i : c) {
        cout << i << " ";
    }
}

int main () {
    cout << "Digite os elementos (999 para encerrar): " << endl;
    set<int> elementos;

    int n;
    while (n != 999) {
        cout << "Número: ";
        cin >> n;
        elementos.insert(n);

        cout << "Número: ";
        cin >> n;
    }

    int mai = maior(elementos);
    cout << "Maior elemento: " << mai << endl;
    
    int men = menor(elementos);
    cout << "Menor elemento: " << men << endl;
    
    cout << "Elementos do conjunto: " ;
    imprimir(elementos);
    
    return 0;
}