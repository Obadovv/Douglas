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
    Akcija akcija;
    Kasa *ptr_kasa = &kasa;
    ucitajSpisak pocetnoStanje;
    pocetnoStanje.ucitajSve("Ulaz");

    /**Uradi popis robe i zapisi u izvestaj*/
    ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
    ptr_kasa->vrednostRobe(pocetnoStanje.polica);
    izvestajDouglas.zapocniDan(kasa);

    int ulaz;
    int izbor;
    int popust;
    /**Simulacija kupovine*/
    do
    {
        cout<<"*****Dobrodosli u Douglas*****"<<endl;
        cout<<"1. Kupac"<<endl;
        cout<<"2. Trgovac"<<endl;
        cin>>ulaz;
        if(cin.fail() || (isdigit(ulaz)))
        {
            cout<<"Ulaz nije ok!"<<endl;
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');
            ulaz = 0;
        }
        if(ulaz < 1 || ulaz > 2)
        {
            cout<<"Unet broj manji od 1 a veci od 2"<<endl;
        }
        else
        {
            /**Meni za kupca i trgovca*/
            switch(ulaz)
            {
                /**Kupac*/
                case 1:
                    do{
                        cout<<"1. Kupi Sampon"<<endl;
                        cout<<"2. Kupi Kremu"<<endl;
                        cout<<"3. Kupi Ulje"<<endl;
                        cout<<"4. Kupi Piling"<<endl;
                        cout<<"5. Zavrsi kupovinu"<<endl;
                        cin>>ulaz;
                        if(cin.fail() || (isdigit(ulaz)))
                        {
                            cout<<"Ulaz nije ok!"<<endl;
                            cin.clear();
                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                            ulaz = 0;
                        }
                        if(ulaz < 1 || ulaz > 5)
                        {
                            cout<<"Unet broj manji od 1 a veci od 5"<<endl;
                        }
                        else
                        {
                             switch(ulaz)
                            {
                                case(1):cout<<"1.Kupi muski sampon"<<endl;
                                        cout<<"2.Kupi zenski sampon"<<endl;
                                        cin>>izbor;
                                        if(cin.fail() || (isdigit(izbor)))
                                        {
                                            cout<<"Ulaz nije ok!"<<endl;
                                            cin.clear();
                                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                                            izbor = 0;
                                        }
                                        if(izbor < 1 || izbor > 2)
                                        {
                                            cout<<"Unet broj manji od 1 a veci od 2"<<endl;
                                        }
                                        else
                                        {
                                            if(izbor == 1)
                                            {
                                                pocetnoStanje.polica.izbrisiSamponSaPolice(pocetnoStanje.polica.nadjiSampon(false));break;
                                            }
                                            else
                                            {
                                                pocetnoStanje.polica.izbrisiSamponSaPolice(pocetnoStanje.polica.nadjiSampon(true));break;
                                            }
                                        }

                                case(2):cout<<"1.Kupi musku kremu"<<endl;
                                        cout<<"2.Kupi zensku kremu"<<endl;
                                        cin>>izbor;
                                        if(cin.fail() || (isdigit(izbor)))
                                        {
                                            cout<<"Ulaz nije ok!"<<endl;
                                            cin.clear();
                                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                                            izbor = 0;
                                        }
                                        if(izbor < 1 || izbor > 2)
                                        {
                                            cout<<"Unet broj manji od 1 a veci od 2"<<endl;break;
                                        }
                                        else
                                        {
                                            if(izbor == 1)
                                            {
                                                pocetnoStanje.polica.izbrisiKremuSaPolice(pocetnoStanje.polica.nadjiKremu(false)); break;
                                            }
                                            else
                                            {
                                                pocetnoStanje.polica.izbrisiKremuSaPolice(pocetnoStanje.polica.nadjiKremu(true)); break;
                                            }
                                        }
                                case(3):cout<<"1.Kupi musko ulje"<<endl;
                                        cout<<"2.Kupi zensko ulje"<<endl;
                                        cin>>izbor;
                                        if(cin.fail() || (isdigit(izbor)))
                                        {
                                            cout<<"Ulaz nije ok!"<<endl;
                                            cin.clear();
                                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                                            izbor = 0;
                                        }
                                        if(izbor < 1 || izbor > 2)
                                        {
                                            cout<<"Unet broj manji od 1 a veci od 2"<<endl;break;
                                        }
                                        else
                                        {
                                            if(izbor == 1)
                                            {
                                                pocetnoStanje.polica.izbrisiUljeSaPolice(pocetnoStanje.polica.nadjiUlje(false));break;
                                            }
                                            else
                                            {
                                                pocetnoStanje.polica.izbrisiSamponSaPolice(pocetnoStanje.polica.nadjiUlje(true));break;
                                            }
                                        }
                                case(4):cout<<"1.Kupi muski piling"<<endl;
                                        cout<<"2.Kupi zenski piling"<<endl;
                                        cin>>izbor;
                                        if(cin.fail() || (isdigit(izbor)))
                                        {
                                            cout<<"Ulaz nije ok!"<<endl;
                                            cin.clear();
                                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                                            izbor = 0;
                                        }
                                        if(izbor < 1 || izbor > 2)
                                        {
                                            cout<<"Unet broj manji od 1 a veci od 2"<<endl;break;
                                        }
                                        else
                                        {
                                            if(izbor == 1)
                                            {
                                                pocetnoStanje.polica.izbrisiPilingSaPolice(pocetnoStanje.polica.nadjiPiling(false));break;
                                            }
                                            else
                                            {
                                                pocetnoStanje.polica.izbrisiPilingSaPolice(pocetnoStanje.polica.nadjiPiling(true));break;
                                            }
                                        }
                                case(5):break;
                                default:cout<<"*****UNETA NEPOZNATA OPCIJA!!!*****"<<endl;break;
                            }
                        }
                    }while(ulaz != 5);
                    /**break da iskocimo iz kupac menija*/
                    break;
                /**Trgovac*/
                case 2:
                    do
                    {
                        cout<<"1. Dodaj sampon na policu"<<endl;
                        cout<<"2. Dodaj kremu  na policu"<<endl;
                        cout<<"3. Dodaj ulje   na policu"<<endl;
                        cout<<"4. Dodaj piling na policu"<<endl;
                        cout<<"5. Ispisi sve sampone"<<endl;
                        cout<<"6. Ispisi sve kreme"<<endl;
                        cout<<"7. Ispisi sva ulja"<<endl;
                        cout<<"8. Ispisi sve pilinge"<<endl;
                        cout<<"9. Ispisi sve artikle"<<endl;
                        cout<<"10. Spusti cene sampona"<<endl;
                        cout<<"11. Spusti cene krema"<<endl;
                        cout<<"12. Spusti cene ulja"<<endl;
                        cout<<"13. Spusti cene pilinga"<<endl;
                        cout<<"14. Spusti cene svih proizvoda"<<endl;
                        cout<<"15. Zakljuci dan"<<endl;
                        cout<<"16. Izadji iz menija trgovac"<<endl;

                        cin>>ulaz;
                        if(cin.fail() || (isdigit(ulaz)))
                        {
                            cout<<"Ulaz nije ok!"<<endl;
                            cin.clear();
                            cin.ignore(std::numeric_limits<int>::max(),'\n');
                            ulaz = 0;
                        }
                        if(ulaz < 1 || ulaz > 16)
                        {
                            cout<<"Unet broj manji od 1 a veci od 15"<<endl;
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
                                        izvestajDouglas.promenaUTokuDana("Dodat univerzalni muski sampon za 100 dinara na policu ");
                                        break;
                                case(2):pocetnoStanje.polica.dodajKremuNaPolicu(100,250,false ,"Univerzalna Krema");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        izvestajDouglas.promenaUTokuDana("Dodata univerzalna muska krema za 100 dinara na policu ");
                                        break;
                                case(3):pocetnoStanje.polica.dodajUljeNaPolicu(100,250,true,"Univerzalno ulje");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        izvestajDouglas.promenaUTokuDana("Dodato univerzalno zensko ulje za 100 dinara na policu ");
                                        break;
                                case(4):pocetnoStanje.polica.dodajPilingNaPolicu(100,250,true,"Univerzalni piling");
                                        izvestajDouglas.uvecajPocetnuKolicinuRobe(1);
                                        izvestajDouglas.uvecajPocetnuVrednostRobe(100);
                                        ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                        ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                        izvestajDouglas.promenaUTokuDana("Dodat univerzalnai zenski piling za 100 dinara na policu ");
                                        break;
                                case(5):cout<<"*****SVI SAMPONI NA POLICI*****"<<endl;
                                        pocetnoStanje.polica.ispisiSveSampone();
                                        cout<<"*******************************"<<endl;
                                        break;
                                case(6):cout<<"*****SVE KREME NA POLICI*****"<<endl;
                                        pocetnoStanje.polica.ispisiSveKreme();
                                        cout<<"*******************************"<<endl;
                                        break;
                                case(7):cout<<"*****SVA ULJA NA POLICI*****"<<endl;
                                        pocetnoStanje.polica.ispisiSvaUlja();
                                        cout<<"*******************************"<<endl;
                                        break;
                                case(8):cout<<"*****SVI PILINZI NA POLICI*****"<<endl;
                                        pocetnoStanje.polica.ispisiSvePilinge();
                                        cout<<"*******************************"<<endl;
                                        break;
                                case(9):cout<<"*****SVI ARTIKLI NA POLICI*****"<<endl;
                                        pocetnoStanje.polica.ispisiSveSampone();
                                        pocetnoStanje.polica.ispisiSveKreme();
                                        pocetnoStanje.polica.ispisiSvaUlja();
                                        pocetnoStanje.polica.ispisiSvePilinge();
                                        cout<<"*******************************"<<endl;
                                        break;
                                case(10):cout<<"Za koliko procenata zelite da spustite cene?"<<endl;
                                         cin>>popust;
                                         if(cin.fail() || (isdigit(popust)))
                                         {
                                             cout<<"Ulaz nije ok!"<<endl;
                                             cin.clear();
                                             cin.ignore(std::numeric_limits<int>::max(),'\n');
                                             popust = 0;
                                         }
                                         if(popust < 0 || popust > 100)
                                         {
                                            cout<<"Nije moguce smanjiti cene za "<<popust<<" procenata! Cene ce ostati ne promenjenje!"<<endl;
                                         }
                                         else
                                         {
                                            akcija.spustiCenuSampona(popust,pocetnoStanje.polica.getVectorSampona());
                                            izvestajDouglas.promenaUTokuDana("Spustene cene sampona za "+to_string(popust)+"%");
                                         }
                                        break;
                                case(11):cout<<"Za koliko procenata zelite da spustite cene?"<<endl;
                                         cin>>popust;
                                         if(cin.fail() || (isdigit(popust)))
                                         {
                                             cout<<"Ulaz nije ok!"<<endl;
                                             cin.clear();
                                             cin.ignore(std::numeric_limits<int>::max(),'\n');
                                             popust = 0;
                                         }
                                         if(popust < 0 || popust > 100)
                                         {
                                             cout<<"Nije moguce smanjiti cene za "<<popust<<" procenata! Cene ce ostati ne promenjenje!"<<endl;
                                         }
                                         else
                                         {
                                             akcija.spustiCenuKreme(popust,pocetnoStanje.polica.getVectorKrema());
                                             izvestajDouglas.promenaUTokuDana("Spustene cene krema za "+to_string(popust)+"%");
                                         }
                                        break;
                                case(12):cout<<"Za koliko procenata zelite da spustite cene?"<<endl;
                                         cin>>popust;
                                         if(cin.fail() || (isdigit(popust)))
                                         {
                                             cout<<"Ulaz nije ok!"<<endl;
                                             cin.clear();
                                             cin.ignore(std::numeric_limits<int>::max(),'\n');
                                             popust = 0;
                                         }
                                         if(popust < 0 || popust > 100)
                                         {
                                             cout<<"Nije moguce smanjiti cene za "<<popust<<" procenata! Cene ce ostati ne promenjenje!"<<endl;
                                         }
                                         else
                                         {
                                            akcija.spustiCenuUlja(popust,pocetnoStanje.polica.getVectorUlja());
                                            izvestajDouglas.promenaUTokuDana("Spustene cene ulja za "+to_string(popust)+"%");
                                         }
                                        break;
                                case(13):cout<<"Za koliko procenata zelite da spustite cene?"<<endl;
                                         cin>>popust;
                                         if(cin.fail() || (isdigit(popust)))
                                         {
                                             cout<<"Ulaz nije ok!"<<endl;
                                             cin.clear();
                                             cin.ignore(std::numeric_limits<int>::max(),'\n');
                                             popust = 0;
                                         }
                                         if(popust < 0 || popust > 100)
                                         {
                                             cout<<"Nije moguce smanjiti cene za "<<popust<<" procenata! Cene ce ostati ne promenjenje!"<<endl;
                                         }
                                         else
                                         {
                                            akcija.spustiCenuPilinga(popust,pocetnoStanje.polica.getVectorPilinga());
                                            izvestajDouglas.promenaUTokuDana("Spustene cene pilinga za "+to_string(popust)+"%");
                                         }
                                        break;
                                case(14):cout<<"Za koliko procenata zelite da spustite cene svih proizvoda?"<<endl;
                                         cin>>popust;
                                         if(cin.fail() || (isdigit(popust)))
                                         {
                                             cout<<"Ulaz nije ok!"<<endl;
                                             cin.clear();
                                             cin.ignore(std::numeric_limits<int>::max(),'\n');
                                             popust = 0;
                                         }
                                         if(popust < 0 || popust > 100)
                                         {
                                             cout<<"Nije moguce smanjiti cene za "<<popust<<" procenata! Cene ce ostati ne promenjenje!"<<endl;
                                         }
                                         else
                                         {
                                            akcija.spustiCenuSampona(popust,pocetnoStanje.polica.getVectorSampona());
                                            akcija.spustiCenuKreme  (popust,pocetnoStanje.polica.getVectorKrema());
                                            akcija.spustiCenuUlja   (popust,pocetnoStanje.polica.getVectorUlja());
                                            akcija.spustiCenuPilinga(popust,pocetnoStanje.polica.getVectorPilinga());
                                            izvestajDouglas.promenaUTokuDana("Spustene cene svih artikala za "+to_string(popust)+"%");
                                         }
                                         break;
                                case(15):ptr_kasa->kolicinaRobe(pocetnoStanje.polica);
                                         ptr_kasa->vrednostRobe(pocetnoStanje.polica);
                                         izvestajDouglas.zavrsiDan(kasa);
                                         return 0;
                                case(16):break;
                                default:cout<<"*****UNETA NEPOZNATA OPCIJA!!!*****"<<endl;break;
                            }/**Switch case Trgovac*/
                        }
                    }while(ulaz!= 16);
            }/**Switch case Meni za kupca i trgovca*/
        }/**else posle prvog do while-a*/
    }while(true);/** prvi do while*/
    return 0;
}
