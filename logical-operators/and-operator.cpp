#include <iostream>

int main () {
    

    // Operador AND (&&)
    /*
    O operador AND verifica se ambos os operandos são verdadeiros,
    se qualquer uma das condições for falsa, a expressão inteira será falsa
    */
    // (expression1 && expression2)

    /*
    Os operadores lógicos são usados para executar operações lógicas nas
    expressões fornecidas, principalmente para testar a relação entre diferentes
    variáveis ou valores.

    Eles retornam um valor booleano, ou seja, verdadeiro (1) ou falso (0),
    com base no resultado da avaliação.
    */
    
    int a = 5, b = 10; // Inicialização de duas variáveis inteiras em uma linha

    if (a > 0 && b > 0) {
        std::cout << "Ambos os valores são positivos" << std::endl;
    }
}