#ifndef ULJE_HPP
#define ULJE_HPP
#include <Proizvod.hpp>


class Ulje : public Proizvod
{
    public:
        Ulje();
        Ulje(int, int, bool, string);
        ~Ulje();
        Ulje(const Ulje& other);

        int    getCena()         { return cena; }
        int    getKolicina()     { return kolicina; }
        bool   getPol()          { return pol; }
        string getVrsta()        { return vrsta; }

        void setKolicina (int val)    { kolicina = val; }
        void setCena     (int val)    { cena = val; }
        void setPol      (bool val)   { pol = val; }
        void setVrsta    (string val) { vrsta = val; }

    protected:

    private:
        int  cena;
        int  kolicina;
        bool pol;

        string vrsta;
};

#endif // ULJE_HPP
