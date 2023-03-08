#include <iostream>
using namespace std;
int main() {
  double lista[20];
  int pos, pos1;
  cout << "ingresa limite" << endl;
  cin >> pos1;

  for(pos = 1; pos <= pos1; pos++)
    {
      cout << "dame un valor para lista[" << pos <<"]:";
      cin >> lista[pos];
    }
  //ciclo para desplegar el arreglo
  cout <<endl<< "lista[]=" << endl;

  for(pos = 1; pos <= pos1; pos++)
    {
      cout << lista[pos] << " ";

    }

  cout << endl << "============================" << endl;
  return 0;
}
