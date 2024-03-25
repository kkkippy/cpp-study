#include <iostream>
#include <any>

/*
O C++ é conhecido como uma linguagem estaticamente tipada, o que significa que
os tipos de dados de saus variáveis são determinados no momento da compilação
No entanto, o C++ também oferece conceitos para ter certo nível de tipagem
dinâmica, o que significa que determinar os tipos de dados das variáveis em
tempo de execução
*/

// NOTE - É um tópico avançado (segundo o roadmap.sh)
// TODO: Aprender sobre static_cast e any_cast

int main () {

    // 1. `void*` Pointers
    /*
    Um ponteiro void* é um ponteiro genérico que *pode apontar para objetos
    de qualquer tipo de dado*
    Eles podem ser usados para armazenar uma referência a qualquer tipo de
    objeto sem saber o tipo específico do objeto
    */

    int x = 42;
    float y = 3.14f;

    std::string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << std::endl;

    void_ptr = &y;
    std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << std::endl;
    
    void_ptr = &z;
    std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << std::endl << std::endl;


    // `std::any` (C++17)
    /*
    O C++17 introduziu a classe std::any, que representa um contêiner de segurança
    de tipo generalizado para valores únicos de qualquer tipo
    */

    // Usando #include <any>

    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << (std::any_cast<int>(any_value) + 10) << std::endl;

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << std::endl;

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << std::endl;

    return 0;
}