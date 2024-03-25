#include <iostream>

int main () {

    int* a = new int; // Aloca dinamicamente o tamanho de um inteiro na memória Heap

    std::cout << a << std::endl;

    *a = 10;          // Atribui 10 no espaço alocado na memória Heap

    std::cout << *a << std::endl;

    delete a;         // Desaloca a memória

    std::cout << *a;

    return 0;
}