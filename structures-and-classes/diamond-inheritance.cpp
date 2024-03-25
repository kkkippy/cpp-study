/*
A herança diamante é um cenário específico na herança múltipla em que uma classe é
derivada de duas ou mais classes que, por sua vez, são derivadas de uma classe base
em comum
Ela cria uma ambiguidade que surge da duplicação da classe de base em comum, o que leva
a um comportamento ambíguo ao chamar os membros duplicados

Para resolver essa ambiguidade, você pode usar a herança virtual
Uma classe base virtual é uma classe que é compartilhada por várias classes usando a
keyword 'virtual' em C++
Isso garante que apenas uma cópia da classe base seja herdada na classe derivada final e,
portanto, resolve o problema da herança diamante
*/

// Exemplo:
#include <iostream>

class Base
{
public:
    void print ()
    {
        std::cout << "Classe base" << std::endl;
    }
};

class Derived1 : virtual public Base
{
public:
    void derived1Print ()
    {
        std::cout << "Classe Derived1" << std::endl;
    }
};

class Derived2 : virtual public Base
{
public:
    void derived2Print ()
    {
        std::cout << "Classe Derived2" << std::endl;
    }
};

class Derived3 : public Derived1, public Derived2
{
public:
    void derived3Print ()
    {
        std::cout << "Classe Derived3" << std::endl;
    }
};

int main ()
{
    Derived3 d3;

    d3.print();
    d3.derived1Print();
    d3.derived2Print();
    d3.derived3Print();

    return 0;
}

/*
No código acima, 'Derived1' e 'Derived2' são derivados da classe 'Base' usando herança
virtual
Portanto, quando criamos um objeto de 'Derived3' e chamamos a função 'print()' da classe
'Base', não há ambiguidade e o código é executado sem problemas
*/