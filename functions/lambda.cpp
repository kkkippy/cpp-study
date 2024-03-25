#include <iostream>

/*
Uma função lambda, ou simplesmente "lambda", é uma função anônima (unnamed/sem nome)
definida no local, dentro do seu código-fonte e com uma sintaxe concisa
As funções lambda foram introduzidas no C++11 e, desde então, tornaram-se um
recurso amplamente utilizado, especialmente em combinação com os algoritmos
da Standard Library
*/

/*
Sintaxe:

[capture-list](parameters) -> return_type {
    -> corpo da função
}

Onde:
`capture-list`: Uma lista de variáveis que cerca o escopo que
a função lamba pode acessar

`parameters`: Uma lista de parâmetros de entrada, assim como em uma função
normal. Opcional

`return_type`: O tipo de valor que a função lambda retornará. Essa parte
é opcional, e o compilador pode deduzi-la em muitos casos

`corpo da função`: O código que define a operação da função lambda
*/

int main () {
    // Função lambda sem captura, parâmetros ou tipo de retorno
    auto printHello = [] () {
        std::cout << "Hello, World!" << std::endl;
    };

    printHello();

    // Função lambda com parâmetros
    auto add = [] (int a, int b) {
        return a + b;
    };

    int r1 = add(3, 4); // resultado = 7

    // Função lambda com captura por valor.
    int multiplier = 3;

    auto times = [multiplier] (int a) {
        return a * multiplier;
    };

    int r2 = times(5);

    // Função lambda com captura por referência.
    int expiresInDays = 45;

    auto updateDays = [&expiresInDays] (int newDays) {
        // TODO: Entender o que é capture-by-reference
        expiresInDays = newDays;
    };

    updateDays(30); // expiresInDays = 30

    return 0;
}