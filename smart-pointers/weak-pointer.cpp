/*
Um 'weak_ptr' é um tipo de ponteiro inteligente em C++ que adiciona um
nível de indireção e segurança a um ponteiro bruto
Ele é usado principalmente para interromper ciclos de referência nos casos em que
dois objetos têm ponteiros compartilhados entre si ou quando você precisa de uma
referência não proprietária a um objeto gerenciado por uma 'shared_ptr'

Um 'weak_ptr' não aumenta a contagem de referência do objeto para o qual aponta, o
que é uma dinstinção crucial entre 'weak_ptr' e 'shared_ptr'
Isso garante que o objeto será excluído quando o último 'shared_ptr' que o possui
sair do escopo, mesmo que ainda haja 'weak_ptr's fazendo referência a ele

Para usar um 'weak_ptr', você deve convertê-lo em um 'shared_ptr' usando a função
'lock()', que tenta criar um novo 'shared_ptr' que compartilha a propriedade
do objeto
Se for bem-sucedida, a contagem de referência do objeto será aumentada e você
poderá usar o 'shared_ptr' retornado para acessar o objeto com segurança

Um exemplo de uso do 'weak_ptr':
*/

#include <iostream>
#include <memory>

class MyClass
{
    public:
        void DoSomething ()
        {
            std::cout << "Fazendo alguma coisa...\n";
        }
};

int main ()
{
    std::weak_ptr<MyClass> weak;

    {
        std::shared_ptr<MyClass> shared = std::make_shared<MyClass>();
        weak = shared;

        if (auto sharedFromWeak = weak.lock())
        {
            sharedFromWeak -> DoSomething(); // Usa o objeto com segurança
            std::cout << "Shared uses count: " << sharedFromWeak.use_count() << std::endl; // 2
        }
    }

    // shared_ptr sai do escopo e o objeto MyClass é destruído

    if (auto sharedFromWeak = weak.lock())
    {
        // Esse bloco não sera executado porque o objeto foi destruído
    }
    else
    {
        std::cout << "O objeto foi destruído" << std::endl;
    }

    /*
    Neste exemplo, criamos um 'shared_ptr' chamado 'shared' que gerencia um objeto
    MyClass
    Ao atribuí-lo a um 'weak_ptr' chamado 'weak', armazenamos uma referência não
    proprietária ao objeto
    Dentro do escopo interno, criamos um novo 'shared_ptr' chamado 'sharedFromWeak'
    usando 'weak.lock()' para usar o objeto com segurança
    Após o escopo interno, o objeto 'MyClass' é destruído, pois 'shared' sai do
    escopo, e qualquer outra tentativa de criar um 'shared_ptr' a partir de 'weak'
    falhará, pois o objeto já foi destruído
    */

    return 0;
}