// TODO: Entender melhor sobre Vtables

/*
As Virtual Tables (ou VTable) são um mecanismo usado pelos compiladores C++ para dar
suporte ao polimorfismo dinâmico, a função apropriada é chamada em runtime, dependendo
do tipo de objeto real

Quando uma classe contém uma função virtual, o compilador cria uma tabela virtual para
essa classe
Essa tabela contém ponteiros de função para as funções virtuais definidas na classe
Cada objeto dessa classe tem um ponteiro para sua tabela virtual (vptr, ponteiro virtual),
que é automaticamente inicializado pelo compilador durante a construção do objeto
*/

#include <iostream>

class Base
{
public:
    virtual void function1 ()
    {
        std::cout << "Base::function1" << std::endl;
    }
    
    virtual void function2 ()
    {
        std::cout << "Base::function2" << std::endl;
    }
};

class Derived : public Base
{
public:
    void function1 () override
    {
        std::cout << "Derived::function1" << std::endl;
    }

    void function3 ()
    {
        std::cout << "Derived::function2" << std::endl;
    }
};

int main ()
{
    Base* obj = new Derived();
    // Cria um objeto 'Derived' e atribui um ponteiro do tipo Base*
    
    obj -> function1(); // Chama Derived::function1, devido ao polimorfismo dinâmico
    obj -> function2(); // Chama Base::function2

    delete obj;

    return 0;
}

/*
Neste exemplo, quando um objeto 'Derived' é criado, o compilador gera uma Vtable para a
classe 'Derived', contendo ponteiros para suas funções virtuais:

* 'Derived::function1' (sobrescrito de 'Base')
* 'Base::function2' (herdado de 'Base')

O ponteiro '_vptr_' no objeto 'Derived' aponta para essa Vtable
Quando a 'function1' é chamada no ponteiro 'Base' que aponta para o objeto 'Derived', o
ponteiro de função na Vtable é usado para chamar a função correta (nesse caso,
'Derived::function1')
Da mesma forma, a chamada para 'function2' chama 'Base::function2', pois é o ponteiro de
função armazenado na Vtable para a classe 'Derived'

Observe que 'function3' não faz parte da Vtable, pois não é uma função virtual
*/