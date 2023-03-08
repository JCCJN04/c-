#include <iostream>
using namespace std;
int main() {
  double arr[5];
  int pos;
  for(pos = 0; pos < 5; pos++)
    {
      cout << "dame un valor para arr[" << pos <<"]:";
      cin >> arr[pos];
    }
  //ciclo para desplegar el arreglo
  cout <<endl<< "arr[]=" << endl;
  for(pos = 0; pos < 5; pos++)
    {
      cout << arr[pos] << " ";

    }
  cout << endl << "============================" << endl;
  return 0;
}
