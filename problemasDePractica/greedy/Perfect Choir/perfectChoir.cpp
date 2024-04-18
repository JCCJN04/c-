#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    int cantidad, valor;
    while (cin >> cantidad) 
    {
        vector<int> miembros;
        int suma = 0;
        for (int i = 0; i < cantidad; i++) 
        {
            cin >> valor;
            miembros.push_back(valor);
            suma += valor;
        }
        if (suma % cantidad == 0) 
        {
            // Resultado óptimo es desplazar a todos hacia la media
            int promedio = suma / cantidad;
            int error = 0;
            for (int i = 0; i < cantidad; i++)
                error += abs(promedio - miembros[i]);
            cout << 1 + error / 2 << endl;
        } else
            cout << "-1" << endl;
    }
    return 0;
}
