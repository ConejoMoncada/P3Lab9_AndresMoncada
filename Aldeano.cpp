#include "Aldeano.h"

Aldeano::Aldeano(){
    sexo = '?';
    costo = 500;
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
