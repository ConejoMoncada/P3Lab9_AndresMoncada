#include "Edificio.h"

Edificio::Edificio(){
    c_oro = 50;
    c_madera = 20;
    c_piedra = 30;
}

Edificio::Edificio(long oro, long madera,long piedra){
    c_oro = oro;
    c_madera = madera;
    c_piedra = piedra;
    
}

long Edificio::getCoro(){
    return c_oro;
}

void Edificio::setCoro(long oro){
    c_oro = oro;
}

long Edificio::getCmadera(){
    return c_madera;
}

void Edificio::setCmadera(long madera){
    c_madera = madera;
}

long Edificio::getCpiedra(){
    return c_piedra;
}

void Edificio::setCpiedra(long piedra){
    c_piedra = piedra;
}

Edificio::~Edificio(){
    
}