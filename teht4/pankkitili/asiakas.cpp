#include "asiakas.h"



asiakas::asiakas(string nimi, double luottoraja) : nimi(nimi), kayttotili(nimi), luottotili(nimi,luottoraja)
{
    cout<<"Pankkitili luotu " << nimi<<":lle"<<endl;
    cout<<"Luottotili luotu " << nimi <<":lle, luottoraja "<<luottoraja<<endl;
    cout<<"Asiakkuus luotu " <<nimi <<endl;
}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: "<<kayttotili.getBalance()<< endl;
    cout << "Luottotilin saldo: "<<luottotili.getBalance()<< endl;
}

bool asiakas::talletus(double s)
{
    cout<<nimi<<" ";
    return kayttotili.deposit(s);
}

bool asiakas::nosto(double s)
{
    cout<<nimi<<" ";
    return kayttotili.withdraw(s);

}

bool asiakas::luotonMaksu(double w)
{
    return luottotili.deposit(w);
}

bool asiakas::luotonNosto(double s)
{
    return luottotili.withdraw(s);
}

bool asiakas::tiliSiirto(double s, asiakas &toinenasiakas)
{
    if (s<=0 || kayttotili.getBalance()<0){
        return false;
    }
    cout <<"Pankkitili: "<<nimi<<" siirtaa " << s <<" " <<toinenasiakas.nimi <<":lle" << endl;
    return true;
}

