//Los primeros dos numeros de la serie son 0 y 1 y los siguientes se obtienen sumando los dos numeros que los preceden.

//Hacer un programa que pregunte cuantos numeros desea generar y geneere la serie Fibonacci y la prueba de escritorio para los primeros 8 numeros

//0, 1, 1, 2, 3, 5, 8, 13, 21 34


#include <iostream>
using namespace std;

int main() {
  // inicializar las variables
  int n, num1 = 0, num2 = 1, sigNum = 0;

    // preguntar al usuario cuanto numeros de la serie desea generar

    cout << "¿Cuantos numeros deseas genear? ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // imprime el primer numero de la serie
        if(i == 1) {
            cout << num1 << ", ";
            continue;
        }
        // imprime el segundo numero de la serie
        if(i == 2) {
            cout << num2 << ", ";
            continue;
        }
        // imprime todos los numeros despues del 2ndo
        sigNum = num1 + num2;
        num1 = num2;
        num2 = sigNum;

        cout << sigNum << ", ";
    }
  }
