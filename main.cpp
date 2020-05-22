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
        cout<<"*****Dobrodosli u Douglas*****"<<endl;
        cout<<"1. Kupac"<<endl;
        cout<<"2. Trgovac"<<endl;
        cin>>ulaz;
        if(!isdigit(ulaz))
        {
            switch(ulaz)
            {
                case 1:
                    cout<<"1. Kupi Sampon"<<endl;
                    cout<<"2. Kupi Kremu"<<endl;
                    cout<<"3. Kupi Ulje"<<endl;
                    cout<<"4. Kupi Piling"<<endl;
                    /**Zbog cega se ovde zavrti vise puta while petlja ako unesem neki karakter? Npr. A*/
                    cin>>ulaz;
                    if (isdigit(ulaz))
                    {
                        cout<<"Nije unet broj!"<<endl;
                    }
                    else
                    {
                        if(ulaz < 1 || ulaz > 4)
                        {
                            cout<<"Unet broj manji od 1 a veci od 4"<<endl;
                        }
                        else
                        {
                             switch(ulaz)
                            {
                                case(1):pocetnoStanje.polica.izbrisiSamponSaPolice(1); break;
                                case(2):pocetnoStanje.polica.izbrisiKremuSaPolice (1); break;
                                case(3):pocetnoStanje.polica.izbrisiUljeSaPolice  (1); break;
                                case(4):pocetnoStanje.polica.izbrisiPilingSaPolice(1); break;
                                default:break;
                            }
                        }
                    }
                break;
                case 2:
                    cout<<"1. Dodaj sampon na policu"<<endl;
                    cout<<"2. Dodaj kremu  na policu"<<endl;
                    cout<<"3. Dodaj ulje   na policu"<<endl;
                    cout<<"4. Dodaj piling na policu"<<endl;
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
                                case(1):pocetnoStanje.polica.dodajSamponNaPolicu(100,250,false,"Univerzalni Sampon");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        break;
                                case(2):pocetnoStanje.polica.dodajKremuNaPolicu(100,250,false ,"Univerzalna Krema");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        break;
                                case(3):pocetnoStanje.polica.dodajUljeNaPolicu(100,250,true   ,"Univerzalno ulje");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        break;
                                case(4):pocetnoStanje.polica.dodajPilingNaPolicu(100,250,true,"Univerzalni piling");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        break;
                                case(5):izvestajDouglas.zavrsiDan(kasa); return 0;
                                default:break;
                            }

                        }
                    }
                break;
            }
        }
        else
        {
            cout<<"Uneta opcija nije broj"<<endl;
        }
    }while(true);

    return 0;
}
