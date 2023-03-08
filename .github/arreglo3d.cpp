//crear un arreglo de 4 renglones y 3 columna y lo vamos a llenar con numeros aleatorios de 1-10
#include <iostream>
#include <ctime>
#include <cstdlib> // rand, srand
using namespace std;
int main() {
  srand(time(NULL));
  int arreglo[4][3], renglones, columnas;
  for (renglones = 0 ; renglones < 4; renglones++){//vario mis renglones de 0-3
    for (columnas = 0; columnas < 3; columnas++){//vario mis columnas de 0-2
        arreglo[renglones][columnas] = 1+rand()%11;
        cout << arreglo[renglones][columnas] << " ";
    }//cierre de for de columnas
    //cambio de fila cada que termine
    cout << " -- " << endl; //cambio de renglon cada que termine de imprimir
  }

  return 0;
}
