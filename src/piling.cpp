#include "piling.hpp"

Piling::Piling()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    aroma    = "bez arome";
}
Piling::Piling(int _cena, int _kolicina, bool _pol, string _aroma)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    aroma    = _aroma;
}
Piling::Piling(const Piling& other)
{
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    aroma    = other.aroma;
}
Piling::~Piling()
{
    //dtor
}


