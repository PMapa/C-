#include <iostream>
#include <fstream>
using namespace std;

int main () {

    ofstream arquivo;
    arquivo.open("dados.txt");

    for (int i=1; i<101; i++) {
        arquivo << i << endl;
    }
    arquivo.close();

    return 0;
}