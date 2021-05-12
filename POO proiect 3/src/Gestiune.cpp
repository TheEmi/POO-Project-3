#include "Gestiune.h"

ostream& operator<<(ostream& out, Gestiune<Casa> l){
    out << endl << "Chirie totala: " << l.chirie_totala << endl;
    out << "Nr casa: " << l.nr_case << endl;
    int i=1;
    for(auto& x:l.locuinte){
            out << endl << "Casa nr: " << i << endl;
            Casa* a = dynamic_cast<Casa*>(x.first);
            out << *a;
            i++;
    }
    return out;
}

