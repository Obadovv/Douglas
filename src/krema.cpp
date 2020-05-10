#include "krema.hpp"

Krema::Krema()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    namena   = "univerzalna";
    ukupnaKolicinaKrema++;
}
Krema::Krema(int _cena, int _kolicina, bool _pol, string _namena)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    namena   = _namena;
    ukupnaKolicinaKrema++;
}
Krema::Krema(const Krema& other)
{
    //copy ctor
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    namena   = other.namena;
    ukupnaKolicinaKrema++;
}
ostream& operator<<(ostream& izlaz, const Krema& k){

    izlaz<<"*****KREMA*****"<<endl;
    izlaz<<"Namena   : ["<<k.namena<<"]"<<endl;
    izlaz<<"Kolicina : ["<<k.kolicina<<"]"<<endl;
    izlaz<<"Cena     : ["<<k.cena    <<"]"<<endl;
    if(k.pol == false)
    {
       izlaz<<"Pol      : [Muski]"<<endl;
    }
    else
    {
       izlaz<<"Pol      : [Zenski]"<<endl;
    }
    return izlaz;
}
Krema::~Krema()
{
    //dtor
}
int Krema::ukupnaKolicinaKrema=0;

