#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef
{
public:
    Chef(string name);
    ~Chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);
protected:
    string chefName;
};

#endif // CHEF_H
