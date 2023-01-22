#include <string.h>

using namespace std;

#ifndef CLASEGATO_H
#define CLASEGATO_H

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

#endif
