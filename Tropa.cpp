#include "Tropa.h"

Tropa::Tropa(){

}

double Tropa::ataque(){

}

long Tropa::getCalimento(){
    return c_alimento;
}

long Tropa::getCoro(){
    return c_oro;
}

int Tropa::getAtk(){
    return atk;
}

int Tropa::getDef(){
    return def;
}

int Tropa::getHp(){
    return hp; 
}

int Tropa::getSpd(){
    return spd;
}

int Tropa::getEntrenamiento(){
    return entrenamiento;
}

void Tropa::setCalimento(long c){
    c_alimento = c;
}

void Tropa::setCoro(long c){
    c_oro = c;
}

void Tropa::setAtk(int a){
    atk = a;
}

void Tropa::setDef(int d){
    def = d;
}

void Tropa::setHp(int h){
    hp = h;
}

void Tropa::setSpd(int s){
    spd = s;
}

void Tropa::setEntrenamiento(int e){
    entrenamiento = e;
}

Tropa::~Tropa(){

}