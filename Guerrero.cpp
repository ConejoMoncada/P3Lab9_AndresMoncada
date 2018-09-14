#include "Guerrero.h"

Guerrero::Guerrero():Tropa(){
    tipo = "Guerrero";
    c_alimento = 150;
    c_oro = 90;
    atk = 2;
    def = 5;
    spd = 10;
    hp = 15;
    entrenamiento = 2;
    neto = atk *(1 + spd/5);
}


Guerrero::~Guerrero(){

}