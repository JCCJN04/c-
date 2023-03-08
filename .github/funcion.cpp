#include <iostream>
using namespace std;

int Funcion(int &a, int &b)
{
  a++;
  b--;
  cout << a << " " << b << " " << endl;
  return a+b;
}

int main() {
  int x = 3, y = 5, z;
  z = Funcion(x,y);
  cout << x << " " << y << " " << z << endl;
  return 0;
}
