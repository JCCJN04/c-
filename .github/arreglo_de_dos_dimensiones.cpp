//preguntar al usuario cuantos renglones y columnas tendra el arreglo
//llenarlo de numeros aleatorios 0-100
//valor mas pequeño, valor mas grande, suma de los elementos y promedio
#include <iostream>
#include <ctime>
#include <cstdlib> // rand, srand
using namespace std;

int main() {
  srand(time(NULL));
  int tRen, tCol, ren, col, suma = 0, mayor = -1, menor = 999, posRenmenor, posColmenor, posRenmayor, posColmayor;
  cout << "cuantos renglones quieres que tenga";
  cin >> tRen;

  cout << "cuantas columnas quieres que tenga";
  cin >> tCol;

  int arreglo[tRen][tCol]; // crear el arreglo
  for(ren = 0; ren < tRen; ren++){ //variar ren para recorrer renglones
    for(col = 0; col < tCol; col++){  //vario col para recorrer columnas
      arreglo[ren][col] = 0 +rand()%100;
      suma = suma + arreglo[ren][col];
      if (arreglo[ren][col] < menor){
        menor = arreglo[ren][col];
        posRenmenor = ren;
        posColmenor = col;
      }
      if (arreglo[ren][col] > mayor){
        mayor = arreglo[ren][col];
        posRenmayor = ren;
        posColmayor = col;

      }
      cout << arreglo[ren][col] << " | ";

    }// cierro ciclo col
    cout << " " << endl;

  }//cierro ciclo ren

  cout << "===================" << endl;
  cout << "la suma de los elementos de el arreglo es " << suma << endl;
    cout << "el valor menor de el arreglo es " << menor << " y su posicion es [" << posRenmenor << "][" << posColmenor << "]" << endl;
   cout << "el valor mayor de el arreglo es " << mayor << " y su posicion es [" << posRenmayor << "][" << posColmayor << "]" << endl;
  cout << "el promedio de los elementos es " << suma/(tCol*tRen) << endl;
  return 0;
}
