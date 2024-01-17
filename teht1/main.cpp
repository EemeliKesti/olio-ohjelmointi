#include <iostream>
#include <cstdlib>
#include <ctime>

int arvauspeli() {
    int parametri;

    std::cout << "Parametri: ";
    std::cin >> parametri;

    int maxnum = 0;
    int randomnumber = (std::rand() % parametri) + 1;
    int guess;

    while (true) {
        std::cout << "Arvaus: ";
        std::cin >> guess;
        maxnum++;

        if (guess < randomnumber) {
            std::cout << "Luku on suurempi" << std::endl;
        } else if (guess > randomnumber) {
            std::cout << "Luku on pienempi" << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
            return maxnum; // Return the number of guesses and exit the function
        }
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int guesses = arvauspeli();

    std::cout << "Arvauksia tarvittiin: " << guesses << std::endl;

    return 0;
}
