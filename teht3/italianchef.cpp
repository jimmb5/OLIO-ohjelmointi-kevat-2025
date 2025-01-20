#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name){
    password = "pizza";
    cout << getName()<<" konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "" << getName() << " destruktori" << endl;
}

bool ItalianChef::askSecret(string guess, int flour, int water)
{
    if (guess==password){
        cout<<"password is ok"<< endl;
        this->makePizza(flour, water);
        return true;
    }
    else{
        return false;
    }
}

int ItalianChef::makePizza(int flour , int water)
{
    int portions;
    if(flour<water){
        portions=flour /5;
    }
    else{
        portions = water/5;
    }
    cout <<"chef "<< chefName <<" with " <<flour<<" flour "<<"and "<<water<<" water "<<"makes "<<portions<<" pizza"<<endl;
    cout << " " << endl;
    return portions;
}
