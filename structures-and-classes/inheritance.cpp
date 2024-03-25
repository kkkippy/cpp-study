/*
Herança é o conceito de derivar novas classes de classes existentes, o que permite
a reutilização e a organização do código
Em C++, a herança é obtida com o uso de dois pontos ':' (colon) seguido do
especificador de acesso da classe base e do nome da classe base
Por exemplo:
*/

#include <iostream>

class Animal
{
    public:
        void breathe ()
        {
            std::cout << "* breathe *" << std::endl;
        }
};

class Dog : public Animal
{
    public:
        void bark ()
        {
            std::cout << "Dog barks!" << std::endl;
        }
};

/*
Neste exemplo, a classe 'Dog' herda da classe 'Animal', portanto, a classe 'Dog'
pode acessar a função 'breathe' da classe 'Animal'
Ao criar um objeto 'Dog', você pode usar as funções 'breathe' e 'bark'
*/

int main ()
{

    Dog myDog;
    myDog.breathe(); // Output: * breathe *
    myDog.bark(); // Output: Dog barks!

    return 0;
}