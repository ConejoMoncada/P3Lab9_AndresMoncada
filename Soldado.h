#ifndef SOLDADO_H
#define SOLDADO_H

#include "Tropa.h"

class Soldado:public Tropa{
    public:
        Soldado();
        Soldado(long,long,int,int,int,int);

        double ataque();

        ~Soldado();
};
#endif