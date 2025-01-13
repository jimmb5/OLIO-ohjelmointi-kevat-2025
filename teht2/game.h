#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game
{
public:
    Game();
    Game(int randomNumber);
    ~Game();
    void play();


private:
    void printGameResult();
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses = 0;
};

#endif // GAME_H
