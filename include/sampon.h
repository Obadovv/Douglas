#ifndef SAMPON_HPP
#define SAMPON_HPP
#include <Proizvod.hpp>

class Sampon : public Proizvod
{
    public:
        Sampon();
        Sampon(int, int, bool, string);
        Sampon(const Sampon& other);
        ~Sampon();

        int  getCena    ()  { return cena; }
        int  getKolicina()  { return kolicina; }
        bool getPol     ()  { return pol; }
        string getSvojstvo(){ return svojstvo; }

        void setCena    (int val)    { cena = val; }
        void setKolicina(int val)    { kolicina = val; }
        void setPol     (bool val)   { pol = val; }
        void setSvojstvo(string val) { svojstvo = val; }

    private:
        int  cena;
        int  kolicina;
        bool pol;

        string svojstvo;
};

#endif // SAMPON_HPP
