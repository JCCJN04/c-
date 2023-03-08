//Hacer un programa que pregunte hasta que numero desa imprimir y que imprima los numeros,    PERO cuando el numero sea multiplo de 3 despliegue la palabra TRIZ en vez del numero y cuando el numero sea multiplo de 5 despliegue la palabra FIZZ y cuando sea multiplo de ambos numeros despliegue TRIZ-FIZZ
//Ejemplo:
//1, 2, TRIZ, 4, FIZZ, TRIZ, 7, 8, TRIZ, FIZZ, 11, TRIZ, 13, 14, TRIZ-FIZZ, 16, 17, TRIZ, 19, FIZZ, TRIZ, 22.......
#include <iostream>
using namespace std;

int main() {
int contador = 1, numero;
  cout << "hasta que numero deseas imprimir" << " ";
  cin >> numero;
  while(contador <= numero){

    if(contador%3 == 0 && contador%5 == 0)
      cout << "TRIZ-FIZZ" << endl;

    else if(contador%3==0)
      cout << "TRIZ" << endl;

    else if(contador%5==0)
      cout << "FIZZ" << endl;
  else
      cout << contador << endl;
contador++;
  }
  return 0;
}
