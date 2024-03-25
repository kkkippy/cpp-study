/*
A conversão de tipos é o processo de conversão de um valor de um tipo de dado para
outro
Em C++, há quatro métodos diferentes de conversão de tipos:
*/

int main ()
{
    // 1. C-Style casting:
    /*
    É a sintaxe herdada de C e é feita simplesmente colocando o tipo de dado de
    destino entre parênteses antes do valor a ser convertido
    Exemplo:
    */

    int a = 10;
    float b = (float)a;


    // 2. 'static_cast':
    /*
    Esse é o método mais comumente usado para conversão de tipos em C++
    Ele é executado em tempo de compilação e deve ser usado quando houver uma
    conversão explícita entre tipos de dados
    Exemplo:
    */

    int c = 10;
    int d = static_cast<float>(a);


    // 3. 'dynamic_cast':
    /*
    Esse método é usado especificamente para converter com segurança ponteiros
    e referências entre classes base e derivadas em uma hierarquia de classes
    Exemplo:
    */

    class Base {};
    class Derived : public Base {};

    Base* base_ptr = new Derived();
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);


    // 4. 'reinterpret_cast':
    /*
    Essa conversão altera o tipo de um ponteiro, de uma referência ou de um valor inteiro
    Também é chamado de conversão bit a bit porque altera a forma como o compilador interpreta
    os bits subjacentes
    Use 'reinterpret_cast' somente quando tiver um conhecimento profundo do que está fazendo,
    pois ele não garante que o valor resultante seja significativo
    Exemplo:
    */

    int* e = new int(42);
    long f = reinterpret_cast<long>(a);

    
    // 5. 'const_cast':
    /*
    Esse método de conversão é usado para remover o qualificador 'const' de uma variável
    Geralmente não é recomendado, mas pode ser útil em determinadas situações em que não há
    controle sobre a constância de uma variável
    Exemplo:
    */

    const int g = 10;
    int* ptr = const_cast<int*>(&a);
    *ptr = 20;

    return 0;
}

/*
Lembre-se de usar o tipo certo de conversão com base na situação específica e de seguir as
boas práticas de programação para garantir um código seguro e eficiente
*/
