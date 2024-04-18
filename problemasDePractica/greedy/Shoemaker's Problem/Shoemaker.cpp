#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Función de comparación personalizada para ordenar los trabajos
bool compararTrabajos(const pair<int, int>& a, const pair<int, int>& b) {
    return (a.first * b.second) < (b.first * a.second);
}

int main() {
    int t;
    cin >> t;

    for (int caso = 0; caso < t; caso++) {
        int n;
        cin >> n;
        vector<pair<int, int>> trabajos(n);
        vector<int> indices(n);

        // Leer los trabajos y almacenarlos en el vector
        for (int i = 0; i < n; i++) {
            int tiempo, multa;
            cin >> tiempo >> multa;
            trabajos[i] = make_pair(tiempo, multa);
            indices[i] = i + 1; // Guardar el índice original
        }

        // Ordenar los índices en función de los trabajos utilizando la función de comparación personalizada
        stable_sort(indices.begin(), indices.end(), [&](int a, int b) {
            return compararTrabajos(trabajos[a - 1], trabajos[b - 1]);
        });

        // Imprimir el orden de los trabajos utilizando los índices ordenados
        for (int i = 0; i < n; i++) {
            cout << indices[i];
            if (i != n - 1) {
                cout << " ";
            }
        }

        if (caso != t - 1) {
            cout << endl << endl; // Agregar una línea en blanco si no es el último caso
        }
    }

    return 0;
}
