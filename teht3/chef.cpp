#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << chefName <<"konstruktori"<< endl;
}

Chef::~Chef()
{
    cout << chefName << "destruktori" << endl;
}

string Chef::getName()
{
    cout << "chef: "<< chefName << endl;
    return chefName;
}

int Chef::makeSalad(int ainekset)
{
    int portions=ainekset/5;
    cout <<"chef "<< chefName <<"with " << ainekset<<" items"<<" makes "<<portions<<" portions"<<endl;
    return portions;
}

int Chef::makeSoup(int ainekset)
{
    int portions=ainekset/3;
    cout <<"chef "<< chefName <<"with " << ainekset<<" items "<<"makes "<<portions<<" portions "<<endl;
    cout << " "<< endl;
    return portions;
}

