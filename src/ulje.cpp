#include "ulje.hpp"

Ulje::Ulje()
{
    //ctor
    cena     = 0;
    kolicina = 0;
    pol      = false;
    vrsta    = "univerzalno";
    ukupnaKolicinaUlja++;
}
Ulje::Ulje(int _cena, int _kolicina, bool _pol, string _vrsta)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    vrsta    = _vrsta;
    ukupnaKolicinaUlja++;
}
Ulje::Ulje(const Ulje& other)
{
    //copy ctor
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    vrsta    = other.vrsta;
    ukupnaKolicinaUlja++;
}
ostream& operator<<(ostream& izlaz, const Ulje& u){

    izlaz<<"*****ULJE*****"<<endl;
    izlaz<<"Vrsta    : ["<<u.vrsta<<"]"<<endl;
    izlaz<<"Kolicina : ["<<u.kolicina<<"]"<<endl;
    izlaz<<"Cena     : ["<<u.cena    <<"]"<<endl;
    if(u.pol == false)
    {
       izlaz<<"Pol      : [Muski]"<<endl;
    }
    else
    {
       izlaz<<"Pol      : [Zenski]"<<endl;
    }
    return izlaz;
}
Ulje::~Ulje()
{
    //dtor
}
int Ulje::ukupnaKolicinaUlja=0;

