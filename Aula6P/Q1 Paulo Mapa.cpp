#include <iostream>
using namespace std;

void ordemDecres(int A[], int n){
    int max, aux;
    for(int i=0; i<n; i++){
        max = i;
        for(int j = i+1; j<n; j++){
            if(A[j] > A[max])
                max = j;
    }
    aux = A[i];
    A[i] = A[max];
    A[max] = aux;
    }
}

int main (){
    int len = 6;
    int vet[len];
    
    cout << "";
    for (int i =0; i<len; i++) {
        cin >> vet[i];
    }

    ordemDecres(vet, len);

    for (int i=0; i<len; i++){
        cout << vet[i] << " ";
    }
    return 0;
}