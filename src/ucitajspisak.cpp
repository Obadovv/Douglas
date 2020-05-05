#include "ucitajspisak.hpp"

ucitajSpisak::ucitajSpisak()
{
    kolicinaSampona = 0;
    kolicinaKrema   = 0;
    kolicinaUlja    = 0;
    kolicinaPilinga = 0;
}
void ucitajSpisak::ucitajSve()
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,linija;
    ifstream ucitajFajl("Ulaz");
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        cout<<uNaziv<<" "<<uNamena<<" "<<uCena<<" "<<uPol<<" "<<uKolicina<<endl;
    }
    ucitajFajl.close();
}
void ucitajSpisak::ispisiSampone()
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,linija;
    ifstream ucitajFajl("Ulaz");
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        if(uNaziv == "Sampon")
        {
            kolicinaSampona++;
            cout<<uNaziv<<" "<<uNamena<<" "<<uCena<<" "<<uPol<<" "<<uKolicina<<endl;
        }
    }
    cout<<"Kolicina sampona = "<<kolicinaSampona<<endl;
    ucitajFajl.close();
}
void ucitajSpisak::ispisiKreme()
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,linija;
    ifstream ucitajFajl("Ulaz");
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        if(uNaziv == "Krema")
        {
            kolicinaKrema++;
            cout<<uNaziv<<" "<<uNamena<<" "<<uCena<<" "<<uPol<<" "<<uKolicina<<endl;
        }

    }
    cout<<"Kolicina krema = "<<kolicinaKrema<<endl;
    ucitajFajl.close();
}
void ucitajSpisak::ispisiUlja()
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,linija;
    ifstream ucitajFajl("Ulaz");
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        if(uNaziv == "Ulje")
        {
            kolicinaUlja++;
            cout<<uNaziv<<" "<<uNamena<<" "<<uCena<<" "<<uPol<<" "<<uKolicina<<endl;
        }

    }
    cout<<"Kolicina ulja = "<<kolicinaUlja<<endl;
    ucitajFajl.close();
}
void ucitajSpisak::ispisiPilinge()
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,linija;
    ifstream ucitajFajl("Ulaz");
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        if(uNaziv == "Piling")
        {
            kolicinaPilinga++;
            cout<<uNaziv<<" "<<uNamena<<" "<<uCena<<" "<<uPol<<" "<<uKolicina<<endl;
        }
    }
    cout<<"Kolicina pilinga = "<<kolicinaPilinga<<endl;
    ucitajFajl.close();
}
