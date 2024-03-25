/*
O vazamento de memória ocorre quando algum programa aloca memória no heap, mas
não a libera de volta para o sistema operacional quando ela não é mais necessária
Com o tempo, isso leva ao esgotamento da memória dispon´vel, resultando em baixo
desempenho do sistema ou falhas

Em C++, quando você usa raw pointers (ponteiros brutos), precisa gerenciar a alocação
e desalocação de memória manualmente
Em muitos casos, você usará a keyword 'new' para alocar memória para um
objeto no heap e usará a keyword 'delete' para desalocar essa memória quando ela não
for mais necessária
Esquecer de fazer isso pode causar vazamentos de memória

Por exemplo:
*/

void create_memory_leak ()
{
    int* ptr = new int[100]; // Alocação de memória no heap para um array de inteiros
    // Alguns códigos...
    // O código para desalocar a memória está falando: delete[] ptr;
}
/*
ptr sai do escopo, o bloco de memória alocado não é desalocado, causando um
vazamento de memória
*/

/*
Para evitar vazamentos de memória, você deve sempre garantir que a memória seja
desalocada antes que um ponteiro saia do escopo ou seja reatribuído
Algumas maneiras de conseguir isso incluem o uso de ponteiros inteligentes C++
(std::unique_ptr, std::shared_ptr), técnicas RAII (Resource Acquisition Is
Initialization) e contêineres da standard library que gerenciam a alocação de memória
internamente (por exemplo, std::vector, std::string)

Por exemplo, esse código não terá um vazamento de memória:
*/

#include <memory>

void no_memory_leak ()
{
    std::shared_ptr<int[]> ptr = std::make_shared<int[]>(100);
    // Alocação de memória no heap para uma matriz de inteiros usando shared_ptr
    // Alguns códigos...
}
/*
shared_ptr sai do escopo e desaloca automaticamente o bloco de memória atribuído
a ele
*/

