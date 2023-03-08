// juan carlos mendoza castillo #598701
#include <iostream>
using namespace std;
#include <string>

int main() {
  char seguir = 's';

  do {

    ////repetir hasta que el usuario quiera
    int resultado = 0;
    int a = 0;
    string isbn;

    cout << "escribe 9 numeros del isbn" << endl;
    cin >> isbn; ////el usuario escribe sus 9 digitos

    for (int i = 0; i < 9; i++) {
      a = isbn[i] - 48;
      resultado += ((i + 1) * a); // se utiliza la formula para saber si agregar
                                  // "x" o agregar el resultado de la división
    }
    if (resultado % 11 < 10) { // arroja el resultado pero no la division entera

      cout << "El ISBN es " << isbn << "-" << resultado % 11 << endl;
    }

    else {
      cout << "El ISBN es " << isbn << "-X" << endl;
    }

    cout << "¿deseas continuar? si = s, no = n" << endl;
    cin >> seguir;

  } while (seguir == 's');
  return 0;
}
