#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main() {
int contador = 0, contador2 = 1, contador3 = 1, contador4 = 1, numerostemp, cantfrias, canttempladas, cantcalidas, promedio, total=0;

srand(time(NULL));
  while (contador < 30){ //imprime 30 numeros aleatorios
    numerostemp = 0 + rand()%(44-0);//numeros aleatorios entre 1 y 100
    if (numerostemp >= 0 && numerostemp <= 14){

      cantfrias = contador2 ++;
      cout << "temperatura: " << numerostemp << endl;

        }

    if (numerostemp >= 15 && numerostemp <= 28){

      canttempladas = contador3 ++;
      cout << "temperatura: " << numerostemp << endl;
    }

    if (numerostemp >= 29 && numerostemp <= 44){

      cantcalidas = contador4 ++;
      cout << "temperatura: " << numerostemp << endl;

    }
    total = total + numerostemp;
    contador++;

    }
  cout << "numero de temp frias: " << cantfrias << endl;


   cout << "numero de temp templadas: " << canttempladas << endl;


   cout << "numero de temp calidas. " << cantcalidas << endl;

  promedio = total / 30;
  cout << "el promedio de temperaturas es: " << promedio<<endl;
  cout << "el total de temperaturas es: " << total << endl;
return 0;
  }
