#include "polica.hpp"

Polica::Polica()
{
    itSampon  = vectorSampona.begin();
    itKrema   = vectorKrema.begin();
    itUlja    = vectorUlja.begin();
    itPilinga = vectorPilinga.begin();
    //ctor
}
/*SAMPON*/
void Polica::popuniPolicuSamponima(Kutija k1)
{
    if(vectorSampona.empty())
    {
        for(int i = 0; i < k1.broj; i++)
        {
            itSampon = vectorSampona.insert(itSampon,Sampon(k1.cena,k1.kolicina,k1.pol,k1.opis));
        }
    }
    else
    {
        cout<<"Kutija se moze dodati samo na praznu policu,a u polici vec ima "<<vectorSampona.size()<<" sampona"<<endl;
    }
}
void Polica::isprazniPolicuSampona()
{
    vectorSampona.erase(vectorSampona.begin(),vectorSampona.end());
}
void Polica::dodajSamponNaPolicu(int cena, int kolicina, bool pol, string namena)
{
    vectorSampona.push_back(Sampon(cena,kolicina,pol,namena));
}
void Polica::ispisiSveSampone()
{
    if(vectorSampona.empty())
    {
        cout<<"Nema sampona!!!"<<endl;
    }
    else
    {
        for(auto it = vectorSampona.begin(); it!=vectorSampona.end(); it++)
        {
            cout<<*it;
        }
    }
}
int Polica::nadjiSampon(bool pol)
{
    if(vectorSampona.empty())
    {
        cout<<"Nema sampona na polici!!!"<<endl;
    }
    else
    {
        for(auto it = vectorSampona.begin(); it!=vectorSampona.end(); it++)
        {
            if(it->getPol() == pol)
            {
                cout<<"Nadjen sampon"<<endl;
                return std::distance(vectorSampona.begin(), it);
            }
        }
    }
    return -1;
}
void Polica::izbrisiSamponSaPolice(int pozicija)
{
    if((pozicija < 0) || ((int)vectorSampona.size()< pozicija))
    {
        cout<<"Nemamo trazenih sampona vise"<<endl;
    }
    else
    {
        cout<<"Prodat je sampon sa pozicije "<<pozicija + 1<<endl;
        cout<<vectorSampona.at(pozicija);
        vectorSampona.erase(vectorSampona.begin()+pozicija);
    }
}
/*KREMA*/
void Polica::popuniPolicuKremama(Kutija k2)
{
    if(vectorKrema.empty())
    {
        for(int i = 0; i < k2.broj; i++)
        {
            itKrema = vectorKrema.insert(itKrema,Krema(k2.cena,k2.kolicina,k2.pol,k2.opis));
        }
    }
    else
    {
        cout<<"Kutija se moze dodati samo na praznu policu,a u polici vec ima "<<vectorKrema.size()<<" krema"<<endl;
    }
}
void Polica::isprazniPolicuKrema()
{
    vectorKrema.erase(vectorKrema.begin(),vectorKrema.end());
}
void Polica::dodajKremuNaPolicu(int cena, int kolicina, bool pol, string namena)
{
    vectorKrema.push_back(Krema(cena,kolicina,pol,namena));
}
void Polica::ispisiSveKreme()
{
    if(vectorKrema.empty())
    {
        cout<<"Nema krema!!!"<<endl;
    }
    else
    {
        for(auto it = vectorKrema.begin(); it!=vectorKrema.end(); it++)
        {
            cout<<*it;
        }
    }
}
int Polica::nadjiKremu(bool pol)
{
    if(vectorKrema.empty())
    {
        cout<<"Nema krema!!!"<<endl;
    }
    else
    {
        for(auto it = vectorKrema.begin(); it!=vectorKrema.end(); it++)
        {
            if(it->getPol() == pol)
            {
                cout<<"Nadjena krema"<<endl;
                return std::distance(vectorKrema.begin(), it);
            }
        }
    }
    return -1;
}
void Polica::izbrisiKremuSaPolice(int pozicija)
{
    if((pozicija < 0) || ((int)vectorKrema.size()< pozicija))
    {
        cout<<"Nemamo trazenih krema vise"<<endl;
    }
    else
    {
        cout<<"Prodata je krema sa pozicije "<<pozicija + 1<<endl;
        cout<<vectorKrema.at(pozicija);
        vectorKrema.erase(vectorKrema.begin()+pozicija);
    }
}
/*ULJE*/
void Polica::popuniPolicuUljima(Kutija k3)
{
    if(vectorUlja.empty())
    {
        for(int i = 0; i < k3.broj; i++)
        {
            itUlja = vectorUlja.insert(itUlja,Ulje(k3.cena,k3.kolicina,k3.pol,k3.opis));
        }
    }
    else
    {
        cout<<"Kutija se moze dodati samo na praznu policu,a u polici vec ima "<<vectorUlja.size()<<" ulja"<<endl;
    }
}
void Polica::isprazniPolicuUlja()
{
    vectorUlja.erase(vectorUlja.begin(),vectorUlja.end());
}
void Polica::dodajUljeNaPolicu(int cena, int kolicina, bool pol, string vrsta)
{
    vectorUlja.push_back(Ulje(cena,kolicina,pol,vrsta));
}
void Polica::ispisiSvaUlja()
{
    if(vectorUlja.empty())
    {
        cout<<"Nema ulja!!!"<<endl;
    }
    else
    {
        for(auto it = vectorUlja.begin(); it!=vectorUlja.end(); it++)
        {
            cout<<*it;
        }
    }
}
int Polica::nadjiUlje(bool pol)
{
    if(vectorUlja.empty())
    {
        cout<<"Nema ulja!!!"<<endl;
    }
    else
    {
        for(auto it = vectorUlja.begin(); it!=vectorUlja.end(); it++)
        {
            if(it->getPol() == pol)
            {
                cout<<"Nadjeno ulje"<<endl;
                return std::distance(vectorUlja.begin(), it);
            }
        }
    }
    return -1;
}
void Polica::izbrisiUljeSaPolice(int pozicija)
{
    if((pozicija < 0) || ((int)vectorUlja.size()< pozicija))
    {
        cout<<"Nemamo trazenih ulja vise"<<endl;
    }
    else
    {
        cout<<"Prodato je ulje sa pozicije "<<pozicija + 1<<endl;
        cout<<vectorUlja.at(pozicija);
        vectorUlja.erase(vectorUlja.begin()+pozicija);
    }
}
/*PILING*/
void Polica::popuniPolicuPilinzima(Kutija k4)
{
    if(vectorPilinga.empty())
    {
        for(int i = 0; i < k4.broj; i++)
        {
            itPilinga = vectorPilinga.insert(itPilinga,Piling(k4.cena,k4.kolicina,k4.pol,k4.opis));
        }
    }
    else
    {
        cout<<"Kutija se moze dodati samo na praznu policu,a u polici vec ima "<<vectorPilinga.size()<<" pilinga"<<endl;
    }
}
void Polica::isprazniPolicuPilinga()
{
    vectorPilinga.erase(vectorPilinga.begin(),vectorPilinga.end());
}
void Polica::dodajPilingNaPolicu(int cena, int kolicina, bool pol, string aroma)
{
    vectorPilinga.push_back(Piling(cena,kolicina,pol,aroma));
}
void Polica::ispisiSvePilinge()
{
    if(vectorPilinga.empty())
    {
        cout<<"Nema pilinga!!!"<<endl;
    }
    else
    {
        for(auto it = vectorPilinga.begin(); it!=vectorPilinga.end(); it++)
        {
            cout<<*it;
        }
    }
}
int Polica::nadjiPiling(bool pol)
{
    if(vectorPilinga.empty())
    {
        cout<<"Nema pilinga!!!"<<endl;
    }
    else
    {
        for(auto it = vectorPilinga.begin(); it!=vectorPilinga.end(); it++)
        {
            if(it->getPol() == pol)
            {
                cout<<"Nadjen piling"<<endl;
                return std::distance(vectorPilinga.begin(), it);
            }
        }
    }
    return -1;
}
void Polica::izbrisiPilingSaPolice(int pozicija)
{
    if((pozicija < 0) || ((int)vectorPilinga.size()< pozicija))
    {
        cout<<"Nemamo trazenih pilinga vise"<<endl;
    }
    else
    {
        cout<<"Prodat je piling sa pozicije "<<pozicija + 1<<endl;
        cout<<vectorPilinga.at(pozicija);
        vectorPilinga.erase(vectorPilinga.begin()+pozicija);
    }
}
Polica::~Polica()
{
    if(!vectorSampona.empty())
    {
        vectorSampona.clear();
    }
    if(!vectorKrema.empty())
    {
        vectorKrema.clear();
    }
    if(!vectorUlja.empty())
    {
        vectorUlja.clear();
    }
    if(!vectorPilinga.empty())
    {
        vectorPilinga.clear();
    }
    //dtor
}
