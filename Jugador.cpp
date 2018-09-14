#include "Jugador.h"

Jugador::Jugador(){
    nombre = "Jugador";
}

Jugador::Jugador(string nom){
    nombre = nom;
}

string Jugador::getNombre(){
    return nombre;
}

void Jugador::setNombre(string nom){
    nombre = nom;
}

Civ Jugador::getCiv(){
    return c;
}

void Jugador::setCiv(Civ nc){
    c = nc;
}
        
Jugador::~Jugador(){

}