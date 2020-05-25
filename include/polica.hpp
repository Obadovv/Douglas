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

        int nadjiSampon(bool);
        int nadjiKremu(bool);
        int nadjiUlje(bool);
        int nadjiPiling(bool);

        vector<Sampon>  &getVectorSampona()  { return vectorSampona; }
        vector<Krema>   &getVectorKrema()    { return vectorKrema; }
        vector<Ulje>    &getVectorUlja()     { return vectorUlja; }
        vector<Piling>  &getVectorPilinga()  { return vectorPilinga; }

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
