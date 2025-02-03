#include "notifikaattori.h"
#include <iostream>
Notifikaattori::Notifikaattori() : seuraajat(nullptr) {
    cout << "Luodaan notifikaattori" << endl;
}

Notifikaattori::~Notifikaattori()
{

}

void Notifikaattori::lisaa(Seuraaja *uusi)
{
    cout << "Notifikaattori lisaa seuraajan " << uusi->getNimi() << endl;
    uusi->next=seuraajat;
    seuraajat = uusi;

}

void Notifikaattori::poista(Seuraaja *poistettava) {
    cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;


    if (seuraajat == poistettava) {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr && nykyinen->next != poistettava) {
        nykyinen = nykyinen->next;
    }

    if (nykyinen != nullptr) {
        nykyinen->next = nykyinen->next->next;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja* nykyinen = seuraajat;
    while(nykyinen!=nullptr){
        cout <<"Seuraaja "<< nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postaa viestin " << viesti << endl;
    Seuraaja* nykyinen = seuraajat;
    while(nykyinen!=nullptr){
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
