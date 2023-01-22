#include <iostream>
#include <string>
#include "miClase.hpp"
#include "Primos.h"

using namespace std;


int main () {
    
    string nombreGato {"minix"};
    int edadGato, horasSueno;
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
    primos100 (primos);
    
    return 0;
}