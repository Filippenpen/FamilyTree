#include "Osoba.h"

void Osoba::IspisiOsobu(){
    cout << ime << " " << prezime << " " << generacija << endl;

}
void Osoba::DodajDete(Osoba){
    deca.push_back(Osoba&);

}
Osoba::Osoba(string _ime, string _prezime, int _generacija):
    ime(_ime),prezime(_prezime),generacija(_generacija)
{
}

Osoba::~Osoba()
{

}

