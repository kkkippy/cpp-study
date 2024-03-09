#include <iostream>

// Operadores aritméticos (+, -, *, /, %, ++, --)

int main () {
    int a = 10;
    int b = 5;

    // 1. Operador de adição
    int sum = a + b;
    // Soma os operandos

    // 2. Operador de subtração
    int differente = a - b;
    // Subtrai os operandos
    
    // 3. Operador de multiplicação
    int product = a * b;
    // Multiplica os operandos

    // 4. Operador de divisão
    int quotient = a / b;
    // Divide os operandos
    // Divisão de números inteiros

    /*
    Ele divide um número por outro. Observe que, se ambos os operandos
    forem números inteiros, ele executará a divisão inteira e o
    resultado será um número inteiro
    */

    float quotient = float(a) / float(b);
    // Divisão de ponto flutuante (representação de números racionais em forma decimal)

    // 5. Operador de módulo
    int remainder = a % b;
    // Calcula o restante de uma divisão de números inteiros

    // 6. Operador de incremento
    int x = 5;
    int y = ++x; // x = 6, y = 6
    int z = x++; // x = 7, z = 6

    /*
    O operador de incremento quando utilizado ANTES do
    operando tem o efeito de pré-incremento, enquanto
    DEPOIS do operando tem o efeito de pós-incremento
    */

    // 7. Operador de decremento
    int i = 5;
    int j = --i; // i = 4, j = 4
    int k = i--; // i = 3, k = 4

    /*
    Quanto ao decremento, a regra é a mesma em relação
    ao operador de incremento
    */

    return 0;
}