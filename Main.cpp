#include <iostream>
#include <string>
#include "ClaseGato.h"
#include "Primos.h"
#include "miSuma.h"

using namespace std;
int nprimos [100];


int main () {
    
    string nombreGato {"minix"};
    int edadGato, horasSueno;
    Gato miGato (nombreGato, edadGato, horasSueno);
    Gato Meof (nombreGato, edadGato, horasSueno);
    cout << "Primer programa con uso de clases en C++ " << endl;
    Meof.come();
    Meof.duerme();
    Meof.muestraGato();
    Gato Orejeof ("Orejeof",10,14);
    Orejeof.pideDatos ();
    Orejeof.muestraGato ();
    switch (edadGato) {
        case 4: cout << "El gato " << nombreGato << " es muy joven" << endl;
                break;
        case 8: cout << "El gato " << nombreGato << " es adulto" << endl;
                break;
        case 12:cout << "El gato " << nombreGato << " es muy mayor" << endl;
                break;
        default:cout << "El gato " << nombreGato << " es muy indeterminado" << endl;
        break;
    }
    primos100 (nprimos);
    miSuma estaSuma (3,4);
    estaSuma.suma (4,5);
    
    return 0;
}