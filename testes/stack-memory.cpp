/*
Fontes utilizadas para a compreensão dos assuntos abordados:
1. https://www.educba.com/c-stack-vs-heap/

Stack (pilha) é basicamente a região da memória do computador que é gerenciada
automaticamente pelo computador para armazenar as variáveis locais, os métodos
e os dados usados pela função, enquanto o heap é a região flutuante da memória
que não é gerenciada automaticamente pela CPU nem pelo programador

O Heap oferece suporte à alocação dinâmica de memória com o uso das palavras-chave
malloc() e calloc()
Para liberar a memória, o programador precisa usar o método free(), ao passo que,
no caso da Stack, a memória alocada para armazenar as variáveis e os dados da
função é liberada automaticamente pelo compilador quando a execução da função
termina

A Stack é comparativamente mais flexível do que o Heap, pois a memória alocada
para a Stack não pode ser alterada, ao passo que, no caso do Heap, há alocação
dinâmica de memória para que o tamanho possa ser alterado

O principal problema que pode ocorrer no caso da Stack é a falta de memória, ao
passo que, em um Heap, o problema é a fragmentação, pois a memória é alocada e
liberada repetidamente
*/

#include <iostream>

void funcao2 () {
    std::cout << "Entrei na função 2" << std::endl;

    for (int i = 1; i <= 5; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "Saindo da função 2" << std::endl;
}

void funcao1 () {
    std::cout << "Entrei na função 1" << std::endl;

    funcao2();

    std::cout << "Saindo da função 1" << std::endl;
}

int main () {
    std::cout << "Iniciando o programa principal" << std::endl;

    funcao1();

    std::cout << "Finalizando o programa principal" << std::endl;

    return 0;
}