#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int posA = 0, tam1 = 0, arreglo1[tam1];
  cout << "De que tamaño quieres el arreglo 1:";
  cin >> tam1;

  for (posA = 0; posA < tam1; posA++) {
    arreglo1[posA] = 1 + rand() % 101;
    cout << " " << arreglo1[posA];

  }
  cout << endl;
  int posB = 0 ,tam2 = 0, arreglo2[tam2];
  cout << "De que tamaño quieres el arreglo 2:";
  cin >> tam2;

  for (posB = 0; posB < tam2; posB++) {
    arreglo2[posB] = 1 + rand() % 101;
    cout << " " << arreglo2[posB];

  }
  cout << endl;
  int posC = 0, cont=0;
    cout << "en que posicion del vectorA deseas poner el vectorB: ";
  cin >> posC;

  while(cont < tam2){
    arreglo1[posC] = arreglo2[cont];
    cont++;
    posC++;
    }

     for(int i = 0; i < tam1; i++){
      cout << " " << arreglo1[i];
    }

  return 0;
}
