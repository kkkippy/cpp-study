#include <iostream>

/*
A combinação de nomes (Name Mangling), também conhecida como decoração de nomes, é uma técnica usada pelos compiladores
para codificar informações adicionar sobre o escopo, o tipo, a vinculação ou outras informações de identificação de um
identificador (nomes de funções, nomes de variáveis, etc.) em seu nome
O objetivo principal da manipulação de nomes (Name Mangling) é oferecer suporte à sobrecarga de funções, o que permite
que várias funções com o mesmo nome, mas com listas de parâmetros diferentes, coexistam em um único programa

Em C++, o compilador gera um nome manipulado para cada função e variável com base em seus escopos e tipos
O nome manipulado (mangled name) geralmente é formado pela concatenação do nome original, dos tipos de parâmetros e de
outras informações, geralmente usando um prefixo ou sufixo

Por exemplo, suponha que você tenha a seguinte função
*/

int add (int a, int b)
{
    return a + b;
}

/*
O compilador pode gerar um nome manipulado, como '_Z3addii', que codifica o nome da função 'add' e seus dois
parâmetros 'int'

As regras exatas para a manipulação de nomes dependem da implementação e da plataforma
Compiladores diferentes podem manipular nomes de forma diferente, o que pode levar a incompatibilidades ao tentar
vincular arquivos de objetos ou bibliotecas compilados com compiladores diferentes

Algumas ferramentas, como o c++filt (incluído no GCC e no Clang), podem ser usadas para desmembrar um nome manipulado
de volta ao identificador original, o que pode ser útil ao depurar ou trabalhar com tabelas de símbolos

$ echo "_Z3addii" | c++filt
add(int, int);


Em geral, não é necessário que você entenda os detalhes da combinação de nomes ao escrever código em C++, pois o
compilador lida com isos automaticamente
Entretanto, isso pode afetar o comportamento do programa em alguns casos, como no uso de bibliotecas externas ou na
vinculação de arquivos de objetos de diferentes compiladores
*/