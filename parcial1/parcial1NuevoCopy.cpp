#include <iostream> // juan carlos mendoza castillo 598701
#include <algorithm>
using namespace std;

bool contarNumeros(int arreglo[], int tamano, int numero)
{
    int contador = 0;
    for (int i = 0; i < tamano; ++i)
    {
        if (arreglo[i] == numero)
        {
            contador++;
            arreglo[i] = -1; // Marcar el número como ya contado
            return true;
        }
    }
    return false;
}

void ordenarArreglo(int arreglo[], int longitud)
{
    sort(arreglo, arreglo + longitud); // Utilizar la función sort de la biblioteca estándar
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        if (m == 0 && n == 0)
        {
            break;
        }
        if (1 <= m && n <= 1000000)
        {
            int h1[m], h2[n], listaRepetidos[m + n]; // Corrección en el tamaño del arreglo
            int cont = 0;                            // Inicializar contador de elementos repetidos
            for (int i = 0; i < m; i++)
            {
                cin >> h1[i];
            }
            for (int i = 0; i < n; i++)
            {
                cin >> h2[i];
            }

            for (int i = 0; i < n; i++)
            {
                if(contarNumeros(h1, m, h2[i])){
                    for(int j = 0; j < m+n; j++){
                        if(h2[i] == listaRepetidos[j])
                        {
                            break;
                        }
                        else if(j == m+n-1){
                            listaRepetidos[cont] = h2[i];
                            cont++;
                            break;
                        }
                    }
                }
            }

            if (cont == 0)
            {
                cout << ":)" << endl;
                cout << m + n << endl; // Todos los pacientes no tienen conflicto
            }
            else
            {
                ordenarArreglo(listaRepetidos, cont);
                for (int i = 0; i < cont; i++)
                {
                    cout << listaRepetidos[i] << " ";
                }
                cout << endl;
                cout << m - cont << endl; // Pacientes sin conflicto
            }
        }
    }
    return 0;
}