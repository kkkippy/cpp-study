#include <iostream>
#include <typeinfo>

// RTTI é um acrônimo para Run-Time Type Identification

// NOTE - É um tópico avançado (segundo o roadmap.sh)
// TODO: Entender tudo sobre RTTI

class Base {
    virtual void dummy () {}
};

class Derived: public Base {};

int main () {

    /*
    O RTTI (Run-Time Type Identification) é um recurso do C++ que permite
    obter as informações de tipo de um objeto durante a execução do programa
    Isso pode ser útil ao usar a digitação dinâmica em que o tipo de um
    objeto pode mudar no tempo de execução

    Há dois mecanismos principais para RTTI em C++:
    1. Operador `typeid`
    2. Operador `dynamic_cast`
    */

    // Operador typeid
    /*
    `typeid` é um operador que retorna uma referência a um objeto do tipo
    std::type_info, que contém informações sobre o tipo do objeto
    O arquivo de cabeçalho `<typeinfo>` deve ser incluído para usar o
    `typeid`
    */

    Base* base_ptr = new Derived;

    // Usando `typeid` para obter o tipo do objeto
    std::cout << "Type: " << typeid(*base_ptr).name() << "\n";

    delete base_ptr;

    return 0;
}