#include <iostream>
using namespace std;
//https://www.xn--gey-hoa.com/computacion/programa-en-c-numeros-aleatorios-para-el-juego-melate/
void fun(int a, int &b)
{
  a = 10;
  b = 20;
  cout << a << " " << b << endl;


}
int main() {
  int x = 2, y = 5;
  fun(x,y);
  cout << x << " " << y << endl;

  return 0;
}
