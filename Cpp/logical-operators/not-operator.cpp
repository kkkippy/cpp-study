#include <iostream>

int main () {

    // Operador NOT (!)
    /*
    O operador NOT inverte o resultado da expressão à qual é aplicado,
    se a condição for verdadeira, o operador tornará em falsa,
    se for falsa, a condição será verdadeira.
    */

    int a = 5;

    if (!(a < 0)) {
        std::cout << "O valor não é negativo" << std::endl;
    }
}