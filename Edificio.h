#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edificio{
    protected:
        long c_oro,c_piedra,c_madera;
    public:
        Edificio();
        Edificio(long,long,long);

        long getCoro();
        void setCoro(long);

        long getCmadera();
        void setCmadera(long);

        long getCpiedra();
        void setCpiedra(long);

        ~Edificio();
};
#endif