#ifndef CASA_H
#define CASA_H

#include <Locuinta.h>


class Casa : public Locuinta
{
    public:
        Casa();
        Casa(Casa*);
        virtual ~Casa();

        int Getmp_curte() { return mp_curte; }
        void Setmp_curte(int val) { mp_curte = val; }
        int Getetaje() { return etaje; }
        int Getindex() { return index; }
        int Getmp_etaje(int i) { return mp_etaje[i]; }
        void Setetaje(int val) { etaje = val; }
        int pretInchiriere();
        void add_index();
        friend istream& operator>>(istream&, Casa&);
        friend ostream& operator<<(ostream&, Casa&);
    protected:

    private:
        int index;
        int mp_curte;
        int etaje;
        int mp_etaje[100];
};

#endif // CASA_H
