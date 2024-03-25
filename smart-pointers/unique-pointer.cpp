
// TODO: Entender sobre os smart pointers

/*
'std::unique_ptr' é um ponteiro inteligente fornecido pela Standard Lib do C++
É uma classe modelo usada para gerenciar objetos únicos ou matrizes

O 'unique_ptr' funciona com base no conceito de *propriedade exclusiva*, o que
significa que somente um 'unique_ptr' pode ser proprietário de um objeto por
vez
Essa propriedade pode ser transferida ou movida, mas não pode ser compartilhada
ou copiada

Esse conceito ajuda a evitar problemas como ponteiros pendentes, reduz vazamentos
de memória e elimina a necessidade de gerenciamento manual de memória
quando o 'unique_ptr' sai do escopo, ele exclui automaticamente o objeto que possui

Vamos dar uma olhada em alguns exemplos básicos do uso do 'unique_ptr':
*/


#include <iostream>
#include <memory>

// 1. Criando um 'unique_ptr'
// int main () {
//     std::unique_ptr<int> p1(new int(5));
//     std::unique_ptr<int> p2 = std::make_unique<int>(10);

//     std::cout << *p1 << ", " << *p2 << std::endl;

//     return 0;
// }


// 2. Transferência de propriedade
// int main ()
// {
//     std::unique_ptr<int> p1(new int(5));

//     std::unique_ptr<int> p2 = std::move(p1);
    
//     if (p1)
//     {
//         std::cout << "p1 possui o objeto" << std::endl;
//     }
//     else if (p2)
//     {
//         std::cout << "p2 possui o objeto" << std::endl;
//     }
// }

// 3. Uso de 'unique_ptr' com Deleters personalizados
struct MyDeleter {
    void operator () (int* ptr) {
        std::cout << "Custom Deleter: Deletando ponteiro" << std::endl;
        delete ptr;
    }
};

int main () {

    std::unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());

    return 0; // O Custom Deleter será chamado quando p1 sair do escopo
}

/*
Lembre-se de que, como o 'unique_ptr' tem propriedade exclusiva, você não pode
usá-lo quando precisar de acesso compartilhado a um objeto
Para esses casos, você pode usar 'std::shared_ptr'
*/