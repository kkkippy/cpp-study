/*
Os códigos de saída, também conhecidos como "códigos de retorno" ou "códigos de
status", são valores numéricos que um programa retorna ao ambiente de chamada
(geralmente o sistema operacional) quando termina a execução
Esses códigos são usados para indicar o sucesso ou o fracasso da execução de um
programa

0 é o código de saída padrão para uma execução bem-sucedida, enquanto os códigos
de saída diferentes de zero normalmente indicam erros ou outras situações
excepcionais
Os significados reais dos códigos de saída diferentes de zero podem variar entre
diferentes aplicativos ou sistemas

No C++, você pode retornar um código de saída da função 'main()' usando a
instrução 'return' ou pode usar a função 'exit()', que faz parte da Standard
Library do C++
*/

#include <iostream>

// 1. Exemplo: Usando return na função 'main'
int main ()
{
    // Algum código aqui...

    if (false /* alguma condição de erro */) {
        std::cout << "Um erro ocorreu." << std::endl;

        return 1;
    }

    // Mais código aqui

    if (true /* outra condição de erro */) {
        std::cout << "Outro erro ocorreu." << std::endl;
        return 2;
    }

    return 0; // Execução bem-sucedida
}

/*

Nos dois exemplos acima, o programa retorna códigos de saída dependendo das
diferentes condições de erro encontradas durante a execução
Os códigos 1 e 2 são usados para distinguir entre as duas condições de erro
*/

