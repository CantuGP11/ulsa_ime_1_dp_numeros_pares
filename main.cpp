#include <iostream>
using namespace std;

int main() {
    int numero;
    int pares[5];
    int totalPares = 0;
    int contador = 0;
    int cantidad = 5;

    // Mientras contador < cantidad
    while (contador < cantidad) {

        // Pedir número
        cout << "Ingresar numero: ";
        cin >> numero;

        // Si el número es par
        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares = totalPares + 1;
        }

        contador = contador + 1;
    }

    // Mostrar los números pares
    int i = 0;

    while (i < totalPares) {
        cout << pares[i] << endl;
        i = i + 1;
    }

    return 0;
}