#ifndef POKLONPAKET_HPP
#define POKLONPAKET_HPP

#include "proizvod.hpp"
#include "sampon.h"
#include "krema.hpp"
#include "ulje.hpp"
#include "piling.hpp"

#define KOLICINA_PAKETA 500

class PoklonPaket
{
    public:
        Sampon S;
        Krema  K;
        Ulje   U;
        Piling P;
    public:
        PoklonPaket(bool pol,int cena,int kombinacija):S(cena/kombinacija,100,false,"Kosa"),
                                                       K(cena/kombinacija,100,false,"Ruke"),
                                                       U(cena/kombinacija,100,false,"Telo"),
                                                       P(cena/kombinacija,100,false,"Med"){}
        void kreirajPaket(bool pol,int cena,int kombinacija);
};

#endif // POKLONPAKET_HPP
