/*
Estruturas e classes são tipos de dados definidos pelo usuário em C++
que permitem o agrupamento de variáveis de diferentes tipos de dados sob
um único nome
Eles facilitam o gerenciamento e a organização de dados complexos, criando
objetos que têm atributos e comportamentos específicos
A principal diferença entre uma estrutura e uma classe é o especificador
de acesso padrão: os membros de uma estrutura são públicos por padrão,
enquanto os membros de uma classe são privados
*/

// Structures
/*
Uma estrutura é definida com a keyword 'struct', seguida do nome da estrutura e
de um conjunto de chaves '{}' envolvendo os membros (variáveis e/ou funções) da
estrutura
Os membros podem ser de diferentes tipos de dados
Para criar um objeto do tipo da estrutura, use o nome da estrutura seguido
do nome do objeto

Aqui está um exemplo de definição de uma estrutura e criação de um objeto:
*/

#include <iostream>

struct Employee
{
    int id;
    std::string name;
    float salary;
};

Employee e1; // Cria um objeto para a estrutura 'Employee'

int main ()
{
    // Você pode acessar os membros de uma estrutura usando o operador de ponto '.'

    e1.id = 1;
    e1.name = "Kippy";
    e1.salary = 40000;

    return 0;
}