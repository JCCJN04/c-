/// crear un vector de 10 posiciones y le vamos a llenar con numeros aleatorios cde 0-100
//y lo van a imprimir, crear un vector que se llame ordenado y lo van a llenar con los valores
//ordenados del vectorA de manera ascendente
//crear un vector llamado ordenado2 y lo van a llenar con los valores ordenados del vector a de manera descendente

#include <iostream>
using namespace std;
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <algorithm>

int main() {
  srand(time(NULL));
  int vectorA[10], ordenado[10], ordenado2[10], pos = 0;
  cout << "vectorA ===========" << endl;
  for (pos = 0; pos < 10; pos++){ //lenar vectorA
      vectorA[pos] = 1+rand()%100-1;
      cout << vectorA[pos] << " ";
  }
  cout << endl << "ordenado =============" << endl;
  sort(vectorA, vectorA+10); // este for se encarga de ordenar los valores de manera ascendente
  for(pos = 0; pos < 10; pos++){
    ordenado[pos] = vectorA[pos]; // igualar el vector ordernado a vectora
    cout << ordenado[pos] << " ";
  }
  cout << endl << "ordenado2 =============" << endl;
  sort(vectorA, vectorA+10, greater<int>()); //este for se encarga de ordenar los valores de manera descendente
  for(pos = 0; pos < 10; pos++){
    ordenado2[pos] = vectorA[pos];
    cout << ordenado2[pos] << " ";
  }
  return 0;
  }
