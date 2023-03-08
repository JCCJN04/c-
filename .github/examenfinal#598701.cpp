#include <iostream>
using namespace std;

void DesplegarAsientosPrem(char AvionPrem[5][4]); // prototipo de funcion desplegar asientos premium

void DesplegarAsientosReg(char AvionReg[6][21]); // prototipo de funcion desplegar asientos premium

int main() {
  char AvionPrem[3][4], AvionReg[6][21], desicion;

  int Premium[3][4], Regular[4][21], ren, col, r, c; // premium 512  // regularfavorable 270 // regular 183

  int opcion = 1, cantboletos = 0, boletosPrem = 0,BoletosReg = 0, BoletosRegF = 0, importePrem = 0, importeReg = 0, importeRegF = 0, importeTotal = 0;

  for(ren = 0; ren < 5; ren++)  // lenar el arreglo con la letra o premium
    for(col = 0; col< 4; col++)
      AvionPrem[ren][col] = 'o';

  for(r = 0; r < 5; r++)  // lenar el arreglo con la letra o
    for(c = 0; c < 21; c++)
      AvionReg[r][c] = 'o';


do{
    cout << "Lufthansa ====" << endl;
    cout << "  1. Desplegar asientos premium" << endl;
    cout << "  2. Desplegar asientos regular" << endl;
    cout << "  3. Reserva de asientos" << endl;
    cout << "  4. Ingresos y cantidad de asientos reservados" << endl;
    cout << "  5. salir" << endl;
    cout << "==============opcion:";
    cin >> opcion;

    switch (opcion){
      case 1:
      DesplegarAsientosPrem(AvionPrem);
      break;

      case 2:
      DesplegarAsientosReg(AvionReg);
      break;

      case 3:
        int re, co;
      cout << "desea asientos premium S o N";
        cin >> desicion;
      if (desicion == 'S'){
        DesplegarAsientosPrem(AvionPrem);
        cout << "Cuantos boletos quiere:";
        cin >> boletosPrem;
        cout << "ELija renglon y columna:";
        cin >> re >> co;
        if(re > 1 && re == 3 &&(co < 1)){
          cout << "estas posiciones no estan disponibles";
        }
        cantboletos = cantboletos + boletosPrem;
        importePrem = importePrem + boletosPrem*512;
        for(ren = 0; ren < 5; ren++)
        for(col = 0; col < 4; col++)
        AvionPrem[re][co] = 'x';
        cout << AvionPrem[re][co];


            DesplegarAsientosPrem(AvionPrem);

      }
      else{
        int renglo, column;
        DesplegarAsientosReg(AvionReg);
        cout << "Cuantos boletos quiere:";
        cin >> BoletosReg;
        cout << "ELija renglon y columna:";
        cin >> re >> co;
        if(renglo > 1 && renglo < 3){
          cout << "estas posiciones no estan disponibles";
        }
        cantboletos = cantboletos + BoletosReg;
        importeReg = importeReg + BoletosReg*183;
        for(r = 0; r < 5; r++)
        for(c = 0; c < 21; c++)
          AvionReg[renglo][column] = 'x';
        DesplegarAsientosReg(AvionReg);

      }
      break;

      case 4:
      importeTotal = importeTotal + importePrem + importeReg + importeRegF;
      cout << "el importe total es: "<< importeTotal << endl;

      cout << "Se compraron " << boletosPrem << " boletos premium" << endl;
      cout << "el importe de boletos premium es: " << importePrem << endl;
      cout << "Se compraron " << BoletosReg << " boletos regulares" << endl;
      cout << "el importe de boletos regulares es: " << importeReg << endl;

      break;

    }
  }while(opcion > 0 && opcion < 4);

  return 0;
}

void DesplegarAsientosPrem(char AvionPrem[5][4]){
  int reng, colu; // renglon y columna
  for(reng = 0; reng < 5; reng++){
    for(colu = 0; colu < 4; colu++){
      if(reng > 1 && reng < 4 ){
        cout << " ";
        }
        else if (colu < 1){
          cout << " ";
        }
      else
        cout << AvionPrem[reng][colu] <<" ";
    }
    cout << endl;
  }
}

void DesplegarAsientosReg(char AvionReg[5][21]){
  int renglon, columna; // renglon y columna
  for(renglon = 0; renglon < 6; renglon++){
    for(columna = 0; columna < 21; columna++){
      if(renglon > 1 && renglon < 3){
      cout << " ";
      }
      else
        cout << AvionReg[renglon][columna];
    }
    cout << endl;
  }
}
