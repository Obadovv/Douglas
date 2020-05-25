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
    celodnevniIzvestaj.open  ("celodnevni_izvestaj.txt");
    if(celodnevniIzvestaj.is_open())
    {
        celodnevniIzvestaj<<"***********Pocetno stanje***********"<<endl;
        celodnevniIzvestaj<<"1. Sampona ima " + to_string(kasa.getKolicinaSampona()) + " i njihova vrednost je " + to_string(kasa.getVrednostSampona())<<endl;
        celodnevniIzvestaj<<"2. Krema   ima " + to_string(kasa.getKolicinaKrema())   + " i njihova vrednost je " + to_string(kasa.getVrednostKrema())<<endl;
        celodnevniIzvestaj<<"3. Ulja    ima " + to_string(kasa.getKolicinaUlja())    + " i njihova vrednost je " + to_string(kasa.getVrednostUlja())<<endl;
        celodnevniIzvestaj<<"4. Pilinga ima " + to_string(kasa.getKolicinaPilinga()) + " i njihova vrednost je " + to_string(kasa.getVrednostPilinga())<<endl;
        celodnevniIzvestaj<<"5. Ukupna kolicina robe = [" + to_string(kasa.getTrenutnaKolicinaRobe()) + "] artikla"<<endl;
        celodnevniIzvestaj<<"6. Ukupna vrednost robe = [" + to_string(kasa.getTrenutnaVrednostRobe()) + "] artikla"<<endl;
        celodnevniIzvestaj.close();
    }
    else
    {
        cout<<"Nije moguce otvoriti fajl celodnevni_izvestaj"<<endl;
    }

    setPocetnaKolicinaRobe(kasa.getTrenutnaKolicinaRobe());
    setPocetnaVrednostRobe(kasa.getTrenutnaVrednostRobe());
}
void Izvestaj::promenaUTokuDana(string nabavka)
{
    /**ios::app Otvori fajl na kraju i nastavi da pises u njega*/
    celodnevniIzvestaj.open("celodnevni_izvestaj.txt",ios::app);
    if(celodnevniIzvestaj.is_open())
    {
        celodnevniIzvestaj<<"***********Promena u toku dana***********"<<endl;
        celodnevniIzvestaj<<nabavka<<endl;
        celodnevniIzvestaj.close ();
    }
    else
    {
        cout<<"Nije moguce otvoriti fajl celodnevni_izvestaj"<<endl;

    }
}
void Izvestaj::zavrsiDan(KasaDouglas kasa)
{
    /**U finalnoj verziji projekta cu dodati opciju da se u krajnje stanje upise da li je radjena nabavka u toku dana*/
    setKrajnjaKolicinaRobe(kasa.getTrenutnaKolicinaRobe());
    setKrajnjaVrednostRobe(kasa.getTrenutnaVrednostRobe());
    /**ios::app Otvori fajl na kraju i nastavi da pises u njega*/
    celodnevniIzvestaj.open("celodnevni_izvestaj.txt",ios::app);
    if(celodnevniIzvestaj.is_open())
    {
        celodnevniIzvestaj<<"***********Krajnje stanje***********"<<endl;
        celodnevniIzvestaj<<"1. Sampona ima " + to_string(kasa.getKolicinaSampona())<<endl;
        celodnevniIzvestaj<<"2. Krema   ima " + to_string(kasa.getKolicinaKrema())  <<endl;
        celodnevniIzvestaj<<"3. Ulja    ima " + to_string(kasa.getKolicinaUlja())   <<endl;
        celodnevniIzvestaj<<"4. Pilinga ima " + to_string(kasa.getKolicinaPilinga())<<endl;
        celodnevniIzvestaj<<"5. Ukupna kolicina preostale robe = [" + to_string(kasa.getTrenutnaKolicinaRobe()) + "] artikla"<<endl;
        celodnevniIzvestaj<<"6. Ukupna vrednost preostale robe = [" + to_string(kasa.getTrenutnaVrednostRobe()) + "] artikla"<<endl;
        celodnevniIzvestaj<<"7. Prodato = [" + to_string(pocetnaKolicinaRobe - krajnjaKolicinaRobe) + "] artikala"<<endl;
        celodnevniIzvestaj<<"8. ZARADA  = [" + to_string(pocetnaVrednostRobe - krajnjaVrednostRobe) + "] "<<endl;
        celodnevniIzvestaj.close ();
    }
    else
    {
        cout<<"Nije moguce otvoriti fajl celodnevni_izvestaj"<<endl;

    }
}
