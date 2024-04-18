#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool busquedaEnProfundidad(vector<int>& numeros, int indice, int valor) 
{
    if(indice == 5) 
    {
        return valor == 23;
    }
    // Sumar el número actual
    if (busquedaEnProfundidad(numeros, indice + 1, valor + numeros[indice])) 
    {
        return true;
    }
    // Restar el número actual
    if (busquedaEnProfundidad(numeros, indice + 1, valor - numeros[indice])) 
    {
        return true;
    }
    // Multiplicar el número actual
    if (busquedaEnProfundidad(numeros, indice + 1, valor * numeros[indice]))
    {
        return true;
    }
    return false;
}

int main() 
{
    int a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e) 
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
        {
            break;
        } 
        vector<int> numeros = {a, b, c, d, e};
        sort(numeros.begin(), numeros.end());

        bool posible = false;
        do 
        {
            if (busquedaEnProfundidad(numeros, 1, numeros[0]))
            {
                posible = true;
                break;
            }
        }while(next_permutation(numeros.begin(), numeros.end()));
        if(posible) 
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }


    }
    return 0;
}