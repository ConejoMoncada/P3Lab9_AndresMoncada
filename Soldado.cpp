#include "Soldado.h"

Soldado::Soldado():Tropa(){
    tipo = "Soldado";
    c_alimento = 90;
    c_oro = 25;
    atk = 3;
    def = 5;
    spd = 4;
    hp = 20;
    entrenamiento = 1;
    neto = atk;
}


Soldado::~Soldado(){

}