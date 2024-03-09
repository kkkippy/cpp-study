#include <iostream>

int main () {
    
    /*
    É executado pelo menos uma vez, mesmo quando a condição é falsa

    do {
        -> bloco de código para executar
    } while (condition);
    */

    int i = 0;

    do {
        std::cout << "Iteração: " << i << std::endl;
        i++;
    } while (i < 5);

    return 0;
}