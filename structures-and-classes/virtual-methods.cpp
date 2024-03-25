/*
Os métodos virtuais são um aspecto fundamental do polimorfismo dinâmico em C++
Eles permitem que os métodos da subclasse substituam os métodos de sua classe base,
de modo que o método apropriado seja chamado dependendo do tipo real de um objeto
em tempo de execução

Para declarar um método virtual, basta usar a keyword 'virtual' na declaração do
método na classe base
Isso informa ao compilador que o método deve ser tratado como um método virtual,
permitindo que ele seja substituído por classes derivadas
*/

#include <iostream>

// Classe base
class Shape
{
public:
    virtual double area () const
    {
        return 0;
    }
};

// Classe derivada 1
class Circle : public Shape
{
public:
    Circle (double r) : radius (r) {}

    // Substitui o método da classe base
    double area () const override
    {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

// Classe derivada 2
class Rectangle : public Shape
{
public:
    Rectangle (double w, double h) : width(w), height(h) {}

    // Substitui o método da classe base
    double area () const override
    {
        return width * height;
    }

private:
    double width;
    double height;
};

int main ()
{
    Circle c(5);
    Rectangle r(4, 6);

    Shape* shape = &c;
    std::cout << "Área do círculo: " << shape -> area() << std::endl;

    shape = &r;
    std::cout << "Área do retângulo: " << shape -> area() << std::endl;

    return 0;
}

/*
Neste exemplo, definimos uma classe base 'Shape' que tem um método virtual 'area'
Esse método é então substituído pelas classes derivadas 'Circle' e 'Rectangle'
Ao usar um método virtual e um ponteiro da classe base para os objetos derivados,
podemos invocar o método de área apropriado com base no tipo de objeto real em
tempo de execução
*/