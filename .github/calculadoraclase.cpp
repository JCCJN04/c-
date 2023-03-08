#include <iostream>   // lets us work with input and output objects
#include <math.h>
using namespace std;  // means that we can use names for objects and variables from the standard library.

int main()
{
  double num1, num2; // definir 2 variables enteras
  cout << "Dame un numero "; //console output despliega un mensaje
  cin >> num1;  // console input recibo un valor y lo guardo en num1
  cout << "Dame otro numero ";
  cin >> num2;
  cout << "la suma es: " << num1 + num2 << endl;
  cout << "la resta es: " << num1 - num2 << endl;
  cout << "la multiplicacion es: " << num1 * num2 << endl;
  cout << "la division es: " << num1 / num2 << endl;
  cout << "Numero 1 al cuadrado: " << pow(num1, 2) << endl;

  cout << "la potencia es: " << pow(num1,num2) << endl;


  return 0;
}
