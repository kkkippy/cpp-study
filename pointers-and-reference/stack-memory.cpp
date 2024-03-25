/*
O modelo de memória em C++ define como o programa armazena e acessa os dados
na memória do computador
Ele consiste em diferentes segmentos, como os segmentos Stack (pilha),
Heap (pilha), Data (dados) e Code (código)
Cada um desses segmentos é usado para armazenar diferentes tipos de dados e
tem características específicas

A Stack Memory é usada para variáveis de duração de armazenamento automático,
como variáveis locais e dados de chamadas de função
A Stack Memory é gerenciada pelo compilador, e sua alocação e desalocação
são feitas automaticamente
A memória de pilha também é uma estrutura de dados LIFO (Last In First Out),
o que significa que os dados alocados mais recentemente são os primeiros a
serem desalocados
*/

void functionExample () {
    int x = 10; // 'x' é armazenado na stack memory
}