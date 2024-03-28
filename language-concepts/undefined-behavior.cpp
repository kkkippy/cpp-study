#include <iostream>

/*
Comportamento indefinido em C++ refere-se a uma situação em que o comportamento de um
programa não pode ser previsto devido a qualquer violação das regras da linguagem
É o resultado de vários fatores, como variáveis não inicializadas, uso de ponteiros
para memória desalocada, acesso à memória fora dos limites, etc
O C++ padrão não define o comportamento em tais casos, o que significa que o compilador
ou o sistema de tempo de execução é livre para lidar com essas situações da maneira
que desejar

Alguns exemplos comuns de comportamento indefinido são:
*/

int main ()
{
    // 1. Variáveis não inicializadas (Uninitialized Variables)
    /*
    O acesso ao valor de uma variável não inicializada pode levar a um comportamento indefinido
    O valor de uma variável não inicializada é arbitrário e depende do que estava no local da memória antes de a
    variável ser declarada
    */

    int x;
    int y = x + 5; // Comportamento indefinido, pois x não está inicializado


    // 2. Acesso à memória fora dos limites (Out-of-bounds Memory Access)
    /*
    O acesso à memória fora dos limites de um array ou buffer pode resultar em um comportamento indefinido
    */

    int arr[5];
    int val = arr[5]; // Comportamento indefinido, pois os índices válidos são de 0 a 4


    // 3. Desreferência de ponteiro nulo (Null Pointer Dereference)
    /*
    A desreferência a um ponteiro nulo pode levar a um comportamento indefinido
    */

    int *ptr = nullptr;
    int val1 = *ptr; // Comportamento indefinido, pois ptr é um ponteiro nulo


    // 4. Divisão por Zero
    /*
    A execução de uma operação de divisão por zero é um comportamento indefinido em C++
    */

    int a = 5;
    int b = 0;
    int c = a / b; // Comportamento indefinido, pois a divisão por zero não é permitida

    return 0;
}

/*
É fundamental detectar e corrigir a causa raiz do comportamento indefinido em seus programas, pois ele pode levar
a resultados imprevisíveis, corrupção de dados e vulnerabilidades de segurança
Para atenuar o comportamento indefinido, você pode utilizar ferramentas como analisadores de código estático,
ferramentas de análise dinâmica e opções de compilador que ajudam a detectar possíveis problemas
*/