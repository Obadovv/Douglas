#include "poklonpaket.hpp"
#include "akcija.hpp"
#include "ucitajspisak.hpp"
#include "proizvod.hpp"
#include "sampon.h"
#include "ulje.hpp"
#include "krema.hpp"
#include "piling.hpp"
#include "polica.hpp"
#include "kasadouglas.hpp"
#include "izvestaj.hpp"
int main()
{
    Izvestaj izvestajDouglas;
    KasaDouglas kasa;
    Kasa *ptr_kasa = &kasa;
    ucitajSpisak pocetnoStanje;
    pocetnoStanje.ucitajSve("Ulaz");

    ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
    ptr_kasa->vrednostRobe(pocetnoStanje.polica);

    izvestajDouglas.zapocniDan(kasa);

    int ulaz;
    /**Simulacija kupovine*/
    do
    {
        cout<<"Dobrodosli u Douglas"<<endl;
        cout<<"1. Kupi Sampon"<<endl;
        cout<<"2. Kupi Kremu"<<endl;
        cout<<"3. Kupi Ulje"<<endl;
        cout<<"4. Kupi Piling"<<endl;
        cout<<"5. Zakljuci dan"<<endl;
        /**Zbog cega se ovde zavrti vise puta while petlja ako unesem neki karakter? Npr. A*/
        cin>>ulaz;
        if (isdigit(ulaz))
        {
            cout<<"Nije unet broj!"<<endl;
        }
        else
        {
            if(ulaz < 1 || ulaz > 5)
            {
                cout<<"Unet broj manji od 1 a veci od 5"<<endl;
            }
            else
            {
                 switch(ulaz)
                {
                    case(1):pocetnoStanje.polica.izbrisiSamponSaPolice(1); break;
                    case(2):pocetnoStanje.polica.izbrisiKremuSaPolice (1); break;
                    case(3):pocetnoStanje.polica.izbrisiUljeSaPolice  (1); break;
                    case(4):pocetnoStanje.polica.izbrisiPilingSaPolice(1); break;
                    case(5):ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                            ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                            izvestajDouglas.zavrsiDan(kasa); break;
                    default:break;
                }
            }
        }
    }while(ulaz != 5);

    return 0;
}
