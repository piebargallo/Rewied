/* Gestión manual de la memoria con new y delete. */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int N;
    cout << "Ingresa el tamaño del array: ";
    cin >> N;

    // Crear un array dinámico de enteros
    int* miArray = new int[N];

    // Inicializar los elementos del array (opcional)
    for (int i = 0; i < N; ++i) {
        miArray[i] = i + 1;
    }

    // Acceder a los elementos del array
    for (int i = 0; i < N; ++i) {
        cout << "Elemento " << i << ": " << miArray[i] << endl;
    }

    // Liberar la memoria
    delete[] miArray;

    return 0;
}
