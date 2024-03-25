#include <iostream>

// TODO: Entender tudo sobre RTTI

class Base { virtual void dummy () {} };
class Derived1 : public Base {};
class Derived2 : public Base {};

int main () {
    
    Base* base_ptr = new Derived1;

    Derived1* derived1_ptr = dynamic_cast<Derived1*>(base_ptr);

    if (derived1_ptr) {
        std::cout << "Downcast to Derived1 successful\n";
    }
    else {
        std::cout << "Downcast to Derived1 failed\n";
    }

    Derived2* derived2_ptr = dynamic_cast<Derived2*>(base_ptr);

    if (derived2_ptr) {
        std::cout << "Downcast to Derived2 successful\n";
    }
    else {
        std::cout << "Downcast to Derived2 failed\n";
    }

    /*
    * NOTE - Observe que o uso da RTTI pode ter algum custo adicional de
    desempenho pois exige que informações adicionais pelo computador sejam
    armazenadas e processadas durante o runtime
    */

    delete base_ptr;

    return 0;
}