#include "Caballeria.h"

Caballeria::Caballeria():Tropa(){
    tipo = "Caballeria";
    c_alimento = 110;
    c_oro = 60;
    atk = 2;
    def = 5;
    spd = 10;
    hp = 15;
    entrenamiento = 2;
    neto = atk + spd/2;
}


Caballeria::~Caballeria(){

}