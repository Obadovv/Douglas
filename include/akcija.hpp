#ifndef AKCIJA_HPP
#define AKCIJA_HPP

#include "proizvod.hpp"
#include "sampon.h"
#include "krema.hpp"
#include "ulje.hpp"
#include "piling.hpp"
#include "vector"
class Akcija
{
    public:
        //TODO: Napisati ovaj konstruktor, ostavljen je za sada ovako jer nisam sigurna kako cu dalje raditi
        Akcija();
        void spustiCenuSampona  (int popust,vector<Sampon> &vectorSampona);
        void spustiCenuKreme    (int popust,vector<Krema> &vectorKrema);
        void spustiCenuUlja     (int popust,vector<Ulje> &vectorUlja);
        void spustiCenuPilinga  (int popust,vector<Piling> &vectorPilinga);
};

#endif // AKCIJA_HPP
