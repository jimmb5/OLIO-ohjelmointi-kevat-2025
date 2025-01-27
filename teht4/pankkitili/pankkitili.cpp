#include "pankkitili.h"


pankkitili::pankkitili(string nimi) : omistaja(nimi) , saldo(0.0)
{

}

double pankkitili::getBalance()
{
    return saldo;
}

bool pankkitili::deposit(double s)
{
    if (s <=0){
        return false;
    }
    saldo +=s;
    cout<<"Pankkitili: talletus "<<s <<" tehty" << endl;
        return true;
}

bool pankkitili::withdraw(double w)
{
    if (w > saldo||w<=0){
        return false;
    }
    saldo -= w;
    cout<<"Pankkitili: nosto "<<w<<" tehty"<<endl;
                return true;
}
