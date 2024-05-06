/*
Para realizar una serie de evaluaciones condicionales consecutivas, puedes utilizar la estructura de la sentencia if-else if-else en C++

if (condición_1) {
    // Código a ejecutar si la condición_1 es verdadera
} else if (condición_2) {
    // Código a ejecutar si la condición_1 es falsa y la condición_2 es verdadera
} else if (condición_3) {
    // Código a ejecutar si la condición_1 y la condición_2 son falsas y la condición_3 es verdadera
} else {
    // Código a ejecutar si todas las condiciones anteriores son falsas
}
*/
#include <iostream>
using namespace std;
int main() {
    int numero;
    std::cout << "Por favor, introduce un número: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El número es positivo.\n";
    } else if (numero < 0) {
        std::cout << "El número es negativo.\n";
    } else {
        std::cout << "El número es cero.\n";
    }

    return 0;
}
/*
Sin embargo, si prefieres usar elif por motivos de legibilidad o consistencia con otros lenguajes de programación, puedes lograrlo utilizando 
una directiva de preprocesador como #define. Aquí tienes un ejemplo de cómo podrías hacerlo:
#include <iostream>

// Definimos una directiva de preprocesador para "elif"
#define elif else if

int main() {
    int numero;
    std::cout << "Por favor, introduce un número: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El número es positivo.\n";
    } elif (numero < 0) {  // Utilizamos elif en lugar de else if
        std::cout << "El número es negativo.\n";
    } else {
        std::cout << "El número es cero.\n";
    }

    return 0;
}

 */ 
