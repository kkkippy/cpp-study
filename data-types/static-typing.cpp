#include <iostream>

/*
Em C++, a tipagem estática significa que o tipo de dado de uma variável é
determinado no momento da compilação, antes de o programa ser executado.
Isso significa que uma variável pode ser usada somente com dados de um
tipo específico, e o compilador garante que as operações realizadas
com a variável sejam compatíveis com seu tipo

C++ é uma linguagem estaticamente tipada, o que significa que ela usa a
tipagem estática para determinar os tipos de dados e realizar a verificação
de tipos durante o tempo de compilação
Isso ajuda a garantir a segurança do tipo e pode evitar a ocorrência de
determinados tipos de erros durante a execução do programa
*/

int main ()  {

    // Aqui está um exemplo:

    int num = 42;        // 'num' é tipado estaticamente como um inteiro
    double pi = 3.14159; // 'pi' é tipado estaticamente como um double

    num = pi;
    /*
    Essa atribuição causaria um erro de antes e durante o tempo de compilação,
    pois os tipos não correspondem
    */

    std::cout << "O valor de num é: " << num << std::endl;
    std::cout << "O valor de pi é: " << pi << std::endl;

    /*
    No código acima, a variável 'num' é estaticamente tipada com um int e pi
    é estaticamente tipada como um double
    Se você tentar atribuir o valor de 'pi' a 'num', receberá um erro antes e
    em tempo de compilação
    Isso ocorre porque o sistema de tipagem estática garante que as variáveis
    sejam usadas somente com tipos de dados compatíveis
    */

    return 0;
}