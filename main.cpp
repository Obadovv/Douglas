#include <iostream>
#include "poklonpaket.hpp"
using namespace std;

/****Funkcionalnost koju cu dodati u projekat*****
* 1. Popunjavanje polica
* 2. Trenutno stanje, kolicna paketa i akcija
* 3. Pocetno i konacno stanje nakon radnog dana
**************************************************/
int main()
{
    PoklonPaket PK(false,1000,2);

    cout<<"*****PRE KREIRANJA PAKETA"<<endl;
    cout<<PK.U.getNamena()  <<endl;
    cout<<PK.U.getCena()    <<endl;
    cout<<PK.U.getKolicina()<<endl;

    //true je za zenski, false za muski
    PK.kreirajPaket(false,60000,2);

    cout<<"*****POSLE KREIRANJA PAKETA"<<endl;
    cout<<PK.U.getNamena()  <<endl;
    cout<<PK.U.getCena()    <<endl;
    cout<<PK.U.getKolicina()<<endl;
    return 0;
}
