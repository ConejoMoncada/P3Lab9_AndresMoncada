#include "Guerrero.h"

Guerrero::Guerrero():Tropa(){
    c_alimento = 150;
    c_oro = 90;
    atk = 2;
    def = 5;
    spd = 10;
    hp = 15;
    entrenamiento = 2;
}

double Guerrero::ataque(){
    return atk *(1 + spd/5);
}

Guerrero::~Guerrero(){

}