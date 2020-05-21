#ifndef UCITAJSPISAK_HPP
#define UCITAJSPISAK_HPP

#include <string>
#include <sstream>
#include <fstream>
#include<iostream>

#include "polica.hpp"
using namespace std;

class ucitajSpisak
{
    public:
        ucitajSpisak();
        Polica polica;

        void ispisiSampone();
        void ispisiKreme();
        void ispisiUlja();
        void ispisiPilinge();
        void ucitajSve(string);
        void dodajKutijuNaPolicu(Kutija,string);
    private:
        int  kolicinaSampona;
        int  kolicinaKrema;
        int  kolicinaUlja;
        int  kolicinaPilinga;
};

#endif // UCITAJSPISAK_HPP
