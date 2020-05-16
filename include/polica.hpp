#ifndef POLICA_HPP
#define POLICA_HPP
#include <vector>
#include <algorithm>
#include "proizvod.hpp"
#include "sampon.h"
#include "krema.hpp"
#include "ulje.hpp"
#include "piling.hpp"

typedef struct{
    int broj;
    int cena;
    int kolicina;
    bool pol;
    string opis;
}Kutija;

class Polica
{
    public:
        Polica();
        ~Polica();
        void popuniPolicuSamponima(Kutija);
        void popuniPolicuKremama  (Kutija);
        void popuniPolicuUljima   (Kutija);
        void popuniPolicuPilinzima(Kutija);

        void dodajSamponNaPolicu(int,int,bool,string);
        void dodajKremuNaPolicu (int,int,bool,string);
        void dodajUljeNaPolicu  (int,int,bool,string);
        void dodajPilingNaPolicu(int,int,bool,string);

        void izbrisiSamponSaPolice(int);
        void izbrisiKremuSaPolice (int);
        void izbrisiUljeSaPolice  (int);
        void izbrisiPilingSaPolice(int);

        void isprazniPolicuSampona();
        void isprazniPolicuKrema  ();
        void isprazniPolicuUlja   ();
        void isprazniPolicuPilinga();

        void ispisiSveSampone();
        void ispisiSveKreme();
        void ispisiSvaUlja();
        void ispisiSvePilinge();

        void nadjiMuskeSampone();
        void nadjiMuskeKreme();
        void nadjiZenskaUlja();
        void nadjiZenskePilinge();

        vector<Sampon> const &getVectorSampona() const { return vectorSampona; }
        vector<Krema>  const &getVectorKrema()   const { return vectorKrema; }
        vector<Ulje>   const &getVectorUlja()    const { return vectorUlja; }
        vector<Piling> const &getVectorPilinga() const { return vectorPilinga; }

        private:

        vector<Sampon> vectorSampona;
        vector<Krema>  vectorKrema;
        vector<Ulje>   vectorUlja;
        vector<Piling> vectorPilinga;

        vector<Sampon>::iterator itSampon;
        vector<Krema>::iterator  itKrema;
        vector<Ulje>::iterator   itUlja;
        vector<Piling>::iterator itPilinga;
};

#endif // POLICA_HPP
