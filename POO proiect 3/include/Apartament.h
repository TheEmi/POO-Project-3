#ifndef APARTAMENT_H
#define APARTAMENT_H

#include <Locuinta.h>


class Apartament : public Locuinta
{
    public:
        Apartament();
        Apartament(Apartament*);
        virtual ~Apartament();

        int Getetaj() { return etaj; }
        int Getindex() { return index; }
        void Setetaj(int val) { etaj = val; }
        int pretInchiriere();
        void add_index();
        friend istream& operator>>(istream&, Apartament&);
        friend ostream& operator<<(ostream&, Apartament&);
    protected:

    private:
        int index=0;
        int etaj;
};

#endif // APARTAMENT_H
