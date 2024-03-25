/*
A estruturação de base de código é uma parte essencial do desenvolvimento de
software que trata da organização e da modularização do código para torná-lo mais
sustentável, eficiente e fácil de entender
Uma base de código bem estruturada aprimora a colaboração, simplifica a adição de
novos recursos e torna a depuração mais rápida
Em C++, há várias técnicas para ajudá-lo a estruturas sua base de código de forma
eficaz
*/

// 1. Namespaces
/*
Os namespaces são uma das ferramentas do C++ para organizar seu código, fornecendo
um escopo nomeado para diferentes identificadores que você cria, como funções,
classes e variáveis
Eles ajudam a evitar conflitos de nomes e tornam seu código mais modular
*/

// namespace MyNamespace {
//     int aFunction ()
//     {
        
//     }
// }

// int main ()
// {
//     MyNamespace::aFunction();
// }


// 2. Include Guards
/*
As proteções de inclusão são uma ferramenta para evitar várias inclusões de um
arquivo de cabeçalho em seu projeto
Eles consistem em diretivas de pré-processador que incluem condicionalmente
o arquivo de cabeçalho apenas uma vez, mesmo que ele esteja incluído em vários
lugares
*/

// #ifndef MY_HEADER_FILE_H
// #define MY_HEADER_FILE_H

// // Seu código aqui

// #endif // MY_HEADER_FILE_H


// 3. Header and Source Files
/*
Separar a implementação e as declarações em arquivos de cabeça~ho (.h) e de
código-fonte (.cpp) é um aspecto fundamental da estruturação da base de código
em C++
Os arquivos de cabeçalho geralmente contêm declarações de classes e funções,
enquanto os arquivos de código-fonte contêm suas definições
*/

// Ver aquivo MyClass.cpp


// 4. Code Formatting
/*
A formatação e a indentação consistentes do código desempenham um papel fundamental
na estruturação da sua base de código, facilitando a leitura e a compreensão
tanto para você quanto para outros desenvolvedores
Um guia de estilo, como GFooGle C++ Style Guide, pode ajudá-lo a manter uma
formatação consistente em todo o projeto
*/