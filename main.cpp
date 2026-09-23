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
    // char single_char;
    // std::cin >> single_char;
    //
    // switch (single_char) {
    //     case 'z':
    //         std::println("Avancer");
    //         break;
    //     case 's':
    //         std::println("Reculer");
    //         break;
    //     case 'a': // ma configuration clavier proposerait le 'a' pour la gauche
    //     case 'q': // mais comme ca, on a le 'q' aussi
    //         std::println("Gauche");
    //         break;
    //         case 'd':
    //         std::println("Droite");
    //         break;
    //     default:
    //         std::println("Touche inconnue");
    //         break;
    // }

    // Exercice 1.5 -----
    // int rebours = 10;
    // while (rebours >= 0) {
    //     std::println("{}", rebours);
    //     rebours = rebours - 1;
    // }
    // std::println("Decollage");

    // Exercice 1.6 -----
    // int choix = 0;
    // do {
    //     std::println("Choisissez entre 1 et 3 :");
    //     std::cin >> choix;
    // } while (choix > 3 || choix < 1);
    // std::println("Merci");

    // Exercice 1.7 ----
    // for (int i = 1; i <= 10; i++) {
    //     std::println("7 x {0} = {1}", i, i * 7);
    // }
    // for (int i = 10; i >= 1; i--) {
    //     std::println("7 x {0} = {1}", i, i * 7);
    // }

    // Exercice 1.8 -----
    // std::println(" ----- LOOP: 1-100 but i hate multiples of 17 ----");
    // for (int i = 1; i <= 100; i++) {
    //     std::println("number {}", i);
    //     if ((i % 17 == 0)) {
    //         std::println("A MULTIPLE OF 17 WAS DETECTED, DESTROY EVERYTHING!!!!");
    //         break;
    //     }
    // }
    // std::println(" ----- LOOP: 1-30 but i don't tolerate multiples of 3 ----");
    // for (int i = 1; i <= 30; i++) {
    //     if ((i % 3 == 0)) {
    //         continue;
    //     }
    //     std::println("number {}", i);
    // }

    // Exercice 1.9 -----
    for (int i = 1; i <= 30; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) {
            std::println("FizzBuzz");
        } else if ((i % 3 == 0)) {
            std::println("Fizz");
        } else if ((i % 5 == 0)) {
            std::println("Buzz");
        } else {
            std::println("{}", i);
        }
    }




    return 0;
}
