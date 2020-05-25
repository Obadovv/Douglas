#include "akcija.hpp"
Akcija::Akcija()
{
//ctor
}
void Akcija::spustiCenuSampona(int popust, vector<Sampon> &vectorSampona)
{
    for(auto it = vectorSampona.begin(); it!=vectorSampona.end(); it++)
    {
        it->setCena(it->getCena()*(100-popust)/100);
    }
}
void Akcija::spustiCenuKreme(int popust,vector<Krema> &vectorKrema)
{
    for(auto it = vectorKrema.begin(); it!=vectorKrema.end(); it++)
    {
        it->setCena(it->getCena()*(100-popust)/100);
    }
}
void Akcija::spustiCenuUlja(int popust,vector<Ulje> &vectorUlja)
{
     for(auto it = vectorUlja.begin(); it!=vectorUlja.end(); it++)
    {
        it->setCena(it->getCena()*(100-popust)/100);
    }
}
void Akcija::spustiCenuPilinga(int popust,vector<Piling> &vectorPilinga)
{
     for(auto it = vectorPilinga.begin(); it!=vectorPilinga.end(); it++)
    {
        it->setCena(it->getCena()*(100-popust)/100);
    }
}
