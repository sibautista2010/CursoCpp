#include <iostream>
using namespace std;

class Gato {
    private:
        string nombre;
        int edad;
        int hDormido;
    public:
        Gato (string, int, int);
        void come (void);
        void duerme (void);
        void muestraGato (void);
};

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


int main () {
    
    Gato Meof ("Meof", 8, 12);
    cout << "Primer programa con uso de clases en C++" << endl;
    Meof.come();
    Meof.duerme();
    Meof.muestraGato();

    return 0;
    
}