#include "sampon.h"

Sampon::Sampon()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    svojstvo = "univerzalni";
    ukupnaKolicinaSampona++;
}
Sampon::Sampon(int _cena, int _kolicina, bool _pol, string _svojstvo)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    svojstvo = _svojstvo;
    ukupnaKolicinaSampona++;
}
Sampon::Sampon(const Sampon& other)
{
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    svojstvo = other.svojstvo;
    ukupnaKolicinaSampona++;
}
ostream& operator<<(ostream& izlaz, const Sampon& s)
{

    izlaz<<"*****SAMPON*****"<<endl;
    izlaz<<"Svojstvo : ["<<s.svojstvo<<"]"<<endl;
    izlaz<<"Kolicina : ["<<s.kolicina<<"]"<<endl;
    izlaz<<"Cena     : ["<<s.cena    <<"]"<<endl;
    if(s.pol == false)
    {
       izlaz<<"Pol      : [Muski]"<<endl;
    }
    else
    {
       izlaz<<"Pol      : [Zenski]"<<endl;
    }
    return izlaz;
}
Sampon::~Sampon()
{
    //dtor
    ukupnaKolicinaSampona--;
}
int Sampon::ukupnaKolicinaSampona=0;
