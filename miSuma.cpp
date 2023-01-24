#include <iostream>
#include "miSuma.h"

using namespace std;

miSuma::miSuma (int _a, int _b){
    a = _a;
    b = _b;
}


void miSuma::suma (int _n1, int _n2) {
    cout << "================================="<< endl;
    cout << " Operación de suma de dos numeros"<< endl;
    cout << "=== clases en varios archivos ==="<< endl;
    cout << "La suma de a y b es :" << (_n1+_n2) << endl;
    cout << "================================="<< endl;
}


