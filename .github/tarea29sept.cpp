//Investigar como se genera un numero aleatorio en C++ que libreria e Instrucciones necesitas.
//hacer un problema que genere 3 numeros aleatorios entre 200 y 900 y nos diga cual es el menor de ellos comentar el programa
#include <iostream>
#include <cstdlib>      // rand, srand
#include <ctime>         // time
using namespace std;
int main()
{
    int num1, num2, num3;
    srand(time(NULL)); // La función srand() inicializa el generador de números aleatorios utilizando el argumento valor inicial), la función srand() se utiliza antes de usar rand().

    for (int i=1; i<=1; i++) {
        num1 = 200 + rand()%(901-200); //numero aleatorio entre 200-900
      cout << num1 << endl;
      }

        for (int i=1; i<=1; i++) {
        num2 = 200 + rand()%(901-200); //numero aleatorio entre 200-900
      cout << num2 << endl;
      }

    for (int i=1; i<=1; i++) {
        num3 = 200 + rand()%(901-200);//numero aleatorio entre 200-900
      cout << num3 << endl;
      }
    cout << "-------------------------------" << endl;

    if (num1 < num2 && num1 < num3){
      cout << num1 << " "<< "es menor que " << num2 << " y " << num3 << endl;
      //se cumple si num1 es menor que num2 y num3
    }

    if (num2 < num1 && num2 < num3){
      cout << num2 << " "<< "es menor que " << num1 << " y " << num3 << endl;
      //se cumple si num2 es menor que num1 y num3
    }

    if (num3 < num1 && num3 < num2){
      cout << num3 << " "<< "es menor que " << num1 << " y " << num2 << endl;
      //se cumple si num3 es menor que num2 y num3
    }
    return 0;
}
