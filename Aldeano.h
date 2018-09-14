#ifndef ALDEANO_H
#define ALDEANO_H

class Aldeano{
    private:
        char sexo;
        long costo;
    public:
        Aldeano();

        char getSexo();
        void setSexo(char);

        long getCosto();
        void setCosto(long);

        ~Aldeano();
};
#endif