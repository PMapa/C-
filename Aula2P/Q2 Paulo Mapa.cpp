#include <iostream>
using namespace std;

int main () {

    int codigo;
    cout << "Digite o c�digo de origem do produto: ";
    cin >> codigo;

    if (codigo == 1) {
        cout << "Proced�ncia: Amazonas";
    }

    if (codigo == 2) {
        cout << "Proced�ncia: Par�";
    }

    if ((codigo == 3) || (codigo == 4)) {
        cout << "Proced�ncia: Pernambuco";
    }

    if ((codigo == 5) || (codigo == 6)) {
        cout << "Proced�ncia: Bahia";
    }

    if ((codigo >=7) && (codigo <= 10)) {
        cout << "Proced�ncia: Belo Horizonte";
    }

    if ((codigo >=11) && (codigo <=20)) {
        cout << "Proced�ncia: S�o Paulo";
    }

    return 0;
}
