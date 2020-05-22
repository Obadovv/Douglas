#ifndef IZVESTAJ_HPP
#define IZVESTAJ_HPP
#include <fstream>
#include "kasadouglas.hpp"
using namespace std;

class Izvestaj
{
    public:
        Izvestaj();
        void zapocniDan(KasaDouglas);
        void zavrsiDan(KasaDouglas);

        int    getPocetnaKolicinaRobe () const { return pocetnaKolicinaRobe;}
        int    getPocetnaVrednostRobe () const { return pocetnaVrednostRobe;}
        void   setPocetnaKolicinaRobe (int val){ pocetnaKolicinaRobe = val; }
        void   setPocetnaVrednostRobe (int val){ pocetnaVrednostRobe = val; }

        void   uvecajPocetnuKolicinuRobe (int val){ pocetnaKolicinaRobe += val; }
        void   uvecajPocetnuVrednostRobe (int val){ pocetnaVrednostRobe += val; }

        int    getKrajnjaKolicinaRobe () const { return krajnjaKolicinaRobe;}
        int    getKrajnjaVrednostRobe () const { return krajnjaVrednostRobe;}
        void   setKrajnjaKolicinaRobe (int val){ krajnjaKolicinaRobe = val; }
        void   setKrajnjaVrednostRobe (int val){ krajnjaVrednostRobe = val; }

    private:
        int pocetnaKolicinaRobe;
        int pocetnaVrednostRobe;
        int krajnjaKolicinaRobe;
        int krajnjaVrednostRobe;

        ofstream pocetnoStanje;
        ofstream zavrsnoStanje;

};

#endif // IZVESTAJ_HPP
