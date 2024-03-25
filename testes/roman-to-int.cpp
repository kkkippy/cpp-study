#include <iostream>

int romanToInt (const std::string& str) {

}

int main () {

    std::string roman;

    std::cout << "Digite um número romano: ";
    
    std::cin >> roman;
    
    std::cout << "O número inteiro é: " << romanToInt(roman) << std::endl;

    return 0;
}