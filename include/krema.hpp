#ifndef KREMA_HPP
#define KREMA_HPP
#include <Proizvod.hpp>

class Krema : public Proizvod
{
    public:
        Krema();
        Krema(int,int,bool,string);
        Krema(const Krema& other);
        ~Krema();

        int  getCena    () const { return cena; }
        int  getKolicina() const { return kolicina; }
        bool getPol     () const { return pol; }
        string getNamena() const { return namena; }

        void setKolicina(int val)   { kolicina = val; }
        void setCena    (int val)   { cena = val; }
        void setPol     (bool val)  { pol = val; }
        void setNamena  (string val){namena = val; }

    private:
        int  cena;
        int  kolicina;
        bool pol;

        string namena;
};

#endif // KREMA_HPP
