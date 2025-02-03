#include "seuraaja.h"
#include <iostream>


Seuraaja::Seuraaja(string n): nimi(n), next(nullptr)
{
    cout<<"luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string &viesti)
{
    cout <<"Seuraaja "<<nimi<< " sai viestin " << viesti <<endl;
}
