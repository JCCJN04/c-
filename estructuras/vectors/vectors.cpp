#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5}; //creamos vector
    cout << "Tamanio: " << v.size() << endl; //tamaño del vector	
    v.push_back(6); //agregamos un elemento al final
    cout << "Tamanio: " << v.size() << endl; //tamaño del vector	

    cout << v.capacity(); //capacidad del vector


    return 0;
}