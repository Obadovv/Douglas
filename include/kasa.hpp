#ifndef KASA_HPP
#define KASA_HPP
#include "polica.hpp"
class Kasa
{
    public:
        virtual void vrednostRobe(Polica) {cout<<"vrednostRobe(Polica) iz klase KASA"<<endl;}
        virtual void kolicinaRobe(Polica) {cout<<"kolicinaRobe(Polica) iz klase KASA"<<endl;}
};

#endif // KASA_HPP
