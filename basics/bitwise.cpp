#include <iostream>

// Operações bit a bit (bitwise)

/*
São operações que manipulam diretamente os bits de um número
As operações bit a bit (bitwise) são úteis para várias finalidades,
como otimização de algoritmos, execução de determinados cálculos
e manipulação de memória em linguagens de programação de nível
inferior, como C e C++
*/

int main () {
    
    // Bitwise AND (`&`)
    /*
    A operação AND bit a bit (&) é uma operação binária que pega dois números,
    compara-os bit a bit e retorna um novo número em que cada bit é definido (1)
    se os bits correspondentes em ambos os números de entrada estiverem definidos (1),
    caso contrário, o bit é desfeito (0).

    No meu entendimento:
    se os bits correspondentes forem definidos (1), então 
    */

    int bitwiseAnd = 5 & 3; // o resultado será 1 (0000 0101 & 0000 0011 = 0000 0001)

    std::cout << bitwiseAnd << std::endl;

    // Bitwise OR (`|`)
    /*
    A operação OR bit a bit (|) é uma operação binária que pega dois números,
    compara-os bit a bit e retorna um novo número em que cada bit é definido (1)
    se pelo menos um dos bits correspondentes em um dos números de entrada for
    definido (1), caso contrário, o bit é desfeito (0)

    No meu entendimento:
    se um dos bits correspondente for definido (1), então 1 será definido neste bit
    */
    int bitwiseOr = 5 | 3; // o resultado será 7 (0000 0101 | 0000 0011 = 0000 0111)

    std::cout << bitwiseOr << std::endl;

    // Bitwise XOR (`^`)
    /*
    A operação XOR (OR exclusivo) bit a bit (^) é uma operação binária que pega
    dois números, compara-os bit a bit e retorna um novo número em que cada bit
    é definido (1) se os bits correspondentes nos números de entrada forem
    diferentes, caso contrário, o bit é desfeito (0)

    No meu entendimento:
    se o bit correspondente for diferente, então 1 será definido no lugar,
    mas se forem iguais, 0 será definido neste bit
    */

    int bitwiseXor = 5 ^ 3; // o resultado será 6 (0000 0101 ^ 0000 0011 = 0000 0110)

    std::cout << bitwiseXor << std::endl;

    // Bitwise NOT (`~`)
    /*
    A operação NOT bit a bit (~) é uma operação unária que recebe um único
    número e retorna um novo número em que cada bit é invertido (1 se torna 0
    e 0 se torna 1)

    No meu entendimento:
    não é difícil de entender, é como se fosse o operador lógico NOT, que
    inverte o valor do operando
    */

    int bitwiseNot = ~5; // o resultado será -6 (1111 1010)

    std::cout << bitwiseNot << std::endl;
    
    // Bitwise Left Shift (`<<`)
    /*
    A operação de deslocamento à esquerda bit a bit (<<) é uma operação
    binária que recebe dois números, um valor e uma quantidade de
    deslocamento, e retorna um novo número deslocando os bits do valor
    para a esquerda pela quantidade de deslocamento especificada
    Os bits vazios são preenchidos com zeros

    No meu entendimento:
    desloca todos os bits à esquerda, preenchendo o valor vazio com 0
    */

    int bitwiseLeftShift = 5 << 1; // o resultado será 10 (0000 0101 << 1 = 0000 1010)

    std::cout << bitwiseLeftShift << std::endl;

    // Bitwise Right Shift (`>>`)
    /*
    A operação de deslocamento à direita bit a bit (>>) é uma operação binária
    que recebe dois números, um valor e uma quantidade de deslocamento, e retorna
    um novo número deslocando os bits do valor para a direita pela quantidade
    de deslocamento especificada
    Os bits vazios são preenchidos com zeros ou com um bit de sinal
    */

    int bitwiseRightShift = 5 >> 1; // o resultado será 2 (0000 0101 >> 1 = 0000 0010)

    std::cout << bitwiseRightShift << std::endl;

    

    return 0;
}