#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
public:
    Game();
    void play();

private:
    int generateRandomNumber(int min, int max);
    std::string checkGuess(int guess, int target);
};

#endif