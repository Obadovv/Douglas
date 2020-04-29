#ifndef AKCIJA_HPP
#define AKCIJA_HPP

#include "proizvod.hpp"
#include "sampon.h"
#include "krema.hpp"
#include "ulje.hpp"
#include "piling.hpp"

class Akcija
{
    private:
        Sampon S;
        Krema  K;
        Ulje   U;
        Piling P;
    public:
        //TODO: Napisati ovaj konstruktor, ostavljen je za sada ovako jer nisam sigurna kako cu dalje raditi
        Akcija(int kombinacija, int popust):S(),
                                            K(),
                                            U(),
                                            P(){}
    private:
        void podesiCeneProizvoda(int kombinacija,int popust);
        void spustiCenuSampona  (int popust);
        void spustiCenuKreme    (int popust);
        void spustiCenuUlja     (int popust);
        void spustiCenuPilinga  (int popust);
};

#endif // AKCIJA_HPP
