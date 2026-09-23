#include <iostream>
#include <print>

int main() {

    // Exercice 1.1 ------
    int pv = 42;
    if (pv <= 0) {
        std::println("Game Over");
    }

    // Exercice 1.2 -----
    int munitions = 7;
    do {
        std::println("munitions : {}",munitions);
        int evenOrOdd = munitions % 2;
        if (evenOrOdd == 0) {
            std::println("pair number of munitions");
        } else {
            std::println("odd number of munitions");
        }

        munitions = munitions - 1;

    } while (munitions > 0);

    return 0;
}
