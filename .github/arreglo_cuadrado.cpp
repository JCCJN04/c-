#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(NULL));
  int tam = 0, i, j;
  int arreglo[tam][tam];
  double suma1 = 0, suma2 = 0, num = 0;
  cout << "tamaño del arreglo:";
  cin >> tam;

  for (i = 0; i < tam; i++){
    for (j = 0; j < tam; j++){
      num = 1+rand()%101;
      arreglo[i][j] = num;

      if(i == j){
        suma1 += num;

      }
      if(i + j + 1 == tam){
        suma2 += num;
      }
      cout << num << " ";

    }
    cout << endl;
  }
  cout << "suma diagonal principal: " << suma1 << endl;
  cout << "suma diagonal secundaria: " << suma2 << endl;

  return 0;
}
