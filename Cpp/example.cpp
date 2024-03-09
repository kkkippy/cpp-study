#include <iostream>

// Uma simples função para somar dois números
int add (int a, int b) {
    return a + b;
}

class Calculator {
public:
    // Uma função membro para multiplicar dois números
    int multiply (int a, int b) {
        return a * b;
    }
};

int main () {
    int x = 5;
    int y = 3;

    // Usando a função autônoma 'add'
    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    // Usando uma classe e uma função de membro
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << std::endl;

    return 0;
}