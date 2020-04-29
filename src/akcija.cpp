#include "akcija.hpp"

void Akcija::podesiCeneProizvoda(int kombinacija, int popust)
{
    if(popust < 0 || popust > 100)
    {
        popust = 100-popust;
    }
    else
    {
        popust = 0;
    }

    if(kombinacija > 4 || kombinacija < 1)
    {
        kombinacija = 1;
    }

    switch(kombinacija)
    {
        case 1: spustiCenuSampona(popust);
                break;
        case 2: spustiCenuSampona(popust); spustiCenuKreme(popust);
                break;
        case 3: spustiCenuSampona(popust); spustiCenuKreme(popust);spustiCenuUlja(popust);
                break;
        case 4: spustiCenuSampona(popust); spustiCenuKreme(popust);spustiCenuUlja(popust);spustiCenuPilinga(popust);
                break;
        default:
                break;
    }
}
void Akcija::spustiCenuSampona(int popust)
{
    //Sampon
    int privremena_cena = S.getCena();
    privremena_cena     = (privremena_cena*(popust/100));

    S.setCena(privremena_cena);
    S.setSvojstvo("Akcija Sampon");
}
void Akcija::spustiCenuKreme(int popust)
{
    //Krema
    int privremena_cena = K.getCena();
    privremena_cena = (privremena_cena*(popust/100));

    K.setCena(privremena_cena);
    K.setNamena("Akcija Krema");
}
void Akcija::spustiCenuUlja(int popust)
{
    //Ulje
    int privremena_cena = U.getCena();
    privremena_cena     = (privremena_cena*(popust/100));

    U.setCena(privremena_cena);
    U.setVrsta("Akcija Ulje");
}
void Akcija::spustiCenuPilinga(int popust)
{
    //Piling
    int privremena_cena = P.getCena();
    privremena_cena     = (privremena_cena*(popust/100));

    P.setCena(privremena_cena);
    P.setAroma("Akcija Piling");
}
