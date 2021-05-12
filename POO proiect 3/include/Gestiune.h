#ifndef GESTIUNE_H
#define GESTIUNE_H
#include <set>
#include <iostream>
#include <Locuinta.h>
#include <Casa.h>
#include <Apartament.h>
#include <exception>
struct Bad_Locuinta : public exception {
   const char * what () const throw () {
      return "TIP gresit de locuinta";
   }
};
using namespace std;
template <class T>
class Gestiune
{
    private:
        set<pair<Locuinta*,int>> locuinte;
    public:
        ~Gestiune(){
             for(auto& x:locuinte){
                delete x.first;
             }
        }
        friend ostream& operator<<(ostream& out, Gestiune<T> l){
            try{
            if(typeid(l)==typeid(Casa))throw Bad_Locuinta();
            int i=1;
            for(auto& x:l.locuinte){
                out << endl << "Apartament nr: " << i << endl;
                Apartament* a = dynamic_cast<Apartament*>(x.first);
                out << *a;
                i++;
            }
            return out;}
            catch (Bad_Locuinta& e){
                cout << e.what();
            }
        }
        void add_locuinta(T* l){
            for(auto& x:locuinte){
                x.first->add_index();
            }
            Locuinta* loc = dynamic_cast<Locuinta*>(l);
            locuinte.insert({loc,1});
        }
        Gestiune<T>& operator+=(T* l){
           add_locuinta(l);
           return *this;
        }
};
template <>
class Gestiune<Casa>
{
    private:
        set<pair<Locuinta*,int>> locuinte;
        int chirie_totala=0;
        int nr_case=0;
    public:
        friend ostream& operator<<(ostream& out, Gestiune<Casa>);
        void add_locuinta(Casa* l){
            for(auto& x:locuinte){
                x.first->add_index();
            }
            Locuinta* loc = dynamic_cast<Locuinta*>(l);
            locuinte.insert({loc,0});
            chirie_totala+=l->pretInchiriere();
            nr_case++;
        }
        Gestiune<Casa>& operator+=(Casa* l){
           add_locuinta(l);
           return *this;
        }
};
#endif // GESTIUNE_H
