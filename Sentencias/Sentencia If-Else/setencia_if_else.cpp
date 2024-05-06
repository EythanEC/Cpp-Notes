/*
-La palabra clave if inicia la sentencia condicional y se evalúa la condición dentro de los paréntesis (). Si la condición es verdadera, se ejecuta el bloque de código dentro de las llaves {} que  sigue al if.
-Si la condición es falsa, se ejecuta el bloque de código dentro de las llaves {} que siguen al else.
-El bloque else es opcional y puede omitirse si solo quieres ejecutar código cuando la condición del if sea verdadera.

if (condición) {
    // Código a ejecutar si la condición es verdadera
} else {
    // Código a ejecutar si la condición es falsa
}
*/

#include <iostream>
using namespace std;
int main() {
    int edad;
    std::cout<<"Por favor, introduce tu edad: ";
    std::cin>>edad;

    if (edad >= 18) {
        std::cout << "Eres mayor de edad.\n";
    } else {
        std::cout << "Eres menor de edad.\n";
    }

    return 0;
}
