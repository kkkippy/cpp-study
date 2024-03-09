#include <iostream>

/*
Honestamente acho isso um pouco inútil, mas talvez
eu repense sobre isso futuramente, não é atoa que
existem arquivos de declaração TypeScript.
*/

int multiplyNumbers (int x, int y);

/*
Um protótipo de função é uma declaração da função sem seu corpo e informa
ao compilador o nome, o tipo de retorno e os parâmetros da função

Sendo assim, conseguimos chamar a função a partir da função principal,
mesmo que ela ainda não tenha sido definida no código
*/

int main () {
    int num1 = 3, num2 = 7;
    
    int result = multiplyNumbers(num1, num2);

    std::cout << "O produto de " << num1 << " e " << num2 << " é " << result << std::endl;

    return 0;
}

int multiplyNumbers (int x, int y) {
    int product = x * y;

    return product;
}