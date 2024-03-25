#include <iostream>

/*
* NOTE - Embora eu tenha testado antes em ../testes/pointers.cpp,
eu não sabia que mais a frente do https://roadmap.sh/cpp teria
uma explicação mais aprofundada em relação àqueles conceitos

--

Fonte extra utilizada:
https://www.idtech.com/blog/what-does-asterisk-mean-in-c-programming

Aqui usamos o asterisco para declarar um pointer (*)
string* pointer;

Aqui usamos o operador reference/address-of (&)
pointer = &input;

Aqui usamos novamente o asterisco, mas dessa vez
para desreferenciar o ponteiro, acessando o valor
de memória apontado por ele
input = *pointer;

--

Um ponteiro é uma variável que armazena o endereço de memória de
outra variável (ou função)
Ele aponta para o local da variável na memória e permite que você acesse
ou modifique o valor indiretamente

Este é o formato geral para declarar um ponteiro:
dataType *pointerName;
*/

int add (int a, int b) {
    return a + b;
}

int main () {
    // 1. Inicializando um ponteiro
    int num = 10;
    int *ptr = &num;

    // 2. Acesso ao valor usando um ponteiro
    int value = *ptr;

    std::cout << ptr << "\n";

    // 3. Ponteiro de função
    /*
    O ponteiro 'funcptr' agora aponta para a função 'add'
    * TODO: Entender melhor o uso de ponteiros em funções
    */
    int (*funcptr) (int, int) = add;
    
    int r = funcptr(4, 5); // retorno: 9

    std::cout << r;

    return 0;
}