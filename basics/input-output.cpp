#include <iostream>

/*
Usamos std::cin para entrada
e std::cout para saída
*/

int main () {
    int number;

    std::cout << "Insira um número: ";
    std::cin >> number;
    std::cout << "Você digitou: " << number << std::endl;

    return 0;
}