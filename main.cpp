#include <iostream>
#include <print>

int main() {

    // Exercice 1.1 ------
    int pv = 42;
    if (pv <= 0) {
        std::println("Game Over");
    }

    // Exercice 1.2 -----
    // int munitions = 7;
    // do {
    //     std::println("munitions : {}",munitions);
    //     int evenOrOdd = munitions % 2;
    //     if (evenOrOdd == 0) {
    //         std::println("pair number of munitions");
    //     } else {
    //         std::println("odd number of munitions");
    //     }
    //
    //     munitions = munitions - 1;
    //
    // } while (munitions > 0);

    // Exercice 1.3 -----
    int character_hp = 0;
    if (character_hp <= 0) {
        std::println("Mort");
    } else if (character_hp <= 40 ){
        std::println("Critique");
    } else if (character_hp <= 75 ) {
        std::println("Egratigne");
    } else {
        std::println("Intact");
    }

    return 0;
}
