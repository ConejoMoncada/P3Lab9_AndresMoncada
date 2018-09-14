#include "Aldeano.h"

Aldeano::Aldeano(){
    sexo = '?';
    costo = 55;
}

Aldeano::Aldeano(char s){
    sexo = s;
    costo = 55;
}

char Aldeano::getSexo(){
    return sexo;
}

void Aldeano::setSexo(char s){
    sexo = s;
}

long Aldeano::getCosto(){
    return costo;
}

void Aldeano::setCosto(long c){
    costo = c;
}

Aldeano::~Aldeano(){

}
