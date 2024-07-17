#include <iostream>
#include <memory>
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

struct MiObjeto {
    int valor;
    MiObjeto(int v) : valor(v) {}
};

int main() {
    // Crear un shared_ptr para un objeto MiObjeto
    shared_ptr<MiObjeto> miSharedPtr = make_shared<MiObjeto>(42);

    // Acceder al valor a través del puntero
    cout << "Valor: " << miSharedPtr->valor << endl;

    // Compartir el objeto con otro shared_ptr
    shared_ptr<MiObjeto> otroSharedPtr = miSharedPtr;

    // Ambos shared_ptr comparten el mismo objeto

    return 0;
}
