#include <iostream>
#include <vector>
#include <algorithm> 

//referencias
//https://www.geeksforgeeks.org/how-to-create-vector-of-pairs-in-cpp/
//https://cplusplus.com/reference/utility/make_pair/

using namespace std;

bool compararPorTiempoDeTarea(const pair<int, int>& a, const pair<int, int>& b) // Función para comparay y ordenar en función del tiempo de tarea
{
    return a.second > b.second; // Orden descendente según el tiempo de tarea
}

int main() 
{
    int N;
    while (cin >> N && N != 0)  // Leer el número de programadores hasta que sea 0
    {
        vector<pair<int, int>> programadores(N); //crear vector de pares para almacenar los datos de los programadores

        for(int i=0;i<N;i++) 
        {
            int I, T;
            cin>>I>>T; //pedir el tiempo de explicación y el tiempo de tarea
            programadores[i] = make_pair(I, T); //almacenar los datos en el vector de pares
        }

        sort(programadores.begin(), programadores.end(), compararPorTiempoDeTarea); // Ordenar el vector de programadores en función del tiempo de tarea

        int tiempoTotal=0; // Inicializar el tiempo total del proceso
        int tiempoExplicacion=0; // Inicializar el tiempo de explicación acumulado

        for(int i=0;i<N;i++) 
        {
            tiempoExplicacion += programadores[i].first; // sumar el tiempo de explicación del programador actual al tiempo de explicación acumulado
            tiempoTotal = max(tiempoTotal, tiempoExplicacion + programadores[i].second);// Calcular el tiempo total del proceso usando max que regresa el mayor de dos valores
        }
        cout << tiempoTotal << endl;
    }
    return 0;
}