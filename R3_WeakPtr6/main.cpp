#include <iostream>
#include <memory>
using std::shared_ptr;
using std::make_shared;
using std::weak_ptr;
using std::cout;
using std::endl;

struct MiObjeto {
    int valor;
    MiObjeto(int v) : valor(v) {}
};

int main() {
    // Crear un shared_ptr para un objeto MiObjeto
    shared_ptr<MiObjeto> miSharedPtr = make_shared<MiObjeto>(42);

    // Crear un weak_ptr que comparte el mismo objeto
    weak_ptr<MiObjeto> miWeakPtr = miSharedPtr;

    // Acceder al valor a través del weak_ptr
    if (auto lockedSharedPtr = miWeakPtr.lock()) {
        std::cout << "Valor: " << lockedSharedPtr->valor << std::endl;
    }
    else {
        cout << "El objeto ya no existe." << endl;
    }

    // El objeto sigue existiendo debido al shared_ptr

    return 0;
}
