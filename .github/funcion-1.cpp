#include <iostream>
using namespace std;
#include <cstdlib> // rand, srand
#include <ctime>   // time

int funcion(int a, int b); //prototipo


int main() {
int x = 3, y = 5, z;
  z = funcion(x, y);
  cout << x << " " << y << " " << z << endl;
  return 0;
}

int funcion(int a, int b)
{
  a++;
  b--;
  cout << a << " " << b << " " << endl;
  return a+b;
}
