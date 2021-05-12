#ifndef LOCUINTA_H
#define LOCUINTA_H
#include <string>
#include <iostream>
using namespace std;
class Locuinta
{
    private:
        string Nume_client;
        int su;
        int ppm;
        float discount;
    public:
        Locuinta();
        Locuinta(Locuinta*);
        ~Locuinta();

        string GetNume_client() { return Nume_client; }
        void SetNume_client(string val) { Nume_client = val; }
        int Getsu() { return su; }
        void Setsu(int val) { su = val; }
        int Getppm() { return ppm; }
        void Setppm(int val) { ppm = val; }
        float Getdiscount() { return discount; }
        void Setdiscount(float val) { discount = val; }
        virtual int pretInchiriere();
        virtual void add_index()=0;
        void citireVirtuala();
        const void afisareVirtuala();
};

#endif // LOCUINTA_H
