#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    ~Notifikaattori();
    void lisaa(Seuraaja * uusi);
    void poista(Seuraaja * poista);
    void tulosta();
    void postita(string);
private:
    Seuraaja * seuraajat;// = nullptr;
};

#endif // NOTIFIKAATTORI_H
