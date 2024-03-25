/*
'auto' é uma keyword na linguagem C++ introduzida no C++11, que é usada para a dedução
automática de tipo
Ela deduz automaticamente o tipo de uma variável a partir do tipo de sua expressão
inicializadora em tempo de compilação

A keyword 'auto' é útil quando se está lidando com tipos complexos ou quando é difícil
prever o tipo de uma variável
Ela pode ajudar a escrever códigos mais limpos e menos propensos a erros

Este é um exemplo simples de uso de 'auto' para dedução de tipo:
*/

#include <iostream>
#include <vector>

int main ()
{
    // Maneira tradicional de declarar uma variável:
    int myInt = 5;

    // Usando 'auto' para dedução de tipo:
    auto myAutoInt = 5; // Deduz automaticamente o tipo como 'int'

    // Exemplo com tipos mais complexos:
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Sem 'auto', a iteração do vetor teria a seguinte aparência:
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // Com 'auto', a declaração de iteração se torna mais simples:
    for (auto it = myVector.begin(); it != myVector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    /*
    Lembre-se de que o 'auto' deduz o tipo com base na expressão do inicializador, portanto,
    se você não fornecer um valor inicial, receberá um erro de tempo de compilação:

    auto myVar; // Erro: Não é possível deduzir o tipo sem o inicializador
    */
}

/*
No C++14, você também pode usar 'auto' com tipos de retorno de função para permitir que o
compilador deduza automaticamente o tipo de retorno com base na expressão retornada:
*/

auto add (int a, int b)
{
    return a + b;
}
