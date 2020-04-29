#include "krema.hpp"

Krema::Krema()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    namena   = "univerzalna";
}
Krema::Krema(int _cena, int _kolicina, bool _pol, string _namena)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    namena   = _namena;
}
Krema::Krema(const Krema& other)
{
    //copy ctor
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    namena   = other.namena;
}
Krema::~Krema()
{
    //dtor
}


