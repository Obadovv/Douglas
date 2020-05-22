#include "izvestaj.hpp"

Izvestaj::Izvestaj()
{
    pocetnaKolicinaRobe = 0;
    pocetnaVrednostRobe = 0;
    krajnjaKolicinaRobe = 0;
    krajnjaVrednostRobe = 0;
    //ctor
}
void Izvestaj::zapocniDan(KasaDouglas kasa)
{
    pocetnoStanje.open  ("pocetnoStanje.txt");
    if(pocetnoStanje.is_open())
    {
        pocetnoStanje<<"***********Pocetno stanje***********"<<endl;
        pocetnoStanje<<"1. Sampona ima " + to_string(kasa.getKolicinaSampona()) + " i njihova vrednost je " + to_string(kasa.getVrednostSampona())<<endl;
        pocetnoStanje<<"2. Krema   ima " + to_string(kasa.getKolicinaKrema())   + " i njihova vrednost je " + to_string(kasa.getVrednostKrema())<<endl;
        pocetnoStanje<<"3. Ulja    ima " + to_string(kasa.getKolicinaUlja())    + " i njihova vrednost je " + to_string(kasa.getVrednostUlja())<<endl;
        pocetnoStanje<<"4. Pilinga ima " + to_string(kasa.getKolicinaPilinga()) + " i njihova vrednost je " + to_string(kasa.getVrednostPilinga())<<endl;
        pocetnoStanje<<"5. Ukupna kolicina robe = [" + to_string(kasa.getTrenutnaKolicinaRobe()) + "] artikla"<<endl;
        pocetnoStanje<<"6. Ukupna vrednost robe = [" + to_string(kasa.getTrenutnaVrednostRobe()) + "] artikla"<<endl;
        pocetnoStanje.close();
    }
    else
    {
        cout<<"Nije moguce otvoriti fajl pocetnoStanje"<<endl;
    }

    setPocetnaKolicinaRobe(kasa.getTrenutnaKolicinaRobe());
    setPocetnaVrednostRobe(kasa.getTrenutnaVrednostRobe());
}
void Izvestaj::zavrsiDan(KasaDouglas kasa)
{
    /**U finalnoj verziji projekta cu dodati opciju da se u krajnje stanje upise da li je radjena nabavka u toku dana*/
    setKrajnjaKolicinaRobe(kasa.getTrenutnaKolicinaRobe());
    setKrajnjaVrednostRobe(kasa.getTrenutnaVrednostRobe());
    zavrsnoStanje.open("zavrsnoStanje.txt");
    if(zavrsnoStanje.is_open())
    {
        zavrsnoStanje<<"***********Krajnje stanje***********"<<endl;
        zavrsnoStanje<<"1. Sampona ima " + to_string(kasa.getKolicinaSampona())<<endl;
        zavrsnoStanje<<"2. Krema   ima " + to_string(kasa.getKolicinaKrema())  <<endl;
        zavrsnoStanje<<"3. Ulja    ima " + to_string(kasa.getKolicinaUlja())   <<endl;
        zavrsnoStanje<<"4. Pilinga ima " + to_string(kasa.getKolicinaPilinga())<<endl;
        zavrsnoStanje<<"5. Ukupna kolicina preostale robe = [" + to_string(kasa.getTrenutnaKolicinaRobe()) + "] artikla"<<endl;
        zavrsnoStanje<<"6. Ukupna vrednost preostale robe = [" + to_string(kasa.getTrenutnaVrednostRobe()) + "] artikla"<<endl;
        zavrsnoStanje<<"7. Prodato = [" + to_string(pocetnaKolicinaRobe - krajnjaKolicinaRobe) + "] artikala"<<endl;
        zavrsnoStanje<<"8. ZARADA  = [" + to_string(pocetnaVrednostRobe - krajnjaVrednostRobe) + "] "<<endl;
        zavrsnoStanje.close ();
    }
    else
    {
        cout<<"Nije moguce otvoriti fajl zavrsnoStanje"<<endl;

    }


}
