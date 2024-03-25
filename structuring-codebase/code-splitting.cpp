/*
A divisão de código refere-se ao processo de dividir uma grande base de código em
arquivos ou módulos menores e mais gerenciáveis
Isso ajuda a melhorar a organização, a capacidade de manutenção e a legibilidade
do código
Em C++, a divisão do código geralmente é obtida com o uso de compilação, arquivos
de cabeçalho e arquivos de código-fonte separados
*/

// 1. Header Files (.h ou .hpp)
/*
Os header files (arquivos de cabeçalho), geralmente com a extensão '.h' ou '.hpp',
são responsáveis por declarar classes, funções e variáveis necessárias a vários
arquivos de código-fonte
Eles atuam como uma interface entre diferentes partes do código, facilitando
o gerenciamento de dependências e reduzindo as chances de duplicação de código

Um exemplo de header file:
*/

// example.h


// 2. Source Files (.cpp)
/*
Os arquivos de código-fonte, com a extensão '.cpp', são responsáveis pela
implementação da funcionalidade real definida nos arquivos de cabeçalho
correspondentes
Eles incluem os arquivos de cabeçalho conforme necessário e fornecem as definições
de métodos e funções e classes

Um exemplo de código-fonte:
*/

// example.cpp


// 3. Separate Compilation
/*
O C++ permite a compilação separada, o que significa que cada arquivo de origem pode
ser compilado independentemente em um arquivo de objeto
Esses arquivos de objeto podem então ser vinculados para formar o executável final
Isso proporciona tempos de compilação mais rápidos ao fazer alterações em um único
arquivo de origem, pois somente esse arquivo precisa ser recompilado e os outros
arquivos de objeto podem ser reutilizados

Exemplo de compilação e vinculação separadas:


# Compilar cada arquivo de origem em um arquivo de objeto
g++ -c main.cpp -o main.o
g++ -c example.cpp -o example.o

# Vincular arquivos de objeto para criar o executável
g++ main.o example.o -o my_program


Ao seguir a técnica de divisão de código, você pode organizar melhor sua base de
código C++, tornando-a mais gerenciável e passível de manutenção
*/