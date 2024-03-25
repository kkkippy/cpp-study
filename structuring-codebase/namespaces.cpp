/*
Em C++, um namespace é um escopo ou contêiner nomeado que é usado para organizar
e incluir uma coleção de elementos de código, como variáveis funções, classes e
outros namespaces
Eles são usados principalmente para dividir e gerenciar a base de código, dando
aos desenvolvedores controle sobre colisões de nomes e a especialização do
código
*/

// 1. Syntax
namespace identifier
{
    // Elementos de código
}


// 2. Usando Namespaces
/*
Para acessar elementos dentro de um namespace, você pode usar o operador de
resolução de escopo '::'
*/

// Aqui estão alguns exemplos:

#include <iostream>

namespace animals
{
    std::string dog = "Dori";
    std::string cat = "Jobisvaldo";
}

// int main ()
// {
//     std::cout << "Nome da cachorra: " << animals::dog << std::endl;
//     std::cout << "Nome do gato: " << animals::cat << std::endl;

//     return 0;
// }


// 3. Aninhamento de namespaces
/*
Os namespaces podem ser aninhados em outros namespaces
*/

// namespace outer
// {
//     int x = 10;

//     namespace inner
//     {
//         int y = 20;
//     }
// }

// int main ()
// {
//     std::cout << "Exterior x: " << outer::x << std::endl;
//     std::cout << "Interior y: " << outer::inner::y << std::endl;

//     return 0;
// }


// 4. 'using' Keyword
/*
Você pode usar a keyword 'using' para importar elementos de namespaces
para o escopo atual
No entanto, isso pode levar a conflitos de nomes se vários namespaces
tiverem elementos com o mesmo nome
*/

// Uso de um único elemento de um namespace

// int main ()
// {
//     using animals::dog;

//     std::cout << "Nome da cachorra: " << dog << std::endl;

//     return 0;
// }

// Usando o namespace inteiro

int main ()
{
    using namespace animals;

    std::cout << "Nome da cachorra: " << dog << std::endl;
    std::cout << "Nome do gato: " << cat << std::endl;

    return 0;
}

/*
Em suma, os namespaces são um mecanismo útil no C++ para organizar o código, evitar
conflitos de nomes e gerenciar a visibilidade dos elementos do código
*/