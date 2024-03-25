/*
Uma classe é definida com a keyword 'class', seguida do nome da classe e de um
conjunto de chaves '{}' envolvendo os membros (variáveis e/ou funções) da classe
Assim como as estruturas, os membros da classe podem ser de diferentes tipos de
dados
Você pode criar objetos de uma classe usando o nome da classe seguido do nome
do objeto

Veja a seguir um exemplo de definição de classe e criação de objeto:
*/

#include <iostream>

class Student
{
    int roll_no;
    std::string name;
    float marks;

    public:
        void set_data (int r, std::string n, float m)
        {
            roll_no = r;
            name = n;
            marks = m;
        }

        void display ()
        {
            std::cout << "Roll no: " << roll_no
            << "\nName: " << name
            << "\nMarks: " << marks << std::endl;
        }
};

Student s1; // Cria um objeto da classe 'Student'

/*
Como os membros de dados de uma classe são privados por padrão, não podemos
acessá-los diretamente usando o operador de ponto de fora da classe
Em vez disso, usamos funções de membro público para definir ou obter seus
valores
*/

int main ()
{
    s1.set_data(1, "Kippy", 95.0);
    s1.display();

    return 0;
}

/*
Esse é um breve resumo das estruturas e classes em C++
Lembre-se de que, embora possam parecer semelhantes, as classes oferecem mais
controle sobre o encapsulamento de dados e podem ser usadas para implementar
recursos mais avançados, como herança e polimorfismo
*/