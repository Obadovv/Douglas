#ifndef UCITAJSPISAK_HPP
#define UCITAJSPISAK_HPP

#include <string>
#include <sstream>
#include <fstream>
#include<iostream>

using namespace std;

class ucitajSpisak
{
    public:
        ucitajSpisak();
        void ucitajSve();
        void ispisiSampone();
        void ispisiKreme();
        void ispisiUlja();
        void ispisiPilinge();
    private:
        int  kolicinaSampona;
        int  kolicinaKrema;
        int  kolicinaUlja;
        int  kolicinaPilinga;
};

#endif // UCITAJSPISAK_HPP
