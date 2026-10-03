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
    std::cout << "numeros " << numero1 << ", " << numero2 << ", " << numero3 << "\n";
    return 0;
}