#include <iostream>

/*
Fontes utilizadas:
1. https://techkluster.com/c-plus-plus/how-to-use-ampersands-in-c/#:~:text=In%20C%2B%2B%2C%20the%20ampersand%20can%20be%20used%20as%20a,can%20retrieve%20its%20memory%20address

Este arquivo foi feito com o objetivo de entender melhor o uso do
E comercial (&) no geral, embora eu já tenha visto e entendido
outras formas além de usá-lo como operador de referência
*/

// Função usada no terceiro exemplo
void incrementar (int& n) {
    n++;
}

// Template usado no sexto exemplo
template <typename T>
void swap (T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main () {
    
    // E comercial/Ampersand (&)

    // 1. E comercial/Ampersand como um operador unário (&var)
    /*
    Em C++, o E comercial pode ser usado como operador unário para obter
    o endereço de memória de uma variável
    Ele é conhecido como operador "address-of"
    Ao anteceder uma variável com um E comercial, você obterá seu endereço
    de memória

    No trecho de código abaixo, declaramos uma variável inteira chamada
    'number' e atribuímos a ela um valor de 10
    Usando o operador ampersand (&), atribuímos o endereço de 'number' à
    variável de ponteiro 'ptr'
    Ao imprimir 'ptr', podemos ver o endereço de memória de 'number'
    */

    int number = 10;
    int* ptr = &number; // Falo sobre ponteiros em ./e-comercial.cpp

    std::cout << std::endl << "1. Ampersand como operador unário (&var)" << std::endl;
    
    std::cout << ptr << std::endl;


    // 2. E comercial/Ampersand em declarações de variáveis (typename&)
    /*
    O símbolo ampersand também é usado em declarações de variáveis para declarar
    variáveis de referência
    Uma referência é um alias ou nome alternativo para uma variável existente
    Ao usar um ampersand em uma declaração de variável, você pode criar uma
    variável de referência que se refere ao mesmo local de memória que a variável
    original

    No trecho de código abaixo, declaramos uma variável inteira chamada 'x'
    com o valor 5
    Em seguida, declaramos uma variável de referência chamada 'ref' usando
    o símbolo ampersand
    Tanto 'x' quanto 'ref' se referem ao mesmo local de memória
    A modificação do valor de 'ref' também modifica o valor de 'x', pois elas
    são essencialmente a mesma variável
    */


    int x = 5;
    int& ref = x;

    std::cout << std::endl << "2. Ampersand em declarações de variáveis (typename&)" << std::endl;

    std::cout << "Original: " << x << std::endl;
    std::cout << "Referência: " << ref << std::endl;

    ref = 8; // Podemos modificar o valor através da referência

    std::cout << "Modificado: " << x << std::endl;


    // 3. E comercial/Ampersand em parâmetros de funções (typename& param_name)
    /*
    Os ampersand são comumente usados em parâmetros de função para indicar
    pass-by-reference (passar por referência é um método que permite que
    uma função use a localização original de um dado, em vez de uma cópia dele
    Assim, qualquer alteração feita nesse dado pela função afetará o dado original)

    No exemplo abaixo, definimos uma função chamada 'incrementar' que recebe
    um parâmetro inteiro chamado 'num' como referência
    Dentro dessa função, incrementamos o valor de 'num'
    Ao passar 'i' como argumento para 'incrementar', vemos que a variável
    original é modificada ao imprimir seu valor antes e depois da função
    */

    int i = 7;
    
    std::cout << std::endl << "3. Ampersand em parâmetros de funções (typename& param_name)" << std::endl;

    std::cout << "Antes do incremento: " << i << std::endl;

    incrementar(i);

    std::cout << "Depois do incremento: " << i << std::endl;
    

    // 4. E comercial/Ampersand em operadores Bitwise (n1 & n2)
    /*
    O símbolo ampersand pode ser usado como operador AND bit a bit
    Quando usado entre dois operandos, ele executa uma operação AND bit a bit
    nas representações binárias dos operandos

    No caso abaixo, o ampersand é usado para executar uma operação AND de bit
    a bit nas representações binárias de 'a' e 'b'
    O resultado é um novo valor baseado na comparação de bit a bit dos bits
    individuais de 'a' e 'b'
    */

    int a = 5; // representação binária: 0101
    int b = 3; // representação binária: 0011

    int resultado = a & b; // operação bit a bit AND
    // resultado = 0001 (binário) = 1 (decimal)

    std::cout << std::endl << "4. Ampersand em operadores Bitwise (n1 & n2)" << std::endl;

    std::cout << resultado << std::endl;


    // 5. E comercial/Ampersand em lógica booleana (cond1 && cond2)
    /*
    O ampersand também pode ser usado como o operador lógico AND
    Ele é usado para combinar expressões booleanas e retorna verdadeiro se
    ambas as expressões forem avaliadas como verdadeiras    

    No exemplo abaixo, o ampersand é usado para executar uma operação lógica
    AND no 'condition1' e no 'condition2'
    O resultado é 'false', pois 'condition2' é avaliada como 'false', embora
    'condition1' seja 'true'
    */

    bool condition1 = true;
    bool condition2 = false;

    bool trueOuFalse = condition1 && condition2; // operação lógica AND
    // trueOuFalse = false

    std::cout << std::endl << "5. mpersand em lógica booleana (cond1 && cond2)" << std::endl;

    std::cout << trueOuFalse << std::endl;


    // 6. E comercial/Ampersand nos parâmetros de template/modelo ()
    /*
    Ao trabalhar com templates, o símbolo ampersand pode ser usado como um
    parâmetro de modelo para indicar um tipo de referência
    Geralmente, ele é usado para especificar que uma função ou classe de uma
    template usa uma referência a um objeto em vez de uma cópia

    No trecho de código abaixo, o template da função 'swap' recebe dois parâmetros
    'a' e 'b' por referência, usando amperstands
    Isso permite que a função modifique os valores de 'n1' e 'n2' diretamente,
    trocando seus valores
    */

    int n1 = 5;
    int n2 = 10;

    std::cout << std::endl << "6. Ampersand nos parâmetros de template/modelo (T&)" << std::endl;

    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    swap(n1, n2); // Troca os valores de n1 e n2

    std::cout << "Valores trocados" << std::endl;

    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2;

    return 0;
}