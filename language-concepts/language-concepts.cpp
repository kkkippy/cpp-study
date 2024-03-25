/*
O C++ é uma linguagem de programação poderosa, de algo nível e orientada a objetos,
que oferece vários conceitos fundamentais de linguagem
Esses conceitos fornecem a base sobre a qual você pode criar programas eficientes,
confiáveis e de fácil manutenção

Veja a seguir um breve resumo de alguns conceitos importantes da linguagem C++
*/


#include <iostream>
#include <vector>

int add (int a, int b) // Função utilizada no terceiro conceito
{
    return a + b;
}

int main ()
{
    // 1. Variáveis e Tipos de Dados
    /*
    O C++ oferece váriost ipos de dados fundamentais, como 'int', 'float', 'double',
    'char' e 'bool', para declarar e manipular variáveis em um programa

    Por exemplo:
    */

    int age = 25;
    float height = 1.7f;
    double salary = 50000.0;
    char grade = 'A';
    bool isEmployed = true;

    
    // 2. Estruturas de Controle
    /*
    As estruturas de controle permitem controlar o fluxo de execução de um programa
    As principais estruturas de controle em C++ incluem:

    * Declaração condicional: 'if', 'else' e 'else if'
    * Construções de loop: 'for', 'while' e 'do-while'
    * Construções de switch-case

    Por exemplo:
    */

    // Declaração 'if-else'
    if (age > 18)
    {
        std::cout << "Você está qualificado para votar." << std::endl;
    } else
    {
        std::cout << "Você não está qualificado para votar" << std::endl;
    }

    // Loop 'for'
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Hello, World!" << std::endl;
    }


    // 3. Functions
    /*
    As funções em C++ permitem que você divida um programa grande em partes de
    código pequenas, gerenciáveis e reutilizáveis

    Por exemplo:
    */

    int sum = add(10, 20);
    std::cout << "A soma é: " << sum << std::endl;


    // 4. Arrays e Vetores
    /*
    Arrays e vetores são estruturas de dados comumente usadas para armazenar e
    manipular uma coleção de elementos do mesmo tipo de dado

    Por exemplo:
    */

    // Array
    int marks[] = {90, 80, 95, 85};

    // Vetor
    std::vector<int> scores = {10, 20, 30, 40};


    // 5. Ponteiros
    /*
    Os ponteiros são variáveis que armazenam endereços de memória de outras
    variáveis
    Elas permitem o manuseio mais eficiente da memória e são úteis para trabalhar
    com estruturas de dados dinâmicas

    Por exemplo:
    */

    int num = 10;
    int* p = &num; // 'p' armazena o endereço de memória de 'num'

    
    // 8. Tratamento de Exceções
    try
    {

    } catch (const std::exception &e)
    {
        std::cout << "Pegou uma exceção: " << e.what() << std::endl;
    }

    return 0;
}

// 6. Estruturas e Classes
/*
Estruturas e classes são tipos de dados definidos pelo usuário que permitem o
agrupamento de variáveis e funções com um único nome

Por exemplo:
*/

// Structure
struct Student
{
    std::string name;
    int age;
};

// Class
class Employee
{
    public:
        std::string name;
        int age;

        void displayInfo ()
        {
            std::cout << "Nome: " << name << "\nIdade: " << age << std::endl;
        }
};


// 7. Herança e Polimorfismo
/*
A herança é um mecanismo que permite que uma classe herde propriedades e métodos
de uma classe base
O polimorfismo permite que você use um tipo de classe base para representar
objetos de classes derivadas

Por exemplo:
*/

class Base
{
    public:
        void display ()
        {
            std::cout << "Essa é a classe base" << std::endl;
        }
};

class Derived : public Base
{
    public:
        void display ()
        {
            std::cout << "Essa é a classe derivada" << std::endl;
        }
};


// 8. Tratamento de Exceções
/*
O C++ fornece um mecanismo para tratar exceções (erros de tempo de execução) de
forma elegante usando as construções 'try', 'catch', e 'throw'

(foi feito dentro da função main)
*/

/*
Esses são alguns dos principais conceitos da linguagem em C++, que o ajudarão a
entender melhor a linguagem e desenvolver programas eficientes e de fácil
manutenção
*/
