#ifndef KASADOUGLAS_HPP
#define KASADOUGLAS_HPP
#include "proizvod.hpp"
#include "kasa.hpp"
#include "polica.hpp"
#include <fstream>

class KasaDouglas : public Kasa
{
    public:
        KasaDouglas();
        ~KasaDouglas();
        int  getTrenutnaVrednostRobe () const { return trenutnaVrednostRobe; }
        int  getTrenutnaKolicinaRobe () const { return trenutnaKolicinaRobe; }
        int  getKolicinaSampona      () const { return kolicinaSampona; }
        int  getKolicinaKrema        () const { return kolicinaKrema; }
        int  getKolicinaUlja         () const { return kolicinaUlja; }
        int  getKolicinaPilinga      () const { return kolicinaPilinga; }

        int  getVrednostSampona      () const { return vrednostSampona; }
        int  getVrednostKrema        () const { return vrednostKrema; }
        int  getVrednostUlja         () const { return vrednostUlja; }
        int  getVrednostPilinga      () const { return vrednostPilinga; }

        void setKolicinaSampona       (int val) { kolicinaSampona = val; }
        void setKolicinaKrema         (int val) { kolicinaKrema   = val; }
        void setKolicinaUlja          (int val) { kolicinaUlja    = val; }
        void setKolicinaPilinga       (int val) { kolicinaPilinga = val; }

        void setTrenutnaVrednostRobe  (int val) { trenutnaVrednostRobe = val; }
        void setTrenutnaKolicinaRobe  (int val) { trenutnaKolicinaRobe = val; }

        void kolicinaRobe  (Polica);
        void vrednostRobe  (Polica);

    private:
        vector<Sampon>::iterator itSampon;
        vector<Krema>::iterator  itKrema;
        vector<Ulje>::iterator   itUlja;
        vector<Piling>::iterator itPilinga;

        vector<Sampon>  vectorSampona;
        vector<Krema>   vectorKrema;
        vector<Ulje>    vectorUlja;
        vector<Piling>  vectorPilinga;

        int trenutnaVrednostRobe;
        int trenutnaKolicinaRobe;

        int kolicinaSampona;
        int kolicinaKrema;
        int kolicinaUlja;
        int kolicinaPilinga;

        int vrednostSampona;
        int vrednostKrema;
        int vrednostUlja;
        int vrednostPilinga;
};

#endif // KASADOUGLAS_HPP
