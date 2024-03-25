#include <iostream>

/*
Uma referência pode ser considerada um ponteiro constante (que não deve
ser confundido com um ponteiro para um valor constante) que sempre aponta
(faz referência) para o mesmo objeto
Elas são declaradas usando o símbolo & (ampersand)
*/

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {

    // 1. Declaração e inicialização
    int var = 10;      // Declara uma variável inteira
    int& ref = var;    // Declara uma referência que "aponta para" var

    // 2. Uso
    /*
    Você pode usar a referência da mesma forma que usaria a variável
    original
    Quando você altera o valor da referência, o valor da variável original
    também é alterado, pois ambas compartilham o mesmo local de memória
    */

    var = 20;

    std::cout << ref << std::endl;

    ref = 30;

    std::cout << var << std::endl << std::endl;;

    // 3. Parâmetros de função
    /*
    Você pode usar referências como parâmetros de função para criar um alias
    para um argumento
    Isso geralmente é feito quando você precisa modificar a variável original
    ou quando passa um objeto de tamanho considerável para evitar o custo da
    cópia
    */

    int x = 5, y = 10;

    std::cout << "Antes da troca: x = " << x << " y = " << y << std::endl;
    // saída: x = 5 y = 10

    swap(x, y);

    std::cout << "Depois da troca: x = " << x << " y = " << y << std::endl;
    // saída: x = 10 y = 5

    return 0;
}