#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;
class pankkitili
{
public:
    pankkitili(string nimi);
    double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);

protected:
    string omistaja;
    double saldo = 0;
};


#endif // PANKKITILI_H
