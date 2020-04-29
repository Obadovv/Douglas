#include "sampon.h"

Sampon::Sampon()
{
    cena     = 0;
    kolicina = 0;
    pol      = false;
    svojstvo = "univerzalni";
}
Sampon::Sampon(int _cena, int _kolicina, bool _pol, string _svojstvo)
{
    cena     = _cena;
    kolicina = _kolicina;
    pol      = _pol;
    svojstvo = _svojstvo;
}
Sampon::Sampon(const Sampon& other)
{
    cena     = other.cena;
    kolicina = other.kolicina;
    pol      = other.pol;
    svojstvo = other.svojstvo;
}

Sampon::~Sampon()
{
    //dtor
}
