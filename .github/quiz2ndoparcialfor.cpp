#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int frio = 0, calido = 0, caliente = 0, promedio = 0, temperaturas;
int main() {
  srand(time(NULL));
  for (int i = 1; i <= 30; i++){
    temperaturas = rand() % 45;
    cout << temperaturas << endl;
  if(temperaturas <=14)
    frio++;

  if(temperaturas >= 15 && temperaturas <= 28)
    calido++;

  if(temperaturas>= 29 && temperaturas <= 44)
    caliente++;
  promedio += temperaturas / 30;
  }
  cout << "temperaturas frías: " << frio << endl;
  cout << "temperaturas calidas: " << calido << endl;
  cout << "temperaturas calientes: " << caliente << endl;
  cout << "temperatura promedio: " << promedio << endl;
  return 0;
}
