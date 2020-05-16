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

int main()
{

    Kutija kutijaSampona = {5,200,100,true, "ProtivPeruti"};
    Kutija kutijaKrema   = {5,200,100,false,"ProtivBora"};
    Kutija kutijaUlja    = {5,200,100,false,"ZaMasazu"};
    Kutija kutijaPilinga = {5,200,100,true, "Cokolada"};

    Polica polica;
    KasaDouglas kasa;
    /*Pocetno popunjavanje*/
    polica.popuniPolicuSamponima(kutijaSampona);
    polica.popuniPolicuKremama(kutijaKrema);
    polica.popuniPolicuUljima(kutijaUlja);
    polica.popuniPolicuPilinzima(kutijaPilinga);
    /*Ne moze jer je vec popunjeno*/
    polica.popuniPolicuSamponima(kutijaSampona);
    polica.popuniPolicuKremama(kutijaKrema);
    polica.popuniPolicuUljima(kutijaUlja);
    polica.popuniPolicuPilinzima(kutijaPilinga);
    /*Po jedan proizvod*/
    polica.dodajSamponNaPolicu(100,250,false,"Head&Shoulders");
    polica.dodajKremuNaPolicu(100,250,true,"Nivea");
    polica.dodajUljeNaPolicu(100,250,true,"LosionZaTelo");
    polica.dodajPilingNaPolicu(100,250,false,"Vanila");
    /*Ne moze jer je vec popunjeno*/
    polica.popuniPolicuSamponima(kutijaSampona);
    polica.popuniPolicuKremama(kutijaKrema);
    polica.popuniPolicuUljima(kutijaUlja);
    polica.popuniPolicuPilinzima(kutijaPilinga);
    /*Popunjavanje kase*/
    kasa.kolicinaRobe(polica);
    kasa.vrednostRobe(polica);
    cout<<"Vrednost robe na policama je "    <<kasa.getTrenutnaVrednostRobe()<<endl;
    cout<<"Kolicina artikala na policama je "<<kasa.getTrenutnaKolicinaRobe()<<endl;
    /*Ispis polica*/
    polica.ispisiSveSampone();
    polica.ispisiSveKreme();
    polica.ispisiSvaUlja();
    polica.ispisiSvePilinge();
    /*Trazenje na policama*/
    polica.nadjiMuskeSampone();
    polica.nadjiMuskeKreme();
    polica.nadjiZenskaUlja();
    polica.nadjiZenskePilinge();
    /*Brisanje jednog artikla sa police*/
    polica.izbrisiSamponSaPolice(2);
    polica.izbrisiSamponSaPolice(22);
    polica.izbrisiKremuSaPolice(3);
    polica.izbrisiKremuSaPolice(33);
    polica.izbrisiUljeSaPolice(1);
    polica.izbrisiUljeSaPolice(11);
    polica.izbrisiPilingSaPolice(5);
    polica.izbrisiPilingSaPolice(55);
    /*Popunjavanje kase*/
    kasa.kolicinaRobe(polica);
    kasa.vrednostRobe(polica);
    cout<<"Vrednost robe na policama je "    <<kasa.getTrenutnaVrednostRobe()<<endl;
    cout<<"Kolicina artikala na policama je "<<kasa.getTrenutnaKolicinaRobe()<<endl;
    /*Praznjenje cele police*/
    polica.isprazniPolicuSampona();
    polica.isprazniPolicuKrema();
    polica.isprazniPolicuUlja();
    polica.isprazniPolicuPilinga();
    /*Trazenje na policama*/
    polica.nadjiMuskeSampone();
    polica.nadjiMuskeKreme();
    polica.nadjiZenskaUlja();
    polica.nadjiZenskePilinge();
    /*Ispis polica*/
    polica.ispisiSveSampone();
    polica.ispisiSveKreme();
    polica.ispisiSvaUlja();
    polica.ispisiSvePilinge();
    /*Popunjavanje kase*/
    kasa.kolicinaRobe(polica);
    kasa.vrednostRobe(polica);
    cout<<"Vrednost robe na policama je "    <<kasa.getTrenutnaVrednostRobe()<<endl;
    cout<<"Kolicina artikala na policama je "<<kasa.getTrenutnaKolicinaRobe()<<endl;
    return 0;
}
