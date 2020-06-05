#include <iostream>
#include <time.h>

int main()
{
    int startgame;
    std::cout << "Would you like to play Cho-Han? (0 = no, 1 = yes)\n";
    std::cin >> startgame;

    if (startgame == 0) {
        std::cout << "Weak minded fool.\n";
    }
    else {
        while(startgame == 1) {
        int bet;
        std::cout << "Place your bet. Evens (Press 0) or odds (Press 1)?\n";
        std::cin >> bet;
        srand(time(NULL));
        int roll = rand() % 12 + 1;
        std::cout << "The roll was " << roll << "\n";

        if (roll == 1 || roll == 3 || roll == 5 || roll == 7 || roll == 9 || roll == 11) {
            if (bet == 0) {
                std::cout << "You lost.\n";
            }
            else {
                std::cout << "You won.\n";
            }
        }
        else {
            if (bet == 0) {
                std::cout << "You won.\n";
            }
            else {
                std::cout << "You lost.\n";
            }
        }
        std::cout << "Would you like to play again? (0 = no, 1 = yes)\n";
        std::cin >> startgame;
    }
}
}
