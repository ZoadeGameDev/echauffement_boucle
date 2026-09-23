#include <iostream>
#include <print>

int main() {

    // Exercice 1.1 ------
    // int pv = 42;
    // if (pv <= 0) {
    //     std::println("Game Over");
    // }

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
    // int character_hp = 0;
    // if (character_hp <= 0) {
    //     std::println("Mort");
    // } else if (character_hp <= 40 ){
    //     std::println("Critique");
    // } else if (character_hp <= 75 ) {
    //     std::println("Egratigne");
    // } else {
    //     std::println("Intact");
    // }

    // Exercice 1.4 -----
    char single_char;
    std::cin >> single_char;

    switch (single_char) {
        case 'z':
            std::println("Avancer");
            break;
        case 's':
            std::println("Reculer");
            break;
        case 'a': // ma configuration clavier proposerait le 'a' pour la gauche
        case 'q': // mais comme ca, on a le 'q' aussi
            std::println("Gauche");
            break;
            case 'd':
            std::println("Droite");
            break;
        default:
            std::println("Touche inconnue");
            break;

    }


    return 0;
}
