#include <iostream>
using namespace std;

int main() {
  int dia, mes, anio;
  cout << "Escriba Dia Mes y Anio, separados con espacios: ";
  cin >> dia >> mes >> anio;

  if(dia < 0 || dia > 31)
    cout << "Dia Invalido" << endl;

  if (mes < 0 || mes > 12)
    cout << "Mes Invalido" << endl;

  if (anio > 2100)
    cout << "Año Invalido" << endl;


  else {

    // Validando meses con 31 dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {

      if (dia > 0 && dia <= 31){

        if(dia >= 9 && mes > 9){
          cout << dia << "/" << mes << "/" << anio%100 << endl;
        }
        if(dia >= 9 && mes < 9){
          cout << dia << "/" << "0" << mes << "/" << anio%100 << endl;
        }
        if(dia < 9 && mes >= 9){
          cout << "0" << dia << "/" << mes << "/" << anio%100 << endl;
        }
        if(dia < 9 && mes < 9){
          cout << "0" << dia << "/" << "0" << mes << "/" << anio%100 << endl;
        }
      }

      else
        cout << "Dia Invalido" << endl;
    }

    // Validando febrero y años viciestos
    if (mes == 2) {

      if (anio % 400 == 0) {

        if (dia > 0 && dia <= 29){
          if(dia >= 9 && mes > 9){
            cout << dia << "/" << mes << "/" << anio%100 << endl;
          }
          if(dia >= 9 && mes < 9){
            cout << dia << "/" << "0" << mes << "/" << anio%100 << endl;
          }
          if(dia < 9 && mes >= 9){
            cout << "0" << dia << "/" << mes << "/" << anio%100 << endl;
          }
          if(dia < 9 && mes < 9){
            cout << "0" << dia << "/" << "0" << mes << "/" << anio%100 << endl;
          }
        }
      }

      else {

        if (anio % 4 == 0 && anio % 100 == 0){
          if (dia > 0 && dia <= 29){
            if(dia >= 9 && mes > 9){
              cout << dia << "/" << mes << "/" << anio%100 << endl;
            }
            if(dia >= 9 && mes < 9){
              cout << dia << "/" << "0" << mes << "/" << anio%100 << endl;
            }
            if(dia < 9 && mes >= 9){
              cout << "0" << dia << "/" << mes << "/" << anio%100 << endl;
            }
            if(dia < 9 && mes < 9){
              cout << "0" << dia << "/" << "0" << mes << "/" << anio%100 << endl;
            }
          }
        }
      }
    }


    // Validando meses con 30 dias
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
      if (dia > 0 && dia <= 30) {
          if(dia >= 9 && mes > 9){
            cout << dia << "/" << mes << "/" << anio%100 << endl;
          }
          if(dia >= 9 && mes < 9){
            cout << dia << "/" << "0" << mes << "/" << anio%100 << endl;
          }
          if(dia < 9 && mes >= 9){
            cout << "0" << dia << "/" << mes << "/" << anio%100 << endl;
          }
          if(dia < 9 && mes < 9){
            cout << "0" << dia << "/" << "0" << mes << "/" << anio%100 << endl;
          }
      } else
        cout << "Dia Invalido" << endl;
    }
  }
}
