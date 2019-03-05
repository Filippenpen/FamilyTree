#ifndef OSOBA_H
#define OSOBA_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Osoba
{
    public:
        Osoba(string _ime, string _prezime, int _generacija);
        virtual ~Osoba();
        void IspisiOsobu();
        /*ispisiDecu();
        IspisiRoditelje();
        IspisiPartnera();*/
        void DodajDete(Osoba&);
        //DodajPartnera(Osoba&);


    protected:

    private:
         string ime;
        string prezime;
        int generacija;
        vector<Osoba&> deca;
};

#endif // OSOBA_H
