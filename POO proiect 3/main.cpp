#include <iostream>
#include <Locuinta.h>
#include <Casa.h>
#include <Apartament.h>
#include <Gestiune.h>
using namespace std;

int main()
{
    Gestiune<Apartament> Apartamente;
    Gestiune<Casa> Case;
    int x;
    bool loop = 1;
    while(loop){
        cout << "Introdu comanda:" << endl;
        cout << "1. Adauga Locuinta" << endl;
        cout << "2. Afiseaza Gestiune:" << endl;
        cout << "3. EXIT" << endl;
        cin >> x;

        switch(x){
            case 1:
                cout << "Adauga in gestiunea de:" << endl;
                cout << "0. Case" << endl;
                cout << "1. Apartamente" << endl;
                cin >> x;
                if(x){
                    cout << "Introdu datele apartamentului:\n";
                    Apartament* y = new Apartament;
                    cin >> *y;
                    Apartamente+=y;
                }else{
                    cout << "Introdu datele casei:\n";
                    Casa* z = new Casa;
                    cin >> *z;
                    Case+=z;
                }
                break;
            case 2:
                cout << "Afiseaza gestiunea de:" << endl;
                cout << "0. Case" << endl;
                cout << "1. Apartamente" << endl;
                cin >> x;
                if(x){
                    cout << Apartamente;
                }else{
                    cout << Case;
                }
                break;
            default:
                loop = 0;
                break;

        }

    }
    //cout << x->pretInchiriere() << "\n";
    return 0;
}
