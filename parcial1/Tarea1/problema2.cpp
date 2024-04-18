#include <iostream> //daniel alberto vazquez valadez 614331
#include <string> //juan carlos mendoza castillo 598701
using namespace std;

int main()
{
    string numero; // Se declara la variable numero
    int suma = 0; // Se inicializa la variable suma en 0
    cin >> numero; // Se lee el número
    
    for(int i = 0; i < numero.length(); i++) // Se itera sobre la longitud del número
    {
        suma += numero[i] - '0'; // Se suma el valor de la posición i del número a la variable suma
    }
    numero = to_string(suma); // Se convierte la variable suma a string y se asigna a la variable numero
    while(numero.length() > 1) // Mientras la longitud del número sea mayor a 1
    {
        suma = 0; // Se reinicia la variable suma en 0
        for(int i = 0; i < numero.length(); i++)  // Se itera sobre la longitud del número
        {
            suma += numero[i] - '0'; // Se suma el valor de la posición i del número a la variable suma
        }
        numero = to_string(suma); // Se convierte la variable suma a string y se asigna a la variable numero
    }
    cout << suma << endl; // Se imprime la variable suma

    return 0; 
}