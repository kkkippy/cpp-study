#include <iostream>

/*
Em C++, os tipos de dados são usados para categorizar diferentes tipos de dados
que um programa pode processar
Eles são essenciais para determinar o tipo de valor que uma variável pode
conter e quanto espaço de memória ela ocupará
Alguns tipos de dados básicos em C++ incluem inteiros, números de ponto flutuante,
caracteres e booleanos
*/

int main () {
    
    // Integer (int)
    /*
    Os integers são números inteiros que podem armazenar valores positivos
    e negativos
    O tamanho do int depende da arquitetura do sistema (geralmente 4 bytes)
    */

    /*
    Há variantes de int que podem conter diferentes intervalos de números:
    `short` (short int): intervalo menor que o do int
    `long` (long int): intervalo maior do que int
    `long long` (long long int): intervalo ainda maior do que long int
    */

    int num = 42;


    // Floating-Point (float, double)
    /*
    Os tipos de ponto flutuante representam números reais, ou seja, números com
    um ponto decimal. Há dois tipos principais de ponto flutuante:

    float: Fornece números de ponto flutuante de precisão única
    Normalmente, ocupa 4 bytes de memória

    double: Fornece números de ponto flutuante de precisão dupla
    Consome mais memória (geralmente 8 bytes), mas tem uma precisão
    maior do que float
    */

    float pi = 3.14f;
    double pi_high_precision = 3.1415926535;


    // Character (char)
    /*
    Os caracteres representam um único caractere, como uma letra, um dígito
    ou um símbolo
    Eles são armazenados utilizando o valor ASCII do símbolo e normalmente ocupam
    1 byte de memória
    */

    char letra = 'A'; // Aspas simples necessária


    // Boolean (bool)
    /*
    Os booleanos representam valores lógicos: `true` ou `false`
    Eles geralmente ocupam 1 byte de memória
    */

    bool is_cpp_great = true;

    return 0;
}