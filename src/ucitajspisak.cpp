#include "ucitajspisak.hpp"
#define KUTIJA_MAX_VELICINA 6
ucitajSpisak::ucitajSpisak()
{
    kolicinaSampona = 0;
    kolicinaKrema   = 0;
    kolicinaUlja    = 0;
    kolicinaPilinga = 0;
}
void ucitajSpisak::ucitajSve(string Ulaz)
{
    string uNaziv,uNamena,uCena,uPol,uKolicina,uKutija,linija;
    ifstream ucitajFajl(Ulaz);
    Kutija kutija;
    bool tmp_pol;
    while(getline(ucitajFajl,linija))
    {
        stringstream red(linija);
        getline(red, uNaziv    , ',');
        getline(red, uNamena   , ',');
        getline(red, uCena     , ',');
        getline(red, uPol      , ',');
        getline(red, uKolicina , ',');
        getline(red, uKutija   , ',');
        if(uPol == "muski")
        {
            tmp_pol = false;
        }
        else if(uPol == "zenski")
        {
            tmp_pol = true;
        }
        else
        {
            cout<<"Nepoznat pol, pol postavljen na muski "<<uPol<<endl;
            tmp_pol = false;
        }
        /*Nije radjen switch case jer bih morala raditi stalno konverziju stringa u int*/
        if(uKutija == "Kutija")
        {   uKutija         = "";
            kutija.broj     = KUTIJA_MAX_VELICINA;
            kutija.cena     = stoi(uCena);
            kutija.kolicina = stoi(uKolicina);
            kutija.opis     = uNamena;
            kutija.pol      = tmp_pol;
            dodajKutijuNaPolicu(kutija,uNaziv);
        }
        else if(uNaziv == "Sampon")
        {
            polica.dodajSamponNaPolicu(stoi(uCena),stoi(uKolicina),tmp_pol,uNamena);
        }
        else if(uNaziv == "Krema")
        {
            polica.dodajKremuNaPolicu(stoi(uCena),stoi(uKolicina),tmp_pol,uNamena);
        }
        else if(uNaziv == "Ulje")
        {
            polica.dodajUljeNaPolicu(stoi(uCena),stoi(uKolicina),tmp_pol,uNamena);
        }
        else if(uNaziv == "Piling")
        {
            polica.dodajPilingNaPolicu(stoi(uCena),stoi(uKolicina),tmp_pol,uNamena);
        }
        else
        {
            /**Poslednji red se ucita kao prazan string pa to zelimo da izbegnemo da ispisuje svaki put*/
            if(uNaziv != "")
            {
                cout<<"Artikal ["<<uNaziv<<"] nepoznat, nece biti dodat na policu"<<endl;
            }
        }

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
void ucitajSpisak::dodajKutijuNaPolicu(Kutija kutija,string tip)
{
    if(tip == "Sampon")
    {
        polica.popuniPolicuSamponima(kutija);
    }
    else if(tip == "Krema")
    {
        polica.popuniPolicuKremama(kutija);
    }
    else if(tip == "Ulje")
    {
        polica.popuniPolicuUljima(kutija);
    }
    else if(tip == "Piling")
    {
        polica.popuniPolicuPilinzima(kutija);
    }
    else
    {
        cout<<"Kutija nepoznatih artikala ["<<tip<<"] nece biti dodata na policu!"<<endl;
    }
}
