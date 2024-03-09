#include <iostream>

int main () {
    // Inicialização de variável
    int x = 10;

    // Declaração if-else
    if (x == 10) {
        std::cout << "O valor de x é 10";
    } else {
        std::cout << "O valor de x NÃO é 10";
    }

    // While Loop
    while (x > 0) {
        x -= 1;
    }

    // For Loop
    for (int i = 0; i < 10; i++) {
        std::cout << i;
    }

    std::cout << x;

    // Switch Statement
    switch (x) {
        case 1:
            std::cout << "O valor de x é 1";
            break;

        case 2:
            std::cout << "O valor de x é 2";
            break;
        
        default:
            std::cout << "O valor de x não é 1 nem 2";

    }
}