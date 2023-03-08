// preguntar hora de inicio (hora y minutos)
// preguntar cuanto tarda el proceso en minutos
// con una funcion calcular a que hora termina

#include <iostream>
using namespace std;

void calculaHoraFin(int &hh, int &mm, int &tardaw){
  if(hh <= 24 || hh > 0){
  if ((mm + tardaw) >= 60){
    mm = mm - 60 + tardaw;
    hh = hh + 1;
    }
    else
    {
      mm += tardaw;
    }
  }
  }

int main(){
  int hr, min, tarda;
  cout << "a que hora inicio el proceso (0-23): ";
  cin >> hr;

  cout << "a que minuto inicio (0-59): ";
  cin >> min;

  cout << "dime cuantos minutos tardara el proceso: ";
  cin >> tarda;

  cout << "================" << endl;

  calculaHoraFin(hr, min, tarda);
  cout << "la maquina termina a las: " << hr << "horas:" << min << "minutos"<< endl;

  return 0;
}
