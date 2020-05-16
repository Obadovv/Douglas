#include "kasadouglas.hpp"

KasaDouglas::KasaDouglas()
{
    trenutnaVrednostRobe = 0;
    trenutnaKolicinaRobe = 0;
    kolicinaSampona      = 0;
    kolicinaKrema        = 0;
    kolicinaUlja         = 0;
    kolicinaPilinga      = 0;
    //ctor
}
void KasaDouglas::kolicinaRobe(Polica polica)
{
    setTrenutnaKolicinaRobe(0);
    vectorSampona = polica.getVectorSampona();
    trenutnaKolicinaRobe+=vectorSampona.size();
    setKolicinaSampona(vectorSampona.size());

    vectorKrema = polica.getVectorKrema();
    trenutnaKolicinaRobe+=vectorKrema.size();
    setKolicinaKrema(vectorSampona.size());

    vectorUlja = polica.getVectorUlja();
    trenutnaKolicinaRobe+=vectorUlja.size();
    setKolicinaUlja(vectorUlja.size());

    vectorPilinga = polica.getVectorPilinga();
    trenutnaKolicinaRobe+=vectorPilinga.size();
    setKolicinaPilinga(vectorPilinga.size());
}
void KasaDouglas::vrednostRobe(Polica polica)
{
    setTrenutnaVrednostRobe(0);
    vectorSampona= polica.getVectorSampona();
    vectorKrema  = polica.getVectorKrema();
    vectorUlja   = polica.getVectorUlja();
    vectorPilinga= polica.getVectorPilinga();

    for(itSampon = vectorSampona.begin(); itSampon != vectorSampona.end(); itSampon++)
    {
        trenutnaVrednostRobe+= itSampon->getCena();
        vrednostSampona     += itSampon->getCena();
    }
    for(itKrema = vectorKrema.begin(); itKrema != vectorKrema.end(); itKrema++)
    {
        trenutnaVrednostRobe+= itKrema->getCena();
        vrednostKrema       += itKrema->getCena();
    }
    for(itUlja = vectorUlja.begin(); itUlja != vectorUlja.end(); itUlja++)
    {
        trenutnaVrednostRobe+= itUlja->getCena();
        vrednostUlja        += itUlja->getCena();
    }
    for(itPilinga = vectorPilinga.begin(); itPilinga != vectorPilinga.end(); itPilinga++)
    {
        trenutnaVrednostRobe+= itPilinga->getCena();
        vrednostPilinga     += itPilinga->getCena();
    }
}
KasaDouglas::~KasaDouglas()
{
    if(!vectorSampona.empty())
    {
        vectorSampona.clear();
    }
    if(!vectorKrema.empty())
    {
        vectorKrema.clear();
    }
    if(!vectorUlja.empty())
    {
        vectorUlja.clear();
    }
    if(!vectorPilinga.empty())
    {
        vectorPilinga.clear();
    }
    //dtor
}
