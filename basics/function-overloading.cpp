/*
O C++ permite que você especifique mais de uma função com o mesmo nome no mesmo
escopo
Essas funções são chamadas de funções sobrecarregadas (overloaded functions), ou
sobrecargas (overloads)
As overloaded functions permitem que você forneça semânticas diferentes para uma
função, dependendo dos tipos e do número de seus argumentos

Por exemplo, considere uma função 'print' que recebe um argumento do tipo
std::string
Essa função pode executar tarefas muito diferentes de uma função que recebe
um argumento do tipo 'double'
O overloading evita que você tenha de usar nomes como 'print_string' ou
'print_double'
No momento da compilação, o compilador escolhe o overload a ser usado com base
nos tipos e no número de argumentos passados pelo chamador
Se você chamar 'print(42.0)', a função 'void print(double d)' será chamada
Se você chamar 'print("hello world")', será chamado o overload
'void print(std::string)'

Você pode sobrecarregar as funções de membro e as funções livres
A tabela a seguir mostra quais partes de uma declaração de função o C++
usa para diferenciar entre grupos de funções com o mesmo nome no mesmo escopo

+-------------------------------------------------------------------------+
|    Function declaration element    |       Used for overloading?        |
|------------------------------------|------------------------------------|
|   Function return type             |   No                               |
|------------------------------------|------------------------------------|
|   Number of arguments              |   Yes                              |
|------------------------------------|------------------------------------|
|   Type of arguments                |   Yes                              |
|------------------------------------|------------------------------------|
|   Presence or abscence of elipsis  |   Yes                              |
|------------------------------------|------------------------------------|
|   Use of 'typedef' names           |   No                               |
|------------------------------------|------------------------------------|
|   Unspecified array bounds         |   No                               |
|------------------------------------|------------------------------------|
|   'const' or 'volatile'            |   Yes, when applied to entire func.|
|------------------------------------|------------------------------------|
|   Reference qualifiers (& and &&)  |   Yes                              |
+-------------------------------------------------------------------------+

*/

// TODO: Compreender o código fornecido pela Microsoft

#include <iostream>
#include <math.h>
#include <string>

// Prototype three print functions.
int print(std::string s);           // Print a string.
int print(double dvalue);           // Print a double.
int print(double dvalue, int prec); // Print a double with a given precision.

using namespace std;

int main(int argc, char *argv[])
{
    const double d = 893094.2987;
    if (argc < 2)
    {
        // These calls to print invoke print( char *s ).
        print("This program requires one argument.");
        print("The argument specifies the number of");
        print("digits precision for the second number");
        print("printed.");
        exit(0);
    }

    // Invoke print( double dvalue ).
    print(d);

    // Invoke print( double dvalue, int prec ).
    print(d, atoi(argv[1]));
}

// Print a string.
int print(string s)
{
    cout << s << endl;
    return cout.good();
}

// Print a double in default precision.
int print(double dvalue)
{
    cout << dvalue << endl;
    return cout.good();
}

//  Print a double in specified precision.
//  Positive numbers for precision indicate how many digits
//  precision after the decimal point to show. Negative
//  numbers for precision indicate where to round the number
//  to the left of the decimal point.
int print(double dvalue, int prec)
{
    // Use table-lookup for rounding/truncation.
    static const double rgPow10[] = {
        10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1,
        10E0, 10E1, 10E2, 10E3, 10E4, 10E5, 10E6};
    const int iPowZero = 6;

    // If precision out of range, just print the number.
    if (prec < -6 || prec > 7)
    {
        return print(dvalue);
    }
    // Scale, truncate, then rescale.
    dvalue = floor(dvalue / rgPow10[iPowZero - prec]) *
             rgPow10[iPowZero - prec];
    cout << dvalue << endl;
    return cout.good();
}