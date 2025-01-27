#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "luottotili.h"

class asiakas
{
public:
    asiakas(string nimi, double luottoraja);
    string getNimi();
    void showSaldo();
    bool talletus(double w);
    bool nosto(double s);
    bool luotonMaksu(double w);
    bool luotonNosto(double s);
    bool tiliSiirto(double s, asiakas &toinenasiakas);

protected:
    string nimi;
    pankkitili kayttotili;
    luottotili luottotili;
};


#endif // ASIAKAS_H
