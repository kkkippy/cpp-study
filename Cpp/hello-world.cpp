#include <iostream> // Header files (https://en.cppreference.com/w/cpp/preprocessor)

int main () {
    /*
    A função main() serve como ponto de entrada do programa.
    Deve ser definida apenas uma vez e deve retornar um número inteiro.
    */


   // Output to the Console (saída para o console)

   // std::cout       == o fluxo padrão de "saída de caracteres" que grava no console
   // <<              == operador de inserção
   // "Hello, World!" == string literal a ser printada
   // std::endl       == insere um caractere de nova linha e libera o buffer de saída

    std::cout << "Hello, World!" << std::endl;

    // return 0 == informa ao sistema operacional que o programa foi executado com sucesso
    // retornando outro valor indicaria que ocorreu um erro.

    return 0;
}