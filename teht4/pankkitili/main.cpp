#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"
#include "asiakas.h"
using namespace std;

int main()
{

    asiakas Asiakas1("Aapeli",1000);
    Asiakas1.showSaldo();
    cout<<""<<endl;
    Asiakas1.talletus(250);
    Asiakas1.luotonNosto(150);
    Asiakas1.showSaldo();
    cout<<""<<endl;
    asiakas Asiakas2("Bertta",1000);
    Asiakas2.showSaldo();
    cout<<""<<endl;

    cout<<Asiakas1.getNimi()<<endl;
    Asiakas1.showSaldo();
    Asiakas1.tiliSiirto(50, Asiakas2);
    Asiakas1.nosto(50);
    Asiakas2.talletus(50);

    cout<<Asiakas2.getNimi()<<endl;
    Asiakas2.showSaldo();
}
