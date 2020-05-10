#include "poklonpaket.hpp"
#include "akcija.hpp"
#include "ucitajspisak.hpp"
#include "proizvod.hpp"
#include "sampon.h"
#include "ulje.hpp"
#include "krema.hpp"
#include "piling.hpp"

int main()
{

    PoklonPaket PK(false,1000,2);
    PK.kreirajPaket(false,60000,2);

    Sampon s;
    Sampon s1(300,150,false,"Protiv Peruti");
    Sampon s2(PK.S);

    Krema  k;
    Krema  k1(120,190,true,"Za lice");
    Krema  k2(PK.K);

    Ulje u;
    Ulje u1(399,200,false,"Za masazu");
    Ulje u2(PK.U);

    Piling p;
    Piling p1(499,150,false,"Med");
    Piling p2(PK.P);

    cout<<"*****SAMPONI*****"<<endl;
    cout<<s;
    cout<<s1;
    cout<<s2;
    cout<<s.getUkupnaKolicina();
    cout<<"*****KREME*****"<<endl;
    cout<<k;
    cout<<k1;
    cout<<k2;
    cout<<k.getUkupnaKolicina();
    cout<<"*****ULJA*****"<<endl;
    cout<<u;
    cout<<u1;
    cout<<u2;
    cout<<u.getUkupnaKolicina();
    cout<<"*****PILINZI*****"<<endl;
    cout<<p;
    cout<<p1;
    cout<<p2;
    cout<<p.getUkupnaKolicina();

    return 0;
}
