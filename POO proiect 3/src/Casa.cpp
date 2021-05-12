#include "Casa.h"

Casa::Casa()
{
    //ctor
}
Casa::Casa(Casa* c)
{
    index=c->Getindex();
    mp_curte = c->Getmp_curte();
    etaje = c->Getetaje();
    for(int i=0;i<etaje;i++)
    mp_etaje[i]=c->Getmp_etaje(i);
}
int Casa::pretInchiriere(){
    return Locuinta::pretInchiriere()+(mp_curte*Locuinta::Getppm());
}
void Casa::add_index(){
    index++;
}
istream& operator>>(istream& in, Casa& x){
    x.citireVirtuala();
    cout << "Introdu suprafata curtii:";
    in >> x.mp_curte;
    cout << "Introdu numarul de etaje ale casei:";
    in >> x.etaje;
    for(int i=0;i<x.etaje;i++){
        cout << "Introdu suprafata pentru etajul " << i << ":";
        in >> x.mp_etaje[i];
    }
    return in;
}
ostream& operator<<(ostream& out, Casa& x){
    x.afisareVirtuala();
    out << "Suprafata curtii: " << x.mp_curte << endl;
    out << "Numarul de etaje ale casei: " << x.etaje << endl;
    for(int i=0;i<x.etaje;i++){
        out << "Suprafata pentru etajul " << i << ": " << x.mp_etaje[i] << endl;
    }
    return out;
}
Casa::~Casa()
{
    //dtor
}
