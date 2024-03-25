/*
Os raw pointers (ponteiros brutos) em C++ são construções de baixo nível que mantêm
diretamente um endereço de memória
Eles podem ser usados para alocar memória manualmente, criar matrizes dinâmicas e
passar valores com eficiência, entre outras coisas
*/

#include <iostream>

int main ()
{
    // 1. Operador 'new'
    /*
    O operador 'new' é usado para alocar memória no heap
    A memória alocada usando 'new' permanece disponível até que você a desaloque
    explicitamente usando o operador 'delete' correspondente
    */

    int* ptr = new int;
    *ptr = 42;


    // 2. Operador 'delete'
    /*
    O operador 'delete' é usado para desalocar a memória que foi alocada usando 'new'
    Depois que a memória é desalocada, ela fica disponível para ser realocada para
    outros fins
    A falta de desalocação adequada da memória pode levar a vazamentos de memória
    */

    delete ptr;


    // 3. Operadores 'new[]' e 'delete[]'
    /*
    Os operadores 'new[]' e 'delete[]' são usados para alocar e desalocar memória
    para um array de objetos
    A sintaxe de 'new[]' e 'delete[]' é muito semelhante à de 'new' e 'delete'
    */

    int n = 10;
    int* arr = new int[n]; // Aloca dinamicamente um array de 10 inteiros no heap

    // Define alguns valores no array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    delete[] arr; // Desaloca a memória atribuída ao array

    /*
    Em suma, os raw pointers (ponteiros brutos) e os operadores 'new' e 'delete'
    permitem o gerenciamente manual da memória em C++, fornecendo controle sobre a
    alocação e desalocação
    Certifique-se de sempre desalocar a memória alocada com 'new' ou 'new[]', para
    evitar vazamentos de memória em seus programas
    */

    return 0;
}