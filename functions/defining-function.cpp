#include <iostream>

/*
Uma função é um grupo de instruções que executam uma
tarefa específica, organizada como uma unidade separada
em um programa. As funções ajudam a dividir o código
em blocos menores, gerenciáveis e reutilizáveis

Há principalmente dois tipos de funções em C++:
Funções da standard library
Funções definidas pelo usuário
*/

/*
Definindo uma função

O formato geral para definir uma função em C++ é:

return_type function_name (parameter list) {

}

Onde:
`return_type`: Tipo de dado de saída produzido pela função.
Também pode ser `void`, indicando que essa função retorna nenhum valor

`function_name`: É o nome dado à função, seguindo as convenções
de nomenclatura do C++.

`parameter list`: Lista de parâmetros/argumentos de entrada que são necessários
para realizar a tarefa. É opcional e, quando não forem necessários parâmetros,
você pode deixar em branco ou usar a palavra-chave `void`.
*/

// Exemplo:
int addNumbers (int a, int b) {
    int sum = a + b;

    return sum;
}

int main () {
    
    int num1 = 5, num2 = 10;

    int result = addNumbers(num1, num2); // Chamando a função

    std::cout << "A soma entre " << num1 << " e " << num2 << " resulta em " << result << std::endl;

    return 0;
}