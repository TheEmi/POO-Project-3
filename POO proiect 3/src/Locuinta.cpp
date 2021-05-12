#include "Locuinta.h"

Locuinta::Locuinta()
{
    //ctor
}
Locuinta::Locuinta(Locuinta* l)
{
    Nume_client = l->GetNume_client();
    su = l->Getsu();
    ppm = l->Getppm();
    discount = l->Getdiscount();
}
int Locuinta::pretInchiriere(){
    return ((ppm*su)+((discount/100)*(ppm*su)));
}
void Locuinta::citireVirtuala(){
    cout << "Introdu numele clientului:";
    cin >> Nume_client;
    cout << "Introdu suprafata utila:";
    cin >> su;
    cout << "Introdu pretul pe metru patrat:";
    cin >> ppm;
    cout << "Introdu discoutul:";
    cin >> discount;
}
const void Locuinta::afisareVirtuala(){
    cout << "Nume client: " << Nume_client << endl;
    cout << "Suprafata utila: "<< su << endl;
    cout << "Pretul pe metru patrat: " << ppm << endl;
    cout << "Discoutul: " << discount << endl;
}
Locuinta::~Locuinta()
{
    //dtor
}
