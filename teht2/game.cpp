#include "game.h"

Game::Game() {


    cout << "syota max luku: " << endl;
    cin >> maxNumber;
    srand(time(0));
    randomNumber = rand() % maxNumber +1;


}

Game::~Game()
{

}

void Game::play()
{
    bool gameOn=true;
    while(gameOn){
        std:: cout <<"Arvaa luku: " << endl;
        std:: cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber){
            std::cout << "luku on suurempi" << endl;
        }
        else if (playerGuess > randomNumber){
            std::cout << "luku on pienempi" << endl;

        }
        else if (playerGuess == randomNumber){
            gameOn=false;
            printGameResult();

        }
    }
}
void Game::printGameResult()
{
    cout<<playerGuess<<" on oikein" << endl;
    cout <<"arvausten lkm: "<< numOfGuesses<< endl;
}
