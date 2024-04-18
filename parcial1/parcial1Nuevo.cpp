#include <iostream> // juan carlos mendoza castillo 598701
#include <algorithm>
using namespace std;

int contarNumeros(int arreglo[], int tamano, int numero) {
    int contador = 0;
    for (int i = 0; i < tamano; ++i) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }
    return contador;
}

void ordenarArreglo(int arreglo[], int longitud) {
    sort(arreglo, arreglo + longitud); // Utilizar la función sort de la biblioteca estándar
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        if (m == 0 && n == 0) {
            break;
        }
        if (1 <= m && n <= 1000000) {
            int h1[m], h2[n], listaRepetidos[m + n]; // Corrección en el tamaño del arreglo
            int cont = 0; // Inicializar contador de elementos repetidos
            for(int i = 0; i < m; i++) 
            {
                cin >> h1[i];
            }
            for(int i = 0; i < n; i++) 
            {
                cin >> h2[i];
                if (contarNumeros(h1, m, h2[i]) > 0) 
                {
                    listaRepetidos[cont++] = h2[i]; // Incrementar el contador al agregar un elemento repetido
                }
            }

            if (cont == 0) 
            {
                cout << ":)" << endl;
                cout << m + n << endl; // Todos los pacientes no tienen conflicto
            } else {
                ordenarArreglo(listaRepetidos, cont);
                for (int i = 0; i < cont; i++) {
                    cout << listaRepetidos[i] << " ";
                }
                cout << endl;
                cout << m - cont << endl; // Pacientes sin conflicto
            }
        }
    }
    return 0;
}