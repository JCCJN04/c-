#include <iostream>
using namespace std;

int main() {
  string nombre; // variable que alamcena nombres
  double n = 0, tiempo = 0, contador = 0, contadorrecord = 0, tiempoprom; char
  opcion;
  do{
    cout << "escriba su nombre: ";
    cin >> nombre;

    cout << "escriba su tiempo: ";
    cin >> tiempo;


    cout << " desea seguir capturando datos S/N" << endl;
    cin >> opcion;  //opcion para continuar o no

    cout << "Nombre: " << nombre << " // " << "Tiempo: " << tiempo << endl;

    if (tiempo < 9.58){  //almacena los numeros menores a 9.58 para conocer el numero de atletas que superaron el record

      contadorrecord++;
    }

  contador++; // contador que cuenta el numero de atletas registrados
    tiempoprom += tiempo; // calcular el tiempo promedio
    tiempoprom = tiempoprom/contador;

    }
  while(tolower(opcion) == 's');
  cout << "se registro la cantidad de: " << contador << " atletas" << endl;

cout << "-----------------------------" << endl;

  cout << "El tiempo promedio del equipo es: " << tiempoprom << endl;

cout << "-----------------------------" << endl;

  cout << "El nombre y tiempo del corredor más veloz: " << endl;

cout << "-----------------------------" << endl;

  cout << "numero de corredores superaron el tiempo record de 100 mts planos: " << contadorrecord;
  return 0;
}
