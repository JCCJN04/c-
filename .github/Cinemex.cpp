#include <iostream>
using namespace std;

void desplegarSala(char cine[6][16]); // prototipo de funcion desplegar sala

void ventaBoletos(char ); // prototipo venta de boletos

//void significa que esta funcion no regresa ningun valor

int main() {
  char cine[6][16]; //6 renglones y 16 columnas
  int opcion = 1, ren, col, boletos, cantBoletos = 0, importe = 0;

  for(ren = 0; ren < 6; ren++)  // lenar el arreglo con la letra o, y solo se hace una vez al entrar al ciclo

    for(col = 0; col< 16; col++)   //
      cine[ren][col] = 'o';

  // hacer un while para desplegar el menu
  do{
    cout << "Cinemex sala VIP ====" << endl;
    cout << "  1. desplegar sala" << endl;
    cout << "  2. venta de boletos" << endl;
    cout << "  3. ventas totales" << endl;
    cout << "  4. salir" << endl;
    cout << "==============opcion:";
    cin >> opcion;

    switch (opcion){
      case 1:
        desplegarSala(cine);
        break;

      case 2:
        cout << "Cuantos boletos quiere:";
        cin >> boletos;
        desplegarSala(cine);
        cout << "ELija renglon y columna:";
        cin >> ren >> col;
        if(ren < 5 && (col == 7 || col == 8)){
          cout << "pasillo no se vende" << endl;
        }
        else{
        cantBoletos = cantBoletos + boletos;
        importe = importe + boletos*120;
        for(int c = col; c < col + boletos; c++){
          cine[ren][c] = 'x';
        }
        desplegarSala(cine);
        }
        break;

      case 3:
        cout << endl;
        cout << "Boletos vendidos: " << cantBoletos << endl;
        cout << "Importe total: " << importe << "$" << endl;
        break;

    }
  } while(opcion > 0 && opcion < 4);
  cout<<"Hasta luego esperamos verlo pronto";

  return 0;
}

void desplegarSala(char cine[6][16]){
  int r, c; // renglon y columna
  for(r = 0; r < 6; r++){
    for(c = 0; c < 16; c++){
      if(r < 5 && (c == 7 || c == 8)) //para no desplegar el pasillo
        cout << "  ";
      else
      cout << cine[r][c] <<" ";  // desplegar cada renglon
    }
    cout << endl; // cambio de renglon
  }

}
