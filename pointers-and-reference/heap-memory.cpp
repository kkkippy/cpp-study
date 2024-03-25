/*
A Heap Memory é usada para variáveis de duração de armazenamento dinâmico,
como objetos criados usando a palavra-chave 'new'
O programador tem controle sobre a alocação e desalocação da memória
heap usando os operadores 'new' e 'delete'
A memória heap é um pool de memória maior do que a pilha, mas tem um tempo
de acesso mais lento
*/

void functionExample () {
    int* p = new int; // inteiro alocado dinamicamente na heap memory

    *p = 10;

    delete p; // desaloca a memória
}