/*
O segmento de dados é composto de duas partes: o segmento de dados inicializados
e o segmento de dados não inicializados
O segmento de dados inicializados armazena variáveis globais, estáticas e
constantes com valores iniciais, enquanto o segmento não inicializado armazena
variáveis globais e estáticas não inicializadas
*/

// Segmento de dados inicializados
int globalVar = 10;
static int staticVar = 10;
const int constVar = 10;

// Segmento de dados não inicializados
int globalVar;