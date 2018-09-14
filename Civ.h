#ifndef CIV_H
#define CIV_H

#include "Aldeano.h"
#include "Edificio.h"
#include "Casa.h"
#include "Castillo.h"
#include "Cuartel.h"
#include "Tropa.h"
#include "Guerrero.h"
#include "Soldado.h"
#include "Caballeria.h"

#include<vector>
using std::vector;
#include<string>
using std::string;

class Civ{
    private:
        string nombre;
        long oro,madera,piedra,alimento;
        long pob_max, pob_act, pob_cap;
        vector<Aldeano> aldeanos;
        vector<Tropa> tropas;
        vector<Edificio> edificios;
    public:
        Civ();
        Civ(string,long,long,long,long);

        void listarTropas();

        vector<Aldeano> getAldeanos();
        vector<Tropa> getTropas();
        vector<Edificio> getEdificios();

        void setAldeanos(vector<Aldeano>);
        void setTropas(vector<Tropa>);
        void setEdificios(vector<Edificio>);

        string getNombre();
        long getOro();
        long getMadera();
        long getPiedra();
        long getAlimento();
        long getMax();
        long getAct();
        long getCap();

        void setNombre(string);
        void setOro(long);
        void setMadera(long);
        void setPiedra(long);
        void setAlimento(long);
        void setMax(long);
        void setAct(long);
        void setCap(long);

        void addOro(long);
        void addMadera(long);
        void addPiedra(long);
        void addAlimento(long);
        void addCap(long);

        void subtOro(long);
        void subtMadera(long);
        void subtPiedra(long);
        void subtAlimento(long);
        void subtCap(long);
        
        void desterrar();


        ~Civ();
};
#endif