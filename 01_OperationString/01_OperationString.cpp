#include <iostream>
#include <string>

int main() {
    std::string texto = "¡Hola, mundo!";
    // Extraer una subcadena desde la posición 8 con una longitud de 5 caracteres
    std::string subcadena = texto.substr(8, 5);
    std::cout << "Subcadena: " << subcadena << std::endl; // Salida: mundo
    return 0;
}
