/*
Argument Dependent Lookup (ADL) ou Koenig Lookup é um mecanismo em C++ que permite
que o compilador procure a função apropriada a ser chamada com base nos tipos de
argumentos fornecidos
Ele é particularmente útil ao usar funções ou operadores sobrecarregados em um
namespace

O ADL permite que o compilador encontre funções no mesmo namespace dos argumentos,
mesmo que a função não esteja declarada no ponto de uso ou no namespace fornecido
Isso é especialmente útil quando se trabalha com modelos ou programação genérica
*/


// Exemplo
/*
Considere o exemplo a seguir usando um namespace e 'operador<<()' sobrecarregado
*/

#include <iostream>

namespace MyNamespace
{
    class MyClass
    {
    public:
        int value;
    };

    std::ostream& operator << (std::ostream& os, const MyClass& obj)
    {
        os << "MyClass: " << obj.value;
        return os;
    }
}

int main ()
{
    MyNamespace::MyClass obj;
    obj.value = 42;

    using std::cout; // Necessário para usar 'cout' sem qualificá-lo totalmente
    
    cout << obj << std::endl; // O ADL é usado para encontrar corretamente o 'operador<<' sobrecarregado

    return 0;
}

/*
Neste exemplo, quando você chama 'cout << obj;' em 'main()', o ADL é usado para localizar o 'operador<<()' correto
no namespace 'MyNamespace' porque o argumento 'obj' é do tipo 'MyNamespace::MyClass'
*/