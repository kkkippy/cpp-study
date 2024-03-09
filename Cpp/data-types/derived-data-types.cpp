#include <iostream>

int main () {

    // TODO: Entender melhor sobre ponteiros e referência

    // Arrays
    /*
    Os arrays são usados para armazenar vários valores do mesmo tipo de dados
    em locais consecutivos da memória
    */

    int numeros[5] = { 1, 2, 3, 4, 5 };


    // Pointers
    /*
    Os ponteiros são usados para armazenar o endereço de memória de uma variável
    */

    int num1 = 42;
    int* pNum = &num1;


    // References
    /*
    As referências são uma forma alternativa de compartilhar locais de memória
    entre variáveis, permitindo que você crie um alias para outra variável
    */

    int num2 = 42;
    int& numRef = num2;

    return 0;
}