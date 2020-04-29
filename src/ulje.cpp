#include "ulje.hpp"

Ulje::Ulje()
{
    //ctor
    cena     = 0;
    kolicina = 0;
    pol      = false;
    vrsta    = "univerzalno";
}
Ulje::Ulje(int _cena, int _kolicina, bool _pol, string _vrsta)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    vrsta    = _vrsta;
}
Ulje::Ulje(const Ulje& other)
{
    //copy ctor
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    vrsta    = other.vrsta;
}
Ulje::~Ulje()
{
    //dtor
}


