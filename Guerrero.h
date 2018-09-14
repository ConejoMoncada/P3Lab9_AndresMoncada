#ifndef GUERRERO_H
#define GUERRERO_H

#include "Tropa.h"
class Guerrero:public Tropa{
    public:
        Guerrero();

        double ataque();

        ~Guerrero();
};
#endif