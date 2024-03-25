/*
A herança múltipla é um recurso do C++ em que uma classe pode herdar características
(membros de dados e funções membros) de mais de uma classe pai
O conceito é semelhante ao da herança única (em que uma classe herda de uma única classe
base), mas na herança múltipla, uma classe pode ter várias classes de base

Quando uma classe herda várias classes de base, ela se torna uma mistura de suas
propriedades e comportamentos e pode substituí-las ou estendê-las conforme necessário
*/

// 1. Sintaxe
/*
class DerivedClasses : access-specifier BaseClass1, access-specifier BaseClass2, ...
{
    // Corpo da classe
}

A 'DerivedClass' herdará membros da 'BaseClass1' e da 'BaseClass2'
O especificador de acesso (como public, protected ou private) determina a acessibilidade
dos membros herdados
*/


// 2. Exemplo
/*
Aqui está um exemplo de herança múltipla em açaão:
*/

#include <iostream>

// Classe base 1
class Animal
{
public:
    void eat ()
    {
        std::cout << "Eu posso comer!" << std::endl;
    }
};

// Classe base 2
class Mammal
{
public:
    void breath ()
    {
        std::cout << "Eu posso respirar!" << std::endl;
    }
};

// Classe derivada que herda de 'Animal' e 'Mammal'
class Dog : public Animal, public Mammal
{
public:
    void bark ()
    {
        std::cout << "Eu posso latir! Au au!" << std::endl;
    }
};

int main ()
{
    Dog myDog;

    // Chamando os membros de ambas as classes base
    myDog.eat();
    myDog.breath();

    // Chamando o membro da classe derivada
    myDog.bark();

    return 0;
}

/*
Observe que em alguns casos, a herança múltipla pode levar a complicações como ambiguidade
e o "problema do diamante"
Certifique-se de usar a herança múltipla de forma criteriosa e de manter classes bem
estruturadas e modulares para evitar problemas

Para obter mais informações sobre herança múltipla em C++ e tópicos relacionados, consulte
a documentação do C++ ou um guia abrangente de programação em C++
*/