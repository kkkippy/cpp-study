#include <iostream>

/*
Fontes utilizadas para a compreensão dos conceitos abordados:
1. https://techkluster.com/c-plus-plus/how-to-use-ampersands-in-c/#:~:text=In%20C%2B%2B%2C%20the%20ampersand%20can%20be%20used%20as%20a,can%20retrieve%20its%20memory%20address
2. https://study.com/academy/lesson/how-to-use-pointers-in-c-plus-plus-programming.html#:~:text=A%20pointer%20in%20C%20and,operator%2C%20will%20display%20this%20value
3. https://medium.com/@rogerfavelron/lets-understand-references-and-pointers-in-c-e1330b6b4145

Nota:
Este arquivo foi feito devido à minha dúvida em relação aos ponteiros
e referências após me sentir encucado com os tipos de dados derivados e com
os tipos dinâmicos 
O site https://roadmap.sh não foi utilizado justamente por não esclarecer muito
bem o uso dos conceitos ilustrados neste arquivo
*/

int main () {
    // address-of Operator (&var)
    /*
    Em C++, o símbolo E comercial (&) tem vários significados e usos
    Ele pode ser usado como um operador unário, bem como em declarações
    de variáveis e parâmetros de funções
    Compreender os diferentes contextos e propósitos do E comercial (&)
    em C++ é fundamental para dominar a linguagem

    Podemos determinar o endereço de uma variável adicionando o operador
    unário E comercial (&) atrás de uma variável
    Ele é um 'address-of operator', que ao usar, obtém o endereço
    de memória, como mostrado abaixo
    */

    int x = 10;
    /*
    Acima declaramos uma variável chamada 'x', que agora possui um endereço
    reservado na memória, cujo valor é 10
    */

    std::cout << &x;


    // Pointers (type*)

    /*
    Se quisermos manter esse endereço de memória, podemos usar um ponteiro,
    uma variável que aponta para um endereço na memória

    Um ponteiro deve obrigatoriamente apontar para um endereço
    */

    return 0;
}