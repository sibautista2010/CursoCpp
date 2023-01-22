#include <iostream>
#include "Primos.h"

using namespace std;

int primos[100];

void primos100 (int prmos[]) {
    int n{0};
    int indice {0};
    for (int i=0;i<100;i++) {
        n = divisible (i);
        if (n!= 0) {
            prmos[indice]= n;
            indice++;
        }
    }
}

int divisible (int numero) {
    int esprimo {0};
    if ((numero ==1) || (numero ==2) || (numero ==3) || (numero ==5) || (numero ==7) || (numero ==11)) {
        esprimo = 1;
        return numero;
    }
    else if ((numero % 2 !=0) && (numero % 3 !=0) && (numero % 5 !=0) && (numero % 7 !=0) && (numero % 11 !=0)) {
        esprimo = 1;
        return numero;
    }
    else {
        esprimo = 0;
        return esprimo;
    }
}