// Overview
/*
O tratamento de exceções em C++ é um mecanismo para tratar erros, anomalias ou
eventos inesperados que podem ocorrer durante a execução de um programa em tempo
de execução Isso permite que o programa continue a ser executado ou saia
graciosamente quando encontrar erros, em vez de ser interrompido abruptamente

O C++ oferece um conjunto de keywords e construções para implementar o
tratamento de exceções:

* 'try': Define um bloco de código que deve ser monitorado quanto a exceções
* 'catch': Especifica o tipo de exceção a ser capturada e o bloco de código que
deve ser executado quando essa exceção ocorrer
* 'throw': Lança uma exceção que será capturada e tratada pelo bloco 'catch'
apropriado
* 'noexcept': Especifica uma função que não lança exceções ou encerra o programa
se uma exceção for lançada em seu escopo

Veja a seguir um exemplo que demonstra o uso básico do tratamento de exceções:
*/

#include <iostream>
#include <stdexcept>

// int divide (int a, int b)
// {
//     if (b == 0)
//     {
//         throw "Divisão por zero!";
//     }

//     return a / b;
// }

// int main ()
// {
//     int num1, num2;

//     std::cout << "Digite dois números para a divisão: ";
//     std::cin >> num1 >> num2;

//     try
//     {
//         int result = divide(num1, num2);
//         std::cout << "O resultado é: " << result << std::endl;
//     }
//     catch(const char* msg)
//     {
//         std::cerr << "Erro: " << msg << std::endl;
//     }

//     return 0;
// }

/*
Neste exemplo, definimos uma função 'divide' que lança uma exceção se 'b' for
zero Na função principal, usamos um bloco 'try' para chamar a divisão e gerar o
resultado Se uma exceção for lançada, ela será capturada dentro do bloco
'catch', que gera uma mensagem de erro Dessa forma, podemos lidar com o erro de
forma elegante em vez de deixar o programa travar ao tentar dividir por zero
*/

// Standard Exceptions
/*
O C++ fornece um conjunto padrão de classes de exceção na biblioteca
'<stdexcept>', que pode ser usada como tipo de exceção para um tratamento de
erros mais específico Algumas dessas classes incluem:

* 'std::exception': Classe base para todas as exceções padrão
* 'std::logic_error': Representa erros que podem ser detectados estaticamente
pelo programa
* 'std::runtime_error': Representa os erros que ocorrem durante a execução de um
programa

Aqui está um exemplo que mostra como usar exceções padrão:
*/

int divide(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("Divisão por zero!");
  }

  return a / b;
}

int main() {
  int num1, num2;

  std::cout << "Digite dois números para a divisão: ";
  std::cin >> num1 >> num2;

  try {
    int result = divide(num1, num2);
    std::cout << "O resultado é: " << result << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Erro: " << e.what() << std::endl;
  }

  return 0;
}

/*
Neste exemplo, modificamos a função 'divide' para lançar um 'std::runtime_error'
em vez de uma simples string
O bloco 'catch' agora captura exceções derivadas de 'std::exception' e usa a
função de membro 'what()' para exibir a mensagem de erro
*/
