/*
Uma violação de acesso é um tipo específico de erro que ocorre quando um programa
tenta acessar um local de memória ilegal
Em C++, as violações de acesso são mais comumente causadas por:

* Dereferenciar um ponteiro nulo ou inválido
* Acesso a um array fora dos limites
* Leitura ou gravação na memória liberada pelo usuário ou pelo sistema operacional

É fundamental identificar as violações de acesso, pois elas podem levar a
comportamentos imprevisíveis, falhas no aplicativo ou corrupção de dados

Alguns exemplos de violações de acesso são:
*/

int main ()
{
    // 1. Deferenciamento de ponteiro nulo ou inválido
    int *p = nullptr;
    int x = *p; // Violação de acesso: tentando acessar o conteúdo do ponteiro nulo


    // 2. Acessando um array fora dos limites
    int arr[5] = {1, 2, 3, 4, 5};
    int y = arr[5];


    // 3. Leitura ou gravação na memória liberada
    int* p2 = new int[10];
    delete[] p2;
    p2[3] = 42;

    return 0;
}

// Depuração de Violações de Acesso
/*
Ferramentas como depuradores, analisadores estáticos e profilers podem ajudar
a identificar violações de acesso em seu código
Por exemplo:

* Microsoft Visual Studio: Use o depurador interno para identificar a linha de
código responsável pelo erro de violação de acesso

* Valgrind: Uma ferramenta popular do Linux que detecta vazamentos de memória
e violações de acesso em seus programas C++

* AddressSanitizer: Um detector de erros de memória em tempo de execução para
C++ que pode detectar acessos fora dos limites, vazamentos de memória e erros
de uso após a liberação
*/
