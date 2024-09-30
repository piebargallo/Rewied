#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "es-Es.utf8");
    std::string texto = "¡Hola, mundo!";
    std::string reemplazo = "universo";

    // Reemplazar "mundo" con "universo"
    texto.replace(8, 5, reemplazo);

    std::cout << "Texto modificado: " << texto << std::endl; // Salida: ¡Hola, universo!
    return 0;
}
