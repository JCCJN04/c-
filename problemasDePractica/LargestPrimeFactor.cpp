#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<long long> P; // Vector para almacenar los factores primos

int main()
{
    long long tope = 600851475143LL; // Número que queremos factorizar

    // Iteramos sobre los números desde 2 hasta la raíz cuadrada de 'tope'
    for(long long n = 2; n * n <= tope; ++n)
    {
        // Mientras 'tope' sea divisible por 'n', lo dividimos y almacenamos 'n' como factor primo
        while(tope % n == 0)
        {
            P.push_back(n);
            tope /= n;
        }
    }
    
    // Si 'tope' es mayor que 1 al final, significa que es primo y lo almacenamos
    if(tope > 1)
        P.push_back(tope);

    // Imprimimos el factor primo más grande, que es el último elemento del vector 'P'
    cout << "El factor primo más grande de 600851475143 es: " << P.back() << endl;

    return 0;
}
