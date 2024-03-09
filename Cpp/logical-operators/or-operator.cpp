#include <iostream>

int main () {

    // Operador OR (||)
    /*
    O operador OR verifica se um dos operandos é verdadeiro,
    se ambas as condições forem falsa, a expressão será falsa,
    mas se apenas um for verdadeiro, a expressão será verdadeira
    */
    // (expression1 || expression2)
    
    int a = 5, b = -10; // Inicialização de duas variáveis inteiras

    if (a > 0 || b > 0) {
        std::cout << "Pelo menos um valor é positivo" << std::endl;
    }
}