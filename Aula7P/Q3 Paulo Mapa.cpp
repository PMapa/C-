#include <iostream>
#include <list>
using namespace std;

list<int> mescla (list<int> &um, list<int> &dois){
    um.sort();
    dois.sort();

    list<int> juntas;
    juntas.merge(um);
    juntas.merge(dois);
    
    return juntas;
}

int main (){

    list<int> listaUm;
    cout << "Digite os elementos da primeira lista (999 encerra a leitura):" << endl;

    int aux1 = 0;
    while (aux1 != 999){
        cout << " ";
        cin >> aux1;
        //o primeiro código estava incluindo o 999
        if (aux1 != 999){
            listaUm.push_back(aux1);
        }
    }



    list<int> listaDois;
    
    cout << "Digite os elementos da segunda lista (999 encerra a leitura):" << endl;

    int aux2 = 0;
    while (aux2 != 999){
        cout << " ";
        cin >> aux2;
        //o primeiro código estava incluindo o 999
        if (aux2 != 999){
            listaDois.push_back(aux2);
        }
    }

    list<int> juntas;
    juntas = mescla(listaUm, listaDois);

    cout << "Nova lista: ";
    for (int i : juntas){
        cout << i << ", ";
    }

    return 0;
}