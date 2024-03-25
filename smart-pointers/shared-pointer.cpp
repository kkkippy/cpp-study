/*
Um 'shared_ptr' é um tipo de ponteiro inteligente em C++ que permite que vários
ponteiros compartilhem a propriedade de um objeto alocado dinamicamente
O objeto será automaticamente desalocado somente quando o último 'shared_ptr'
que aponta para ele for destruído

Ao usar um 'shared_ptr', o contador de referência é automaticamente incrementado
sempre que um novo ponteiro é criado e decrementado quando cada ponteiro sai do
escopo
Quando o contador de referência chegar a zero, o sistema limpará a memória

Exemplo de código:
*/

#include <iostream>
#include <memory>

class MyClass
{
public:
    MyClass ()
    {
        std::cout << "Construtor foi chamado" << std::endl;
    }

    ~MyClass ()
    {
        std::cout << "Destrutor foi chamado" << std::endl;
    }
};

int main ()
{
    // Cria um ponteiro compartilhado para gerenciar o objeto MyClass
    std::shared_ptr<MyClass> ptr1(new MyClass());

    {
        /*
        Cria outro ponteiro compartilhado e é inicializado com o ponteiro criado
        anteriormente
        */

        std::shared_ptr<MyClass> ptr2 = ptr1;

        std::cout << "Dentro do escopo interno" << std::endl;
        /*
        ambos os ponteiros compartilham o mesmo objeto e o contador de referência
        foi aumentado para 2
        */
    }

    std::cout << "Fora do escopo interno" << std::endl;

    /*
    Sair do escopo interno destruirá ptr2, e o contador de referência será
    decrementado para 1

    A main function retorna, ptr1 sai do escopo e o contador de referência se torna 0
    Isso faz com que o objeto MyClass seja excluído e o destrutor seja chamado

    Nesse exemplo, 'ptr1' e 'ptr2' compartilham a propriedade do mesmo objeto
    O objeto só é destruído quando os dois ponteiros saem do escopo e o contador
    de referência se torna zero
    */

    return 0;
}