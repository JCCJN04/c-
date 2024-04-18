#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>

using namespace std;

bool sePuedeColocar(vector<vector<int>>& M, vector<int>& filas, int f, int c, int n)
{
    for (int i = 0; i < c; i++) // Evaluar la fila
        if (M[f][i] == 1)
            return false;
    for (int i = 1; f - i >= 0 && c - i >= 0; i++) // Diagonales
        if (M[f - i][c - i] == 1 || M[f + i][c - i] == 1)
            return false;
    return true;
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

        cout << diffmenor << endl;

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        double seconds = duration.count();

        std::cout << "Tiempo de ejecución: " << seconds << " segundos" << std::endl;
    }
}