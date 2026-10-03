#include <iostream>

#include "utilerias.h"

int main() {
    double numero1 = 0.0;
    double numero2 = 0.0;
    double numero3 = 0.0;

    std::cout << "Bienvenido a mi programa\n";

    numero1 = leerDecimal("Escribe el primer numero: ");
    numero2 = leerDecimal("Escribe el segundo numero: ");
    numero3 = leerDecimal("Escribe el tercer numero: ");

    if (numero1 >= numero2 && numero1 >= numero3) {
        std::cout << "El numero mayor es: " << numero1 << "\n";
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        std::cout << "El numero mayor es: " << numero2 << "\n";
    } else {
        std::cout << "El numero mayor es: " << numero3 << "\n";
    }

    return 0;
}