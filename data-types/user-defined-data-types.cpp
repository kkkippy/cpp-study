#include <iostream>

/*
Os tipos de dados definidos pelo usuário são tipos definidos pelo
programador, como estruturas, classes e uniões
*/

int main () {
    
    // Structures (struct)
    /*
    As estruturas são usadas para armazenar diferentes tipos de dados em uma
    única variável e o acesso às variáveis e aos métodos dos membros é público
    */

    struct Person1 {
        std::string name;
        int age;
        float height;
    };

    Person1 p1 = { "Kippy", 16, 1.70 };

    // Classes (class)
    /*
    As classes são semelhantes às estruturas, mas a acessibilidade dos dados
    e das funções dos membros é controlada por especificadores de acesso
    Por padrão, o acesso aos membros de uma classe é privado
    */

    class Person2 {
        public:
            std::string name;
            int age;

            void printInfo () {
                std::cout << "Name: " << name << ", Age: " << age << std::endl;
            };
    };

    Person2 p2;
    p2.name = "Kippy";
    p2.age = 16;


    // Unions (union)
    /*
    As uniões são usadas para armazenar diferentes tipos de dados no mesmo local
    da memória
    */

    union Data {
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;

    return 0;
}