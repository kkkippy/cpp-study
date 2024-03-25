#include <iostream>

/*
Uma referência é um alias para uma variável existente, o que significa
que é um nome diferente para o mesmo local de memória
Ao contrário dos ponteiros, as referências não podem ser nulas e devem
ser inicializadas quando são declaradas
Depois que uma referência é inicializada, ela não pode ser alterada para
se referir à outra variável

Este é o formato geral para declarar uma referência:
dataType &referenceName = variavelExistente;
*/

int main () {
    int num = 10;
    int& ref = num;

    /*
    A modificação do valor 'ref' também modificará o valor de 'num', pois
    eles compartilham o mesmo local de memória

    * NOTE - As referências são geralmente usadas quando você deseja
    passar uma variável por referência em argumentos de função ou quando
    deseja criar um alias para uma variável sem a necessidade da sintaxe
    de ponteiro
    */

    return 0;
}