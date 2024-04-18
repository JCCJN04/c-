#include <iostream> //daniel alberto vazquez valadez 614331
#include <string> //juan carlos mendoza castillo 598701
using namespace std;

int main()
{
    int casos, pasos, posicion, suma = 0; // Se inicializa la variable suma en 0
    string instruccion, pasoAregresar; // Se inicializan las variables instruccion y pasoAregresar

    cin >> casos; // Se lee el número de casos
    for(int i = 0; i < casos; i++) // Se itera sobre el número de casos
    {
        cin >> pasos; // Se lee el número de pasos
        cin.ignore(); // Se ignora el salto de línea
        int p[pasos]; // Se declara un arreglo de tamaño pasos
        for(int j = 0; j < pasos; j++) // Se itera sobre el número de pasos
        {
            getline(cin, instruccion); // Se lee la instrucción
            if(instruccion == "ADELANTE") // Si la instrucción es ADELANTE
            {
                p[j] = 1; // Se asigna 1 a la posición j del arreglo p
            }
            {
                p[j] = 1; // Se asigna 1 a la posición j del arreglo p
            }
            if(instruccion == "ATRAS") // Si la instrucción es ATRAS
            {
                p[j] = -1; // Se asigna -1 a la posición j del arreglo p
            }
            if(instruccion != "ADELANTE" && instruccion != "ATRAS") // Si la instrucción no es ADELANTE ni ATRAS
            {
                pasoAregresar = instruccion.substr(9); // Se obtiene el número de la instrucción
                posicion = stoi(pasoAregresar); // Se convierte el número a entero
                p[j] = p[posicion - 1]; // Se asigna el valor de la posición posicion - 1 a la posición j del arreglo p
            }
            suma += p[j]; // Se suma el valor de la posición j del arreglo p a la variable suma
        }
        cout << suma << endl; // Se imprime la variable suma
    }
    return 0;
}
