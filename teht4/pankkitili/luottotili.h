#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include <string>
using namespace std;
#include "pankkitili.h"

class luottotili : public pankkitili
{
public:
    luottotili(string nimi, double luottoraja);
    virtual bool withdraw(double w) override;
    double getBalance();

protected:
    double luottoraja=0;
};

#endif // LUOTTOTILI_H
