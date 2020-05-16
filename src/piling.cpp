#include "piling.hpp"

Piling::Piling()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    aroma    = "bez arome";
    ukupnaKolicinaPilinga++;
}
Piling::Piling(int _cena, int _kolicina, bool _pol, string _aroma)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    aroma    = _aroma;
    ukupnaKolicinaPilinga++;
}
Piling::Piling(const Piling& other)
{
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    aroma    = other.aroma;
    ukupnaKolicinaPilinga++;
}
ostream& operator<<(ostream& izlaz, const Piling& p){

    izlaz<<"*****PILING*****"<<endl;
    izlaz<<"Aroma    : ["<<p.aroma<<"]"<<endl;
    izlaz<<"Kolicina : ["<<p.kolicina<<"]"<<endl;
    izlaz<<"Cena     : ["<<p.cena    <<"]"<<endl;
    if(p.pol == false)
    {
       izlaz<<"Pol      : [Muski]"<<endl;
    }
    else
    {
       izlaz<<"Pol      : [Zenski]"<<endl;
    }
    return izlaz;
}
Piling::~Piling()
{
    ukupnaKolicinaPilinga--;
    //dtor
}
int Piling::ukupnaKolicinaPilinga=0;

