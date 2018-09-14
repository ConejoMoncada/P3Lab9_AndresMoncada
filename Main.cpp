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

vector<Jugador> jugadores;
vector<Civ> civilizaciones;
Civ enemigo;
Jugador jact;//actual

void inicio();

int main(){
    cout << "Bienvenido/a al programa de prueba de Age of Empires II v1.0" << endl << endl;
    int op;
    cout << "Para jugar el juego es necesario crear una civilización" << endl
    << "La versión de prueba usa una copia de tu civilización para batallar" << endl;
    string nom;
    long pmax;
    Guerrero g;
    cout << "Ingrese el nombre: ";
    cin >> nom;
    cout << "Población máxima: ";
    cin >> pmax;
    Civ civ(nom,pmax);
    civilizaciones.push_back(civ);
    do{
        cout << "1. Crear civilización" << endl << "2. Crear jugador" << endl
        << "3. Ingresar" << endl << "0. Salir" << endl
        << "Ingrese una opción: ";
        cin >> op;
        switch(op){
            case 1:{
                string nombre;
                long p_max;
                Civ civ2(nombre,p_max);
                civilizaciones.push_back(civ);
            }
            break;
            case 2:{
                string nombre;
                int index = -1;
                cout << "Nombre del jugador: ";
                cin >> nombre;
                Jugador j(nombre);
                for (int i = 0; i < civilizaciones.size();i++){
                    cout << i<<". " << civilizaciones[i].getNombre() << endl;
                }
                while(index < 0 || index >= civilizaciones.size()){
                    cout << "Ingrese el índice de la civilización que quiere usar: ";
                    cin >> index;
                }
                j.setCiv(civilizaciones[index]);
                jugadores.push_back(j);
            }
            break;
            case 3:{
                if(jugadores.size() > 0){
                    int index = -1;
                    for (int i = 0; i < jugadores.size();i++){
                        cout << i<<". " << jugadores[i].getNombre() << endl;
                    }
                    while(index < 0 || index >= jugadores.size()){
                        cout << "Ingrese el índice del jugador que quiere usar: ";
                        cin >> index;
                    }
                    jact = jugadores[index];
                    inicio();
                }else
                    cout << "No hay jugadores creados" << endl;
            }
        }
    }while(op != 0);

    return 0;
}

void inicio(){
    int op,s_op;
    do{
        cout << jact.getCiv().getNombre() << endl << jact.getCiv().getAldeanos().size() << " Aldeanos"
        << endl << jact.getCiv().getTropas().size() << " Tropas" << endl
        << jact.getCiv().getAlimento() << " Uds. alimento" << endl
        << jact.getCiv().getOro() << " Uds. oro" << endl
        << jact.getCiv().getPiedra() << " Uds. piedra" << endl
        << jact.getCiv().getMadera() << " Uds. madera" << endl
        << "Capacidad: " << jact.getCiv().getCap() << endl
        << "Límite: " << jact.getCiv().getMax() << endl;
        cout << "1. Nuevo aldeano" << endl << "2. Buscar recursos" << endl 
        << "3. Nuevo edificio" << endl << "4. Nueva tropa" << endl
        << "4. Desterrar población" << endl << "5. Batalla" << endl 
        << "6. Finalizar turno" << endl << "0. Volver a menu principal" << endl
        << "Ingrese una opción: ";
        cin >> op;
        switch (op){
            case 1:{
                if(jact.getCiv().getAlimento() < 55){
                    cout << "No hay recursos para crear esta unidad" << endl;
                }
                else{
                    char s;
                    cout << "Sexo del aldeano [m/f]: ";
                    cin >> s;
                    Aldeano aa(s);
                    jact.getCiv().getAldeanos().push_back(aa);
                    jact.getCiv().subtAlimento(55);
                }
            }
            break;
            case 2:{
                for(int i = 0; i < jact.getCiv().getAldeanos().size(); i ++){
                    jact.getCiv().addAlimento(50);
                    jact.getCiv().addMadera(40);
                    jact.getCiv().addOro(30);
                    jact.getCiv().addPiedra(20);
                }
            }break;
            case 4:{
                jact.getCiv().desterrar();
            }break;
        }
        /*
        
        Casa
        Cuartel
        Castillo
        
        Soldado
        Caballería
        Guerrero especial
        
        */
    }while(op!= 0);
}