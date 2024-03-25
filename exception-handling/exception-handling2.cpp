/*
O tratamento de execuções é um método usado para lidar com erros de tempo de
execução de modo que o fluxo normal do programa possa ser mantido
Em C++, isso é feito por meio de três keywords: 'try', 'catch' e 'throw'
*/


// 1. try { ... }
/*
No bloco 'try', você escreve o código que pode gerar uma exceção
Se uma exceção for encontrada, o controle é passado para o bloco 'catch' relevante
para tratar o problema
*/


// 2. catch (...) { ... }
/*
O bloco 'catch' segue o bloco 'try' e é responsável por tratar as exceções lançadas
pelo bloco 'try'
Pode haver vários blocos catch para tratar diferentes tipos de exceções

Por exemplo:
*/

// int main ()
// {
//     try
//     {
//         // código que pode lançar uma exceção
//     } catch (int e)
//     {
//         // trata exceção do tipo int
//     } catch (char e)
//     {
//         // trata exceção do tipo char
//     } catch (...)
//     {
//         // trata qualquer outra exceção
//     }
// }


// 3. throw
/*
Caso ocorra um erro no bloco 'try', você pode usar a keyword 'throw' para gerar
uma exceção do tipo específico
Essa exceção será então capturada e tratada pelo bloco 'catch' correspondente

Exemplo:
*/

#include <iostream>

int main ()
{
    try
    {
        int num1 = 10, num2 = 0;

        if (num2 == 0)
        {
            throw "Divisão por zero não é permitida!";
        } else
        {
            int result = num1 / num2;
            std::cout << "Resultado: " << result << std::endl;
        }
    } catch (const char* e)
    {
        std::cout << "Erro: " << e << std::endl;
    }

    return 0;
}

/*
Em resumo, o tratamento de exceções em C++ é uma técnica para lidar com erros de
tempo de execução e, ao mesmo tempo, manter o fluxo normal do programa
As keywords 'try', 'catch' e 'throw' são usadas em conjunto para criar a estrutura
para lidar com exceções à medida que elas ocorrem
*/
