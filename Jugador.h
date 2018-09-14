#ifndef JUGADOR_H
#define JUGADOR_H

#include "Civ.h"
#include<string>
using std::string;

class Jugador{
    private:
        string nombre;
        Civ c;
    public:
        Jugador();
        Jugador(string);

        string getNombre();
        void setNombre(string);

        Civ getCiv();
        void setCiv(Civ);

        ~Jugador();
};
#endif