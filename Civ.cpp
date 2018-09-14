#include "Civ.h"

#include<iostream>
using std::cout;
using std::endl;

Civ::Civ(){

}

Civ::Civ(string nom,long o,long p,long a,long pm){
    nombre = nom;
    oro = o;
    piedra = p;
    alimento = a;
    pob_max = pm;
    pob_act = 0;
    pob_cap = 0;
}

void Civ::listarTropas(){
    Guerrero g;
    Soldado s;
    Caballeria c;
    for (int i = 0; i < tropas.size(); i++){
    }
}

vector<Aldeano> Civ::getAldeanos(){
    return aldeanos;
}

vector<Tropa> Civ::getTropas(){
    return tropas;
}

vector<Edificio> Civ::getEdificios(){
    return edificios;
}

void Civ::setAldeanos(vector<Aldeano> aa){
    aldeanos = aa;
}

void Civ::setTropas(vector<Tropa> tt){
    tropas = tt;
}

void Civ::setEdificios(vector<Edificio> ee){
    edificios = ee;
}

void Civ::desterrar(){
    aldeanos.clear();
    tropas.clear();
    pob_act = 0;
    oro = 0;
    alimento = 100;
    piedra = 0;
}

Civ::~Civ(){

}