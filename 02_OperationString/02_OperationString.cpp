#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "es-Es.utf8");
    std::string texto = "¡Hola, mundo!";
    std::string subcadena = "mundo";

    // Buscar la subcadena "mundo" en el texto
    size_t posicion = texto.find(subcadena);

    // std::string::npos indica que la subcadena no se encontro
    if (posicion != std::string::npos) {
        std::cout << "Subcadena encontrada en la posición: " << posicion << std::endl;
    }
    else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    return 0;
}
