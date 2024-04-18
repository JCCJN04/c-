#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>

using namespace std;

bool sePuedeColocar(vector<vector<int>>& M, vector<int>& filas, int f, int c, int n)
{
    for (int i = 0; i < c; i++) // Evaluar la fila
        if (M[f][i] == 1) // Si hay una reina en la fila
            return false; // No se puede colocar
    for (int i = 1; f - i >= 0 && c - i >= 0; i++) // Evaluar la diagonal arriba
        if (M[f - i][c - i] == 1 || M[f + i][c - i] == 1) // Si hay una reina en la diagonal
            return false; // No se puede colocar
    return true; // Se puede colocar si no hay reinas en la fila ni en la diagonal
}

void imprimirTablero(const vector<vector<int>>& M)
{
    int n = M.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] == 1)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    while (cin >> n && n != 0 && (1 <= n && n <= 15))
    {
        vector<vector<int>> M(n, vector<int>(n, 0));
        vector<int> filas(n, 0);
        vector<int> columnas(n, 0);
        vector<int> diagonal1(2 * n - 1, 0);
        vector<int> diagonal2(2 * n - 1, 0);

        for (int i = 0; i < n; i++)
        {
            int columna;
            cin >> columna;
            M[columna - 1][i] = 1;
            filas[i] = columna - 1;
            columnas[columna - 1] = 1;
            diagonal1[i + columna - 1] = 1;
            diagonal2[n - 1 - i + columna - 1] = 1;
        }

        auto start = std::chrono::high_resolution_clock::now();

        int soluciones = 0;
        for (int col = 0; col < n; col++)
        {
            if (sePuedeColocar(M, filas, filas[col], col, n))
            {
                soluciones++;
            }
        }

        int diffmenor = n - soluciones;

        cout << "Diferencia menor: " << diffmenor << endl;
        imprimirTablero(M);

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        double seconds = duration.count();

        std::cout << "Tiempo de ejecución: " << seconds << " segundos" << std::endl;
    }
}
