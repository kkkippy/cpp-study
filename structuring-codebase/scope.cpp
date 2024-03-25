/*
O escopo refere-se à visibilidade e à acessibilidade de variáveis, funções,
classes e outros identificadores em um programa C++
Ele determina o tempo de vida e a extensão desses identificadores
Em C++, há quatro tipos de escopo:
*/

// 1. Escopo global
/*
Os identificadores declarados fora de qualquer função ou classe têm um escopo global
Eles podem ser acessados de qualquer parte do programa (a menos que estejam ocultos
por um identificador local com o mesmo nome)
O tempo de vida de um identificador global é a duração total do programa
*/

// #include <iostream>

// int globalVar; // Essa é uma variável global

// int main ()
// {
//     std::cout << "Variável global: " << globalVar << std::endl;

//     return 0;
// }


// 2. Escopo local
/*
Os identificadores declarados em uma função ou em um bloco têm um escopo local
Eles podem ser acessados somente dentro da função ou do bloco em que foram
declarados
Sua vida útil é limitada à duração da execução da função/bloco
*/

// #include <iostream>

// void localExample ()
// {
//     int localVar; // Essa é uma variável local
//     localVar = 5;
//     std::cout << "Variável local: " << localVar << std::endl;
// }

// int main ()
// {
//     localExample();

//     // std::cout << localVar << std::endl;
//     /*
//     A linha acima daria erro, pois 'localVar' não foi declarado no escopo da função
//     principal, apenas dentro da função 'localExample()'
//     */

//     return 0;
// }


// 3. Escopo de namespace
/*
Um namespace é um escopo nomeado que agrupa identificadores relacionados
Os identificadores declarados em um namespace têm o escopo do namespace
Eles podem ser acessados usando o nome do namespace e o operadores de resolução de
escopo '::'
*/

// #include <iostream>

// namespace MyNamespace
// {
//     int namespaceVar = 42;
// }

// int main () {
//     std::cout << "Variável namespace: " << MyNamespace::namespaceVar << std::endl;

//     return 0;
// }


// 4. Escopo de classe
/*
Os identificadores declarados em uma classe têm um escopo de classe
Eles podem ser acessados usando o nome da classe e o operador de resolução de escopo
'::' ou, para membros não estáticos, um objeto da classe e o operador ponto '.' ou
seja '->'
*/

#include <iostream>

class MyClass
{
    public:
        static int staticMember;
        int nonStaticMember;

        MyClass (int value) : nonStaticMember(value) {}
};

int main ()
{
    MyClass obj(10);

    std::cout << "Membro estático: " << MyClass::staticMember << std::endl;
    std::cout << "Membro não-estático: " << obj.nonStaticMember << std::endl;

    /*
    Compreender os vários tipos de escopo em C++ é essencial para a estruturação
    eficaz do código e o gerenciamento de recursos em uma base de código
    */

    return 0;
}