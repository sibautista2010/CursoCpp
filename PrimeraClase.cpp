#include <iostream>
using namespace std;

int primos[100];
void primos100 (int []);
int divisible (int);

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
        void pideDatos ();
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
int main () {
    
    Gato Meof ("Meof", 8, 12);
    cout << "Primer programa con uso de clases en C++" << endl;
    Meof.come();
    Meof.duerme();
    Meof.muestraGato();
    Gato Orejeof ("Orejeof",10,14);
    Orejeof.pideDatos ();
    Orejeof.muestraGato ();
    primos100 (primos);

    return 0;
}