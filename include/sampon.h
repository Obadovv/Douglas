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

        int    getCena          () const { return cena; }
        int    getKolicina      () const { return kolicina; }
        bool   getPol           () const { return pol; }
        string getSvojstvo      () const { return svojstvo; }
        int    getUkupnaKolicina() const { return ukupnaKolicinaSampona; }


        void setCena      (int val)    { cena = val; }
        void setKolicina  (int val)    { kolicina = val; }
        void setPol       (bool val)   { pol = val; }
        void setSvojstvo  (string val) { svojstvo = val; }

        void primeniPopust(int val){setCena(getCena()-val);}
        friend ostream& operator<<(ostream& izlaz, const Sampon& s);
    private:
        int  cena;
        int  kolicina;
        bool pol;
        static int ukupnaKolicinaSampona;

        string svojstvo;
};

#endif // SAMPON_HPP
