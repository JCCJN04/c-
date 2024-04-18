#include <iostream>
using namespace std;

// Función para calcular el número de arreglos
int contar_arreglos(int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 3;
    else
        return n * contar_arreglos(n - 1) + (n - 1) * contar_arreglos(n - 2);
}

int main() {
    int t;
    cin >> t; // Leer el número de casos de prueba

    // Procesar cada caso de prueba
    while (t--) {
        int n;
        cin >> n; // Leer el número de objetos para este caso de prueba
        int arreglos = contar_arreglos(n);
        cout << arreglos << endl;
    }

    return 0;
}
