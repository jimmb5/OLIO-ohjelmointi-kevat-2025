#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("leipuri hiiva ");
   // kokki.getName();

    kokki.makeSalad(10);
    kokki.makeSoup(5);

    ItalianChef italiankokki("mario");
    //kokki.getName();

    italiankokki.askSecret("pizza",12,17);
    return 0;
}
