#include <iostream>
#include <memory>
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::endl;

int main() {
    // Crear un unique_ptr para un entero
    unique_ptr<int> miUniquePtr = make_unique<int>(42);

    // Acceder al valor a través del puntero
    cout << "Valor: " << *miUniquePtr << endl;

    // Liberar automáticamente la memoria cuando miUniquePtr se destruye

    return 0;
}
