/*
A programação orientada a objetos (OOP) é um paradigma de programação que usa
objetos, que são instâncias de classes, para realizar operações e interagir
entre si
Em C++, você pode realizar a OOP por meio do uso de classes e objetos
*/

// Classes
/*
Uma classe é um modeo para a criação de objetos
Ela define a estrutura (dados membro) e comportamento (funções membro) de
um tipo de objeto
Veja a seguir um exemplo de uma classe simples:
*/

#include <iostream>

class Dog
{
    public:
        std::string name;
        int age;

        void bark ()
        {
            std::cout << name << " barks!" << std::endl;
        }
};

/*
Essa classe 'Dog' tem dois membros de dados: 'name' e 'age', e uma função membro
'bark'
Você pode criar um objeto dessa classe e acessar seus membros da seguinte forma:
*/

int main ()
{
    Dog myDog;
    myDog.name = "Fido";
    myDog.age = 3;
    myDog.bark();

    return 0;
}