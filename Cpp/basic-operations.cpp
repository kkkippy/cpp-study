#include <iostream>

int main () {
    int a = 5;
    int b = 6;

    int sum = a + b; // Adição/Soma
    int diff = a - b; // Subtração/Diferença
    int product = a * b; // Multiplicação/Produto
    int quotient = a / b; // Divisão/Quociente
    int remainder = a % b; // Módulo/Restante

    std::cout << "A soma entre 5 e 6 é igual a " << sum << std::endl;
    std::cout << "A subtração entre 5 e 6 é igual a " << diff << std::endl;
    std::cout << "A multiplicação entre 5 e 6 é igual a " << product << std::endl;
    std::cout << "A divisão entre 5 e 6 é igual a " << quotient << std::endl; // TODO: type casting
    std::cout << "O módulo entre 5 e 6 é igual a " << remainder << std::endl;

    return 0;
}