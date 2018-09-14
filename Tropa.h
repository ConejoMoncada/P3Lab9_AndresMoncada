#ifndef TROPA_H
#define TROPA_H

class Tropa{
    protected:
        char sexo;
        long c_alimento,c_oro;
        int atk,def,hp,spd,entrenamiento;
    public:
        Tropa();

        virtual double ataque();

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