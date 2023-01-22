#include <iostream>
#include "ClaseGato.h"


using namespace std;


Gato::Gato (string _nombre, int _edad, int _hDormido) {
    nombre = _nombre;
    edad = _edad;
    hDormido = _hDormido;
}
void Gato::come () {
    cout << "El gato " << nombre << " está comiendo" << endl;
}

void Gato::duerme () {
    cout << "El gato" << nombre << " está durmiendo" << endl;
}

void Gato::muestraGato () {
    cout << "Los datos del gato " << nombre << " son :" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Horas de sueño: " << hDormido << endl;
}
void Gato::pideDatos () {
    cout << "Introduce el nombre del Gato: ";
    cin >> nombre;
    cout << endl;
    cout << "Introduce la edad del Gato: ";
    cin >> edad;
    cout << endl;
    cout << "Introduce el número de horas que duerme al día: ";
    cin >> hDormido;
    cout << endl;
}
