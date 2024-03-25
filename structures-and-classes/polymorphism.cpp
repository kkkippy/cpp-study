/*
O polimorfismo permite que você use uma única interface para representar tipos
diferentes
Em C++, ele é obtido principalmente por meio de function overloading, virtual
functions, e overriding
Por exemplo:
*/

#include <iostream>

class Animal
{
    public:
        virtual void makeSound ()
        {
            std::cout << "The Animal makes a sound" << std::endl;
        }
};

class Dog : public Animal
{
    public:
        void makeSound () override
        {
            std::cout << "Dog barks!" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        void makeSound () override
        {
            std::cout << "Cat meows!" << std::endl;
        }
};

/*
Neste exemplo, temos uma classe base 'Animal' com uma função virtual 'makeSound'
Em seguida, derivamos duas classes, 'Dog' e 'Cat', que substituem a função
'makeSound'
Isso permite um comportamento polimórfico, em que um ponteiro ou referência de
'Animal' pode ser usado para acessar a função 'makeSound' correta, dependendo
do tipo da classe derivada
*/

int main ()
{
    Animal *animals[2] = { new Dog, new Cat };

    animals[0] -> makeSound(); // Output: Dog barks!
    animals[1] -> makeSound(); // Output: Cat meows!

    return 0;
}