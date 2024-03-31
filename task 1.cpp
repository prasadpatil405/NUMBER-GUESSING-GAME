#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Guess the secret number between 1 and 100: ";
    while (true) {
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the secret number in " << attempts << " attempts." << std::endl;
            break;
        }
    }
}