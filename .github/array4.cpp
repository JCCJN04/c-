// haer un program que pide de que tamaño desea el arreglo, crear el arreglo
// con con numeros aleatorios del 0-100, y desplegar de 5 en 5 encontrar el
// valor mas grande y mas pequeño
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int pos, tam, menor = 9999, mayor = 0;
  cout << "De que tamaÃ±o quieres el arreglo:";
  cin >> tam;
  int arr[tam];
  for (pos = 0; pos < tam; pos++) {
    arr[pos] = 1 + rand() % 101;
    if (arr[pos] < menor) {
      menor = arr[pos];
    }

    if (arr[pos] > mayor) {
      mayor = arr[pos];
    }
  }
  // imprimir de 5 en 5
  cout << endl << endl;
  for (pos = 0; pos < tam; pos++)
    if (pos % 5 == 0 && pos > 1)
      cout << arr[pos] << endl;
    else
      cout << arr[pos] << "  ";
  cout << endl << endl;
  cout << "El valor menor es " << menor << endl;
  cout << "El valor mayor es " << mayor << endl;
  return 0;
}
