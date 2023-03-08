#include <iostream>   // lets us work with input and output objects
#include <math.h>
using namespace std;  // means that we can use names for objects and variables from the standard library.

int main(){
  double gc, gf, op;
  cout << "Desea convertir de" << endl;
  cout << "1. Grados centigrados a farenheit" << endl;
  cout << "2. Grados farenheit a centigrados" << endl;
  cout << "opcion: ";
  cin >> op;
  if (op == 1)
      {
        cout << "Dame grados centigrados";
        cin >> gc;
        gf = gc*1.8 + 32;
        cout << gc << " c son" << gf << "f" << endl;
      }
  else
  {
    cout << "Dame grados farenheit";
    cin >> gf;
    gc = (gf-32)/1.8;
    cout << gf << " f son" <<  gc << "c" << endl;
  }
  return 0;
}
