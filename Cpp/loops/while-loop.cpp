#include <iostream>

int main () {

    /*
    while (condition) {
        -> bloco de código
    }
    */

    int i = 0;

    while (i < 5) {
        std::cout << "Iteração: " << i << std::endl;
        i++;
    }

    return 0;
}