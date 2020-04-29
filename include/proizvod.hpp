#ifndef PROIZVOD_HPP
#define PROIZVOD_HPP

#include <string>
using namespace std;

class Proizvod
{
    public:
         int  getCena();
         int  getKolicina();
         bool getPol();
         void setCena(int val);
         void setKolicina(int val);
         void setPol(bool val);
};
#endif // PROIZVOD_HPP
