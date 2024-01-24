
#ifndef teht2_H
#define teht2_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
public:
    Game(int maxNumber) : maxNumber(maxNumber), numOfGuesses(0) {
        std::cout << "Game constructor: Maximum value set to " << maxNumber << std::endl;
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        randomNumber = (std::rand() % maxNumber) + 1;
    }

    ~Game() {
        std::cout << "GAME DESTRUCTOR: Object cleared from stack memory" << std::endl;
    }

    void play() {
        while (true) {
            std::cout << "Arvaus: ";
            std::cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess < randomNumber) {
                std::cout << "Your guess is between 1-" << maxNumber << std::endl;
                std::cout << "Luku on suurempi" << std::endl;
            } else if (playerGuess > randomNumber) {
                std::cout << "Your guess is between 1-" << maxNumber << std::endl;
                std::cout << "Luku on pienempi" << std::endl;
            } else {
                std::cout << "Your guess is between 1-" << maxNumber << std::endl;
                std::cout << "Oikea vastaus!" << std::endl;
                printGameResult();
                break;
            }
        }
    }

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult() {
        std::cout << "Arvauksia tarvittiin: " << numOfGuesses << std::endl;
    }
};

#endif
