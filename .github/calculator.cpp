#include <iostream>   // lets us work with input and output objects
using namespace std;

int main()
{
  int user, lado, radio;
  double pi = 3.1416;

  cout << " a = area cuadrado \n b = area circulo \n c = area triangulo \n d = area rectangulo\n";
  cout << "Selecciona la letra segun la figura que desees: \n";

{if user == "a"
  cout << "escribe la medida de el lado";
  cin >> lado;
  cout << "el area del cuadrado es:" << lado * lado;
}

}else if user == "b" {
  cout << "Escribe el radio";
  cin >> radio;
  cout << "el area del circulo es:" << pi * (radio*radio);
  return 0;

}else{
  cout << "error"
}
