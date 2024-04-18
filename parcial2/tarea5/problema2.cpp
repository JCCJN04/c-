#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
// Función para encontrar las combinaciones
void combinaciones(vector<int>& nodos, int valorObjetivo, int indice, vector<int>& combinacionActual, int sumaActual, bool& encontrado)
{
    if(sumaActual==valorObjetivo) // Si la suma actual es igual al valor objetivo
    {
       encontrado = true; 
       cout<<"{";
        for(int i=0;i<combinacionActual.size();i++)// Imprimir la combinación actual
        {
            if(i==combinacionActual.size()-1)
            {
                cout<<combinacionActual[i];
            }
            else
            {
                cout<<combinacionActual[i]<< ",";
            }
        }
        cout<<"}"<<endl;
    }
    for(int i=indice;i<nodos.size();i++) // Recorrer los nodos
    {
        if(sumaActual+nodos[i]<=valorObjetivo) // Si la suma actual más la capacidad del nodo actual es menor o igual al valor objetivo
        {
            combinacionActual.push_back(nodos[i]);// Agregar la capacidad del nodo actual a la combinación actual
            combinaciones(nodos,valorObjetivo,i+1,combinacionActual,sumaActual+nodos[i], encontrado);// Llamar recursivamente a la función con la suma actualizada
            combinacionActual.pop_back();// Eliminar el último elemento de la combinación actual
            while(i<nodos.size()-1&&nodos[i]==nodos[i+1])// Si el nodo actual es igual al siguiente nodo
            {
                i++;// Incrementar el índice
            }
        }
    }
}

int main() 
{
    while(true) 
    {
        string line;
        getline(cin, line);

        stringstream ss(line);

        int T,n; // T = valor a encontrar en la suma de combinaciones //n = cantidad de nodos
        ss>>T>>n;

        if(T==0&&n==0)// Si ambos son cero, terminar
        {
            break;
        }
        vector<int> nodos;// Vector para almacenar las capacidades de los nodos
        int capacidadesNodos;

        for(int i=0;i<n;i++) // Leer las capacidades de los nodos
        {
            ss>>capacidadesNodos;
            nodos.push_back(capacidadesNodos); // Agregar la capacidad al vector
        }
        vector<int> combinacionActual;// Vector para almacenar la combinación actual
        int valorObjetivo = T;// Valor objetivo
        bool encontrado = false;// Variable para saber si se encontró una combinación
        combinaciones(nodos, valorObjetivo, 0, combinacionActual, 0, encontrado);// llamar a la funcion de combinaciones
        if(!encontrado) // Si no se encontró ninguna combinación válida
        {
            cout << "ninguna" << endl;
        }
    }
    return 0;
}