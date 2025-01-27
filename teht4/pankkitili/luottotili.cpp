#include "luottotili.h"

luottotili::luottotili(string nimi, double luottoraja) : pankkitili(nimi), luottoraja(luottoraja)
{

}

bool luottotili::withdraw(double w){
    if (w <=0 || w > (saldo+luottoraja)){
        return false;
    }
    luottoraja -= w;
    cout <<"Luottotili: nosto "<<w<< " tehty, luottoa jaljella "<<luottoraja<<endl;
        return true;
        cout << " " << endl;
}
double luottotili::getBalance(){
    return luottoraja;
}
