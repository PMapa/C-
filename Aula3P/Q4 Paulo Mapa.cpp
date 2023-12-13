#include <iostream>;
using namespace std;

int& retornaRazao(int &x, int &y){
    if (y == 0) {
        x = 0;
        return x;
    }
    else {
        return y;
    }
}

int main () {
    int a, b;
    cout << "Digite um número inteiro: ";
    cin >> a;

    cout << "Digite um número inteiro: ";
    cin >>b;

    int ret = retornaRazao (a, b);

    if (ret == 0) {
        cout << "ERRO" << endl;
    }
    else {
        int razao = a/b;
        cout << razao;
    }
    return 0;
}
