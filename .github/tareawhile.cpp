//Hacer un programa que calcule el peso Total de un ferrocarril, de 50 vagones

//genere, 50 numeros aleatorios del (1 al 100) cada numero representa el peso de un vagon

//un vahon vacio de ferrocarril pesa 26 toneladas, si el Numero que generas esta entre 0 y 26

//considera que es un vagon vacio, despliega el peso de todos los vagones y el peso total del ferrocarril
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
double vagones = 0, pesototal = 0, contador = 0;

  srand(time(NULL));

  while (contador < 50){ //imprime 50 vagones
    vagones = 1 + rand()%(101-1);//numeros aleatorios entre 1 y 100
    cout << contador+1 << " - " << vagones << endl; //imprimir valores
    if (vagones <= 100 && vagones > 26){
      pesototal = pesototal + vagones;
    }
    if (vagones < 27){
      pesototal = pesototal + 26;
        }
    contador++;
    }

  cout << "Peso total: " << pesototal;//imprimir peso total

return 0;
  }
