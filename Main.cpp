#include "Aldeano.h"
#include "Caballeria.h"
#include "Casa.h"
#include "Castillo.h"
#include "Civ.h"
#include "Cuartel.h"
#include "Edificio.h"
#include "Guerrero.h"
#include "Jugador.h"
#include "Soldado.h"
#include "Tropa.h"

#include<vector>
#include<iostream>
#include<string>
using namespace std;


int main(){
    cout << "Bienvenido/a al programa de prueba de Age of Empires II v1.0" << endl << endl;
    int op;
    cout << "Para jugar el juego es necesario crear una civilización" << endl
    << "La versión de prueba crea una copia de tu civilización para batallar" << endl;
    string nom;
    long oro,piedra,madera,alimento, pmax;
    do{
        cout << "";

        cin >> op;
    }while(op != 0);

    return 0;
}