#include <iostream>
#include <vector>
#include <map>
#include <chrono>
#include <algorithm>
using namespace std;
int M[15][15], Moriginal[15][15];
int n = 1, diff, soluciones = 0, diffmenor;

bool sePuedeColocar(int f, int c)
{
    for (int i = 0; i < c; i++) //evalua la fila
        if (M[f][i] == 1)
            return false;
    for (int i = 1; f - i >= 0 && c - i >= 0; i++) //Diagonal arriba
        if (M[f - i][c - i] == 1)
            return false;
    for (int i = 1; f + i < n && c - i >= 0; i++) //Diagonal abajo
        if (M[f + i][c - i] == 1)
            return false;
    return true;
}

void reinas(int col)
{
    if (col == n)
    {
        diff = 0; // Reiniciamos el contador de diferencias
        soluciones++;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                //cout << M[i][j] << " ";
                if (M[i][j] != Moriginal[i][j] && Moriginal[i][j] == 1)
                    diff++; // Contamos las diferencias
            }
            //cout << endl;
        }
        if (diff < diffmenor)
        {
            diffmenor = diff;
        }
        //cout << "Diferencias: " << diff << endl;
        return;
    }
    for (int fil = 0; fil < n; fil++)
    {
        if (sePuedeColocar(fil, col))
        {
            M[fil][col] = 1; //Poner reina
            reinas(col + 1);
            //   return true;
            //else
            M[fil][col] = 0; //Quitar reina
        }
    }
    return; //false;
}

int main()
{
    while(n != 0 && 1 <= n && n <= 15)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int columna;
            cin >> columna;
            Moriginal[columna - 1][i] = 1;
        }
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                //cout << Moriginal[i][j] << " ";
            }
            //cout << endl;
        }
        //cout << endl;
        diffmenor = n * n; // Inicializamos diffmenor con un valor grande
        reinas(0);
        //cout << "Diferencia menor: " << diffmenor << endl;
        cout << diffmenor << endl;
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        double seconds = duration.count();

        std::cout << "Tiempo de ejecución: " << seconds << " segundos" << std::endl;
    }
}