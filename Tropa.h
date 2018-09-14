#ifndef TROPA_H
#define TROPA_H

#include<string>
using std::string;
class Tropa{
    protected:
        char sexo;
        string tipo;
        long c_alimento,c_oro;
        double atk,def,hp,spd,entrenamiento,neto;
    public:
        Tropa();

        double ataque();

        string getTipo();

        long getCalimento();
        long getCoro();
        int getAtk();
        int getDef();
        int getHp();
        int getSpd();
        int getEntrenamiento();

        void setCalimento(long);
        void setCoro(long);
        void setAtk(int);
        void setDef(int);
        void setHp(int);
        void setSpd(int);
        void setEntrenamiento(int);

        ~Tropa();
};
#endif