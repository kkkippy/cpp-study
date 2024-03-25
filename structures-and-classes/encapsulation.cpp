/*
Encapsulamento é o conceito de agrupar dados e funções que operam com esses dados em
uma única unidade, como uma classe
Ele ajuda a ocultar os detalhes da implementação interna de uma classe e a expor
somente as informações e as funcionalidades necessárias
Em C++, é possível usar especificadores de acesso como 'public', 'private' e
'protected' para controlar a visibilidade e a acessibilidade dos membros da classe
Por exemplo:
*/

#include <iostream>

class Dog
{
    private:
        std::string name;
        int age;

    public:
        void setName (std::string n)
        {
            name = n;
        }

        void setAge (int a)
        {
            age = a;
        }

        void bark ()
        {
            std::cout << name << " barks!" << std::endl;
        }
};

/*
Neste exemplo, tornamos privados os dados membros 'name' e 'age' e adicionamos
as funções de membro público 'setName' e 'setAge' para modificá-los
Dessa forma, os dados internos da classe 'Dog' são protegidos e só podem ser
acessados por meio das funções fornecidas
*/