#include <iostream>   // lets us work with input and output objects
using namespace std;  // means that we can use names for objects and variables from the standard library.

int main()
{
  cout << "Hello world \n\n"; //output hello world
  cout << "a\n"; //output a

  int x = 1; // var 1
  int y = 2; // var 2
  int z = 3; // var 3

  int sumxy = x + y; // sum x + y
  int subsxy = x - y; //subs x - y

  cout << "x + y =" << sumxy; //output x + y
  cout << "\n"; //space between line
  cout << "x - y =" << subsxy; //output x - y
  return 0;
}
