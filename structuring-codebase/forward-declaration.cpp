/*
A Forward Declaration (declaração direta) é uma forma de declarar um símbolo
(classe, função ou variável) antes de defini-lo no código
Ela ajuda o compilador a entender o tipo, o tamanho e a existência do símbolo
Essa declaração é particularmente útil quando temos dependências cíclicas ou
para reduzir o tempo de compilação, evitando inclusões desnecessárias de
cabeçalhos no arquivo de origem
*/

// 1. Class Forward Declaration
/*
Para usar um tipo de classe antes que ele seja definido, você pode declarar a classe
sem definir seus membros, da seguinte forma:
*/

class ClassA; // Declaração direta

/*
Em seguida, você pode usar ponteiros ou referências à classe em seu código antes
de definir a própria classe:
*/

void do_something (ClassA& obj);

class ClassB
{
    public:
        void another_function (ClassA& obj);
};

/*
No entanto, se você tentar criar um objeto de 'ClassA' ou chamar suas funções de
membro sem definir a classe, receberá um erro de compilação
*/


// 2. Function Forward Declaration
/*
As funções devem ser declaradas antes de serem usadas, e uma declaração direta pode
ser usada para declarar uma função sem defini-la:
*/

int add (int a, int b); // Declaração direta

int main ()
{
    int result = add(2, 3);

    return 0;
}

int add (int a, int b)
{
    return a + b;
}


// 3. Declaração de Enum e Typedef Forward
/*
Para 'enum' e 'typedef', não é possível encaminhar a declaração porque eles não têm
estágios separados de declaração e definição

Lembre-se de que as declarações antecipadas devem ser usadas com cautela, pois
podem tornar o código mais difícil de entender
*/