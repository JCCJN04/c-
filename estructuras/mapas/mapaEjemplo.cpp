#include <iostream> 
#include <map>

using namespace std;

int main()
{
    map<string, int> mapa; //Crear mapa

    mapa.insert(pair<string, int>("uno", 1)); //insertar datos
    mapa.insert(pair<string, int>("dos", 2)); // insertar datos

    map<string, int>::iterator i; //crear iterador
    for(i = mapa.begin(); i != mapa.end(); i++)
    {
        cout << i->first << " => " << i->second << endl; //imprimir datos
    }

    //buscar por llave
    map<string, int>::iterator j;

    j = mapa.find("dos");
    if(j != mapa.end())
    {
        cout << "Encontrado: " << j->first << " => " << j->second << endl;
    }
    else
    {
        cout << "No encontrado" << endl;
    }

    //tamaño mapa
    cout << "Tamaño: " << mapa.size() << endl;

    //eliminar por llave
    mapa.erase("dos");

    //verificar si un elemento existe
    string dato;
    int llave;

    cout << "Ingresa la llave " << endl;
    cin >> llave;
    cout << "Ingresa el dato " << endl;
    cin >> dato;

    for(i = mapa.begin(); i != mapa.end(); i++)
    {
        if(i->first == dato)
        {
            if(i->second == llave)
            {
                cout << "El dato existe" << endl;
            }
            else
            {
                cout << "El dato no existe" << endl;
            }
        }
    }
    
    return 0; 
}