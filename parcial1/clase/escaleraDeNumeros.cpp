/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int casos, x, y, resultado = 0;
    cin >> casos;
    
    for(int i = 0; i < casos; i++)
    {
        cin >> x >> y;
        if(y > x || (x - 2) > y )
        {
            cout << "nada" << endl;
        }
        else
        {
            if(x%2 == 0 and y%2 == 0)
            {
                resultado = x+y;
                cout << resultado << endl;
            }
            if(x%2 != 0 and y%2 != 0)
            {
                resultado = x+y-1;
                cout << resultado << endl;
            }
            if(x%2 == 0 and y%2 != 0)
            {
                cout << "Nada";
            }
            if(x%2 != 0 and y%2 == 0)
            {
                cout << "nada";
            }
        }
    }
    return 0;
}
*/


#include<iostream>
#include<string>
#include<chrono> // Añade esta biblioteca
using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now(); // Inicia el cronómetro

    int casos, x, y, resultado = 0;
    cin >> casos;
    
    for(int i = 0; i < casos; i++)
    {
        cin >> x >> y;
        if(y > x || (x - 2) > y )
        {
            cout << "nada" << endl;
        }
        else
        {
            if(x%2 == 0 and y%2 == 0)
            {
                resultado = x+y;
                cout << resultado << endl;
            }
            if(x%2 != 0 and y%2 != 0)
            {
                resultado = x+y-1;
                cout << resultado << endl;
            }
            if(x%2 == 0 and y%2 != 0)
            {
                cout << "Nada";
            }
            if(x%2 != 0 and y%2 == 0)
            {
                cout << "nada";
            }
        }
    }

    auto stop = chrono::high_resolution_clock::now(); // Detiene el cronómetro
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start); // Calcula la duración

    cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << endl; // Imprime la duración

    return 0;
}