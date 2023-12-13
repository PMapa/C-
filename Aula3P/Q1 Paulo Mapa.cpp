#include <iostream>
using namespace std;

float media (float x, float y) {
    float med = (x + y)/2;
    return med;
}

int main () {
    float a, b;
    cout << "Insira o primeiro elemento: ";
    cin >> a;
    cout << "Insira o segundo elemento: ";
    cin >> b;
    float mid = media(a, b);
    cout << endl << "Media: " << mid;
}
