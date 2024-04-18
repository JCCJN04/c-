#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numColonias = 0;
int f = 0, c = 0;
char imagen[150][150]; //tamaño de arreglo maximo

bool dentroLimites(int fila, int columna)
{
    if(fila >= 0 && fila < f && columna >= 0 && columna < c)
    {
        return true;
    }
    return false;

}

void explorarHormigasAdyacentes(int fila, int columna) 
{
    if (imagen[fila][columna] == '@')
    {
        imagen[fila][columna] = '*';
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (dentroLimites(fila + i, columna + j))
                {
                    explorarHormigasAdyacentes(fila + i, columna + j);
                }
            }
        }
    }
}

int main() 
{
    int k;
    cin >> k;
    for (int i=0;i<k;i++) 
    {
        cin >> f >> c;
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> imagen[i][j];
            }
        }
        // Count colonies
        numColonias = 0;
        for (int fila = 0; fila < f; fila++) {
            for (int columna = 0; columna < c; columna++) {
                if (imagen[fila][columna] == '@') {
                    numColonias++;
                    explorarHormigasAdyacentes(fila, columna);
                }
            }
        }
        cout << numColonias << endl;
    }
    return 0;
}
