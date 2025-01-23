#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game() {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел
}

int Game::generateRandomNumber(int min, int max) {
    return min + (std::rand() % (max - min + 1));
}

std::string Game::checkGuess(int guess, int target) {
    if (guess < target) {
        return "Too low!";
    } else if (guess > target) {
        return "Too high!";
    } else {
        return "Correct!";
    }
}

void Game::play() {
    int min = 1, max = 100;
    int target = generateRandomNumber(min, max);
    int guess;
    std::string result;

    std::cout << "Welcome to Guess the Number!\n";
    std::cout << "I'm thinking of a number between " << min << " and " << max << ".\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        result = checkGuess(guess, target);
        std::cout << result << "\n";
    } while (result != "Correct!");

    std::cout << "Congratulations! You guessed the number.\n";
}