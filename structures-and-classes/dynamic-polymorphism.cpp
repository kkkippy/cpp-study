/*
O polimorfismo dinâmico é um conceito de programação em linguagens orientadas a
objetos, como o C++, em que uma classe derivada pode substituir ou redefinir métodos
de sua classe base
Isso significa que uma única chamada de método pode ter implementações diferentes
com base no tipo de objeto em que é chamada

O polimorfismo dinâmico é obtido por meio de *funções virtuais*, que são funções
de membro de uma classe base marcada com a keyword 'virtual'
Quando você especifica uma função virtual em uma classe de base, ela pode ser
substituída em qualquer classe derivada para fornecer uma implementação diferente
*/

#include <iostream>

// Classe base
class Shape
{
public:
    virtual void draw ()
    {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// Classe derivada 1
class Circle : public Shape
{
public:
    void draw () override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Classe derivada 2
class Rectangle : public Shape
{
public:
    void draw () override
    {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main ()
{
    Shape* shape;
    Circle circle;
    Rectangle rectangle;

    // Armazenando o endereço de circle
    shape = &circle;

    // Chama a função de desenho de círculo
    shape -> draw();

    // Armazenando o endereço de rectangle
    shape = &rectangle;

    // Chama a função de desenho de rectângulo
    shape -> draw();

    return 0;
}

/*
Este código define uma classe base 'Shape' com uma função virtual 'draw'
Duas classes derivadas, 'Circle' e 'Rectangle', substituem a função 'draw' para
fornecer suas próprias implementações
Em seguida, na função principal, um ponteiro do tipo 'Shape' é usado para chamar
as respectivas funções de desenhos dos objetos 'Circle' e 'Rectangle'

Como você pode ver, usando o polimorfismo dinâmico, podemos determinar em tempo
de execução qual método de desenho deve ser chamado com base no tipo de objeto
que está sendo usado
*/

// O que entendi
/*
Funções virtuais são funções que podem ser substituídas quando herdadas
*/