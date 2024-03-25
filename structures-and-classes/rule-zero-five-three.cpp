/*
A Regra de Zero, Três e Cinco (Rule of Zero, Five, Three) é um conjunto de diretrizes para
o gerenciamento de recursos de objetos no C++ moderno, relacionado a estrutura de classes
Essas regras tratam do comportamento padrão de construtores, destrutores e outras funções
de membro especiais que são necessárias para o gerenciamento adequado de recursos
*/


// 1. Rule of Zero (Regra de Zero)
/*
A Regra de Zero afirma que, se uma classe ou estrutura nao gerencia explicitamente os
recursos, ela não deve definir nenhuma das funções de membro especiais, ou seja, destrutor,
construtor de cópia, operador de atribuição de cópia, construtor de movimentação e
operador de atribuição de movimentação
O compilador gerará automaticamente essas funções, e o comportamento será correto para
o gerenciamento de recursos como memória e manipuladores de arquivos

Exemplo:
*/

#include <iostream>

struct MyResource
{
    std::string name;
    int value;
};

/*
Neste exemplo, 'MyResource' é uma estrutura simples que não gerencia nenhum recurso e,
portanto, não define nenhuma função de membro especial
O compilador às gerará automaticamente, e o comportamento será correto
*/


// 2. Rule of Three (Regra de Três)
/*
A Regra de Três afirma que uma classe ou estrutura que gerencia recursos deve definir
as três funções de membro especiais a seguir:

* Destrutor (destructor)
* Construtor de cópia (copy constructor)
* Operador de atribuição de cópia (copy assignment operator)

Essas função são necessárias para o gerenciamento adequado de recursos, como a liberação
de memória ou o tratamento correto de cópias profundas

Exemplo:
*/

// TODO: Entender cada coisa utilizada nessa class ☠️
// class MyResource
// {
// public:
//     MyResource () : data (new int[100]) {}
//     ~MyResource ()
//     {
//         delete[] data; 
//     }

//     MyResource (const MyResource& other) : data (new int[100])
//     {
//         std::copy(other.data, other.data + 100, data);
//         // TODO: Entender std::copy
//     }

//     MyResource& operator = (const MyResource& other)
//     {
//         if (&other == this)
//         {
//             return *this;
//         }

//         std::copy(other.data, other.data + 100, data);
        
//         return *this;
//     }

// private:
//     int* data;
// };

/*
Neste exemplo, 'MyResource' é uma classe que gerencia um recurso (uma matriz de elementos
inteiros), portanto, define o destrutor, o construtor de cópia e o operador de atribuição de
cópia
*/


// 3. Rule of Five (Regra de Cinco)
/*
A Regra de Cinco estende a Regra de Três para incluir duas funções de membro especiais
adicionais:

* Construtor Move
* Operador de atribuição de movimentação

O C++ moderno introduz a semântica de movimentação, que permite o manuseio mais eficiente dos
recursos, transferindo a propriedade sem necessariamente copiar todos os dados

Exemplo:
*/

class MyResource
{
public:
    // Constutor e destrutor
    MyResource () : data(new int[100]) {}
    ~MyResource ()
    {
        delete[] data;
    }

    // Construtor de cópia
    MyResource (const MyResource& other) : data(new int[100])
    {
        std::copy(other.data, other.data + 100, data);
    }

    // Operador de atribuição de cópia
    MyResource& operator = (const MyResource& other)
    {
        if (&other == this)
        {
            return *this;
        }

        std::copy(other.data, other.data + 100, data);
        return *this;
    }

    // Construtor de movimentação
    MyResource (MyResource&& other) noexcept : data (other.data)
    {
        other.data = nullptr;
    }

    // Operador de atribuição de movimento
    MyResource& operator = (MyResource&& other) noexcept
    {
        if (&other == this)
        {
            return *this;
        }

        delete[] data;
        data = other.data;
        other.data = nullptr;
        return *this;
    } 

private:
    int* data;
};

/*
Neste exemplo, 'MyResource' é uma classe que gerencia um recurso (uma matriz de números
inteiros), portanto, define todas as cinco funções de membro especiais para o gerenciamento
adequado de recursos e a semântica de movimentação

* NOTE - Entendi nada
*/