//Pedir de que tamaño desea generar un arreglo

//generar automaticamente numeros aleatorios(0-50) para llenar el arreglo

//desplegar el arreglo

//Al final encontrar

//La suma de los numeros Pares

//Suma de los numeros Impares
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int pos, tam, sumapares = 0 , sumaimpares = 0;
  cout << "De que tamaÃ±o quieres el arreglo:";
  cin >> tam;
  int arr[tam];
  //tamaño del arreglo y imprimir los numeros al azar
  for (pos = 0; pos < tam; pos++) {
    arr[pos] = 1 + rand() % 51;
    cout << arr[pos] << endl;

  }

  cout << "==============================" << endl;

  for (pos = 0; pos < tam; pos++){
    if(arr[pos] % 2 == 0){        //calcular suma de numeros pares
      sumapares = sumapares + arr[pos];
    }
      if(arr[pos] % 2 > 0){       //calcular suma de numeros impares
        sumaimpares = sumaimpares + arr[pos];}
    }

cout << "la suma de numeros pares es: " << sumapares << endl;
cout << "la suma de numeros impares es: " << sumaimpares << endl;


  return 0;
}
