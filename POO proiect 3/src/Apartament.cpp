#include "Apartament.h"

Apartament::Apartament()
{
    //ctor
}
Apartament::Apartament(Apartament* a)
{
    index=a->Getindex();
    etaj=a->Getetaj();
}
int Apartament::pretInchiriere(){
    return Locuinta::pretInchiriere();
}
void Apartament::add_index(){
    index++;
}
istream& operator>>(istream& in, Apartament& x){
    x.citireVirtuala();
    cout << "Introdu etajul la care se afla apartamentul:";
    in >> x.etaj;
    return in;
}
ostream& operator<<(ostream& out, Apartament& x){
    x.afisareVirtuala();
    out << "Etajul la care se afla apartamentul: " << x.etaj << endl;
    return out;
}
Apartament::~Apartament()
{
    //dtor
}
