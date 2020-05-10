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

        int    getCena          () { return cena; }
        int    getKolicina      () { return kolicina; }
        bool   getPol           () { return pol; }
        string getVrsta         () { return vrsta; }
        int    getUkupnaKolicina() { return ukupnaKolicinaUlja; }

        void setKolicina (int val)    { kolicina = val; }
        void setCena     (int val)    { cena = val; }
        void setPol      (bool val)   { pol = val; }
        void setVrsta    (string val) { vrsta = val; }

        friend ostream& operator<<(ostream& izlaz, const Ulje& u);
    private:
        int  cena;
        int  kolicina;
        bool pol;

        string vrsta;
        static int ukupnaKolicinaUlja;
};

#endif // ULJE_HPP
