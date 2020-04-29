#ifndef PILING_HPP
#define PILING_HPP
#include <Proizvod.hpp>

class Piling : public Proizvod
{
    public:
        Piling();
        Piling(int,int,bool,string);
        ~Piling();
        Piling(const Piling& other);

        int    getKolicina() { return kolicina; }
        int    getCena()     { return cena; }
        bool   getPol()      { return pol; }
        string getAroma()    { return aroma; }

        void setCena    (int val)   { cena = val; }
        void setKolicina(int val)   { kolicina = val; }
        void setPol     (bool val)  { pol = val; }
        void setAroma   (string val){ aroma = val; }
    private:
        int  kolicina;
        int  cena;
        bool pol;

        string aroma;
};

#endif // PILING_HPP
