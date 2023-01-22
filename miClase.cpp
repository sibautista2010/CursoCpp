#include <iostream>
#include "miClase.hpp"

using namespace std;

void miSuma::suma (int _n1, int _n2) {
    cout << "================================="<< endl;
    cout << " Operación de suma de dos numeros"<< endl;
    cout << "=== clases en varios archivos ==="<< endl;
    cout << "La suma de a y b es :" << _n1 << endl;
    cout << "================================="<< endl;
}

miSuma::miSuma (int _a, int _b){
    a = _a;
    b = _b;
}