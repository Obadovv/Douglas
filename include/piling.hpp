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

        int    getKolicina    () const { return kolicina; }
        int    getCena        () const { return cena; }
        bool   getPol         () const { return pol; }
        string getAroma       () const { return aroma; }
        int  getUkupnaKolicina() const { return ukupnaKolicinaPilinga; }

        void setCena    (int val)   { cena = val; }
        void setKolicina(int val)   { kolicina = val; }
        void setPol     (bool val)  { pol = val; }
        void setAroma   (string val){ aroma = val; }

        friend ostream& operator<<(ostream& izlaz, const Piling& p);
    private:
        int  kolicina;
        int  cena;
        bool pol;

        string aroma;
        static int ukupnaKolicinaPilinga;
};

#endif // PILING_HPP
