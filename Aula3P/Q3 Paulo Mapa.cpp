#include <iostream>
using namespace std;

float funcao (int n){
    float s = 2/4 + 6/5 + 12/6 + (n*(n+1)/n+3);
    return s;
}

int main () {
    int N;
    cout << "Digite o número de parcelas da soma: ";
    cin >> N;

    float S = funcao (N);
    cout << endl << "A soma das parcelas: " << S;
    return 0;
}
