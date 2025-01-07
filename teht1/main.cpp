#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game (int maxnum){
    std::srand(static_cast<unsigned int>(std::time(0))); // netistä katsottu, ilman tätä arpoo aina saman numeron
    int satunnaisluku = std::rand() % maxnum + 1;
    int arvaus;
    bool endgame = false;
    int arvaukset = 0;

    while(endgame==false){
        std:: cout <<"Arvaa luku: " << endl;
        std:: cin >> arvaus;
        arvaukset++;

        if (arvaus < satunnaisluku){
            std::cout << "luku on suurempi" << endl;
        }
        else if (arvaus > satunnaisluku){
            std::cout << "luku on pienempi" << endl;

        }
        else if (arvaus == satunnaisluku){
            std::cout << "oikein" << endl;
            std::cout << "arvausten lkm: " << arvaukset <<  endl;

            endgame=true;
        }
    }
    return arvaukset;
}


int main()
{
    int maxnum;
    std::cout << "syota max luku: " << endl;
    std::cin >> maxnum;

    int arvaukset = game(maxnum);

    std::cout << "Peli paattyi, arvaukset: " << arvaukset << endl;
    return 0;
}

