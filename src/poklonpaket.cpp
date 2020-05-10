#include "poklonpaket.hpp"

void PoklonPaket::kreirajPaket(bool pol,int cena,int kombinacija)
{
    if(cena <= 0)
    {
        //TODO: dodaj poruku
        return;
    }
    if(kombinacija > 4 || kombinacija < 2)
    {
        kombinacija = 2;
    }
    //Zenski
    if(pol == true)
    {
        U.setCena(cena/kombinacija);
        U.setVrsta("Poklon Paket Ulje Zensko");
        U.setKolicina(250);
        U.setPol(pol);

        P.setCena(cena/kombinacija);
        P.setAroma("Poklon Paket Piling Zenski");
        P.setKolicina(250);
        P.setPol(pol);
    }
    //Muski
    if(pol == false)
    {
        S.setCena(cena/kombinacija);
        S.setSvojstvo("Poklon Paket Muski Muski");
        S.setKolicina(250);
        S.setPol(pol);

        K.setCena(cena/kombinacija);
        K.setNamena("Poklon Paket Krema Muska");
        K.setKolicina(250);
        K.setPol(pol);
    }
}
ostream& operator<<(ostream& izlaz, const PoklonPaket& pp){

    izlaz<<"*****Poklon paket*****"<<endl;
    izlaz<<pp.S<<endl;
    izlaz<<pp.K<<endl;
    izlaz<<pp.U<<endl;
    izlaz<<pp.P<<endl;

    return izlaz;
}
