/*
A function overloading é um tipo de polimorfismo estático em C++ em que várias
funções com o mesmo nome, mas com diferentes conjuntos de parâmetros, são definidas
no mesmo escopo
Isso permite que você use o mesmo nome de função para várias tarefas, fornecendo
argumentos diferentes ao chamar a função
A função apropriada a ser chamada é determinada durante o tempo de compilação com
base no número e nos tipos dos argumentos passados

Para sobrecarregar uma função, basta definir outra função co mo mesmo nome, mas com
um conjunto diferente de parâmetros
O compilador escolherá automaticamente a função correta a ser chamada com base nos
argumentos fornecidos
*/

#include <iostream>

void print (int num)
{
    std::cout << "Printing int: " << num << std::endl;
}

void print (double num)
{
    std::cout << "Printing double: " << num << std::endl;
}

void print (char const *str)
{
    std::cout << "Printing string: " << str << std::endl;
}

int main ()
{
    print(5);
    print(3.14);
    print("Hello, World!");

    return 0;
}

/*
Neste exemplo, são definidas três funções sobrecarregadas denominadas 'print'
Cada uma delas recebe um tipo diferente de argumento: 'int', 'double', e 'char const*'
Ao chamar 'print()' com argumentos diferentes, como '5', '3.14', ou 'Hello, World!',
a função apropriada é escolhida com base no tipo do argumento fornecido

Lembre-se que o número de parâmetros e seus tipos devem ser diferentes para que duas
funções sejam sobrecarregadas
*/