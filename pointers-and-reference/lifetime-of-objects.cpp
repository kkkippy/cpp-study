/*
A vida útil de um objeto refere-se ao tempo durante o qual um objeto existe,
desde o momento em que é criado até o momento em que ele é destruído

Em C++, o tempo de vida de um objeto pode ser classificado em quatro categorias:
*/

// 1. Static Storage Duration
/*
Os objetos com duração de armazenamento estático existem durante toda a execução
do programa
Esses objetos são alocados no início da execução do programa e desalocados
quando o programa é encerrado
as variáveis globais, os membros de dados estáticos e as variáveis locais estáticas
se enquadram nessa categoria
*/

int global_var;

class MyClass {
    static int static_var;
};

void myFunction () {
    static int local_var;
}


// 2. Thread Storage Duration
/*
Os objetos com duração de armazenamento de thread existem durante o tempo de vida
do thread ao qual pertencem
Eles são criados quando um thread é iniciado e destruídos quando o thread é
encerrado
A duração do armazenamento de thread pode ser especificada quando usando a
palavra-chave 'thread_local'
*/

thread_local int my_var;


// 3. Automatic Storage Duration
/*
Os objetos com duração de armazenamento automático são criados no momento da
definição e destruídos quando o escopo no qual foram declarados é encerrado
Esses objetos são conhecidos como objetos "locais" ou de "pilha"
Os parâmetros de função e as variáveis locais não estáticas se enquadram nessa categoria
*/

void myFunction () {
    int local_var;       // Duração de armazenamento automático
}


// 4. Dynamic Storage Duration
/*
Os objetos com duração de armazenamento dinâmico são criados em runtime, usando
funções de alocação de memória, como 'new' ou 'malloc'
A vida útil (lifetime) desses objetos deve ser gerenciada manualmente, pois eles
não são desalocados automaticamente quando o escopo é encerrado
Em vez disso, é responsabilidade do programador destruir os objetos usando as
funções 'delete' ou 'free' quando eles não forem mais necessários, para evitar
vazamentos de memória
*/

int main () {

    int* ptr = new int;
    delete ptr;

    return 0;
}

/*
Entender a vida útil dos objetos é essencial para gerenciar a memória de forma
eficiente em programas C++ e evitar problemas comuns, como vazamentos de memória
e comportamento indefinido

Lembre-se de que o entendimento adequado dos construtores e destruídores de classes
também é essencial ao trabalhar com objetos de diferentes tempos de vida, pois eles
permitem controlar o comportamento de criação e destruição de objetos
*/