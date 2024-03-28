/*
Os macros são diretivas de pré-processamento em C++ usadas pelo pré-processador para realizar a substituição de texto
Elas são definidas usando a diretiva '#define', seguida do nome do macro e do valor a ser substituído

Os macros podem ser usados para definir constantes, criar macros semelhantes a funções ou realizar compilação
condicional
*/

// 1. Macros Constantes (Constant Macros)
/*
Os macros constantes são usados para definir constantes simbólicas para uso no código
Elas não usam nenhuma memória e são substituídas pelo pré-processador antes do processo de compilação

Exemplo:
*/

#define PI 3.14159
// Esse macro define uma constante simbólica 'PI'
// Você pode usá-la em seu código como se fosse uma variável normal


// 2. Macros do tipo função (Function-like Macros)
/*
Os macros do tipo função são semelhantes às funções regulares
Elas recebem uma lista de argumentos e executam a substituição de texto

Exemplo:
*/

#define SQUARE(x) ((x) * (x))
// Esse macro define um macro semelhante à função 'SQUARE' que calcula o quadrado de um número


// 3. Compilação Condicional (Conditional Compilation)
/*
Os macros podem ser usados para compilação condicional usando as diretivas '#ifdef', '#if', '#else', '#elif', '#endif'

Exemplo:
*/

#define DEBUG_MODE

#ifdef DEBUG_MODE
    // Código a ser compilado somente no modo de depuração
#else
    // Código a ser compilado somente se DEBUG_MODE não estiver definido
#endif

int main ()
{
    // 1.
    int radius = 10;

    double circumference = 2 * PI * radius;

    
    // 2.
    int square_of_five = SQUARE(5); // expande para ((5) * (5))

    return 0;
}

/*
Este exemplo demonstra como você pode usar macros para controlar as partes do código que estão sendo compiladas,
dependendo da presença ou ausência de uma definição de macro
*/