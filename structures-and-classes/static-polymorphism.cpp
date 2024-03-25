/*
O polimorfismo estático, também conhecido como polimorfismo em tempo de compilação,
é um tipo de polimorfismo que resolve os tipos e as chamadas de método em tempo de
compilação, e não em tempo de execução
Isso é comumente obtido por meio do uso de function overloading e modelos em C++
*/

// 1. Function Overloading
/*
A sobrecarga de função (function overloading) é uma forma de criar várias funções com
o mesmo nome, mas com listas de parâmetros diferentes
O compilador determina a função correta a ser chamada com base nos tipos e no número
de argumentos usados quando uma função é chamada
*/

#include <iostream>

// void print (int i)
// {
//     std::cout << "Printing int: " << i << std::endl;
// }

// void print (double d)
// {
//     std::cout << "Printing double: " << d << std::endl;
// }

// void print (const char* s)
// {
//     std::cout << "Printing string: " << s << std::endl;
// }

// 2. Templates
/*
As templates são um recurso avançado do C++ que permite criar funções ou classes
genéricas
O código real para tipos específicos é gerado no momento da compilação, o que evita
sobrecarga do polimorfismo em tempo de execução
O uso de templates é a principal técnica para alcançar o polimorfismo estático em C++
*/

template <typename T>
void print (const T& value)
{
    std::cout << "Printing value: " << value << std::endl;
}

int main ()
{
    print(5);          // Calls print(int i)
    print(3.14);       // Calls print(double d)
    print("Hello");    // Calls print(const char* s)

    return 0;
}

/*
Concluindo, o polimorfismo estático atinge o comportamento polimórfico durante o tempo
de compilação usando function overloading e templates, em vez de depender de
informações de tempo de execução, como faz o polimorfismo dinâmico
Isso pode resultar em um código mais eficiente, pois as chamadas de método são
resolvidas em tempo de compilação
*/

