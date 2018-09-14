#include "Civ.h"

#include<iostream>
using std::cout;
using std::endl;

Civ::Civ(){

}

Civ::Civ(string nom,long pm){
    nombre = nom;
    oro = 0;
    piedra = 0;
    alimento = 100;
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

string Civ::getNombre(){
    return nombre;
}

long Civ::getOro(){
    return oro;
}

long Civ::getMadera(){
    return madera;
}

long Civ::getPiedra(){
    return piedra;
}

long Civ::getAlimento(){
    return alimento;
}

long Civ::getMax(){
    return pob_max;
}

long Civ::getAct(){
    pob_act = tropas.size()+aldeanos.size();
    return pob_act;
}

long Civ::getCap(){
    return pob_cap;
}

void Civ::addOro(long l){
    oro += l;
}

void Civ::addMadera(long l){
    madera += l;
}

void Civ::addPiedra(long l){
    piedra += l;
}

void Civ::addAlimento(long l){
    alimento += l;
}

void Civ::addCap(long l){
    pob_cap += l;
}

void Civ::subtOro(long l){
    oro -= l;
}

void Civ::subtMadera(long l){
    madera -= l;
}

void Civ::subtPiedra(long l){
    piedra -= l;
}

void Civ::subtAlimento(long l){
    alimento -= l;
}

void Civ::subtCap(long l){
    pob_cap -= l;
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