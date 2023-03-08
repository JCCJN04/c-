#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>   

bool VerificarBoleto(int num, int ganador[7]); // prototipo de función para no repetir numeros de boleto ganador

int main()
{
  // generar boleto ganador
  srand(time(NULL));
  cout<< "==============" << "El BOLETO GANADOR ES:" << "==============" << endl<< endl;
int num, g, ganador[7];

for (g = 0; g < 7; g++){
  while(VerificarBoleto(num, ganador)){ //lama a la funcion para verificar que no se repitan numeros en el boleto ganador
     num = 1 + rand ()%56;
    }
    ganador[g] = num;
  }
    for (int g = 0; g < 7; g++){
      cout << "["<< ganador[g] << "] ";
    }

  cout << endl <<  endl << "=================================================" << endl;

  cout << endl;

  //generar participantes
int participante[500][7], i, a, n;
    cout << "==============" << "BOLETOS PARTICPANTES:" << "==============";
  cout << endl << endl;

    for (i = 0; i < 500; i++){
      cout << i + 1 << "---";
      for (a = 0; a < 7; a++){
        num = 1 + rand ()%56;
        participante[i][a]= num;
        for(int j = 0; j < a; j++){ //validar que no se repitan numeros en el arreglo de participantes
          if(participante[i][j] == participante[i][a]){
            participante[i][a] = 1 + rand ()%56;
          }
        }
        cout<< "["<< participante[i][a]<< "] ";
      }
      cout << endl;
    }
  cout << endl <<  "=================================================" << endl;
  cout << "==============" << "Ganadores:" << "==============";
  cout << endl << endl;
  // conocer a los ganadores
  double sum[500], premio[9];
  int w, z;

  for(w = 0; w < 500; w++){
    sum[w]=0; // la var suma sirve para saber que premio gano cada participante
    for(z = 0; z < 7; z++) {
      if(participante[w][z]== ganador[0])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[1])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[2])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[3])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[4])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[5])
        sum[w]= sum[w]+1;
      if(participante[w][z]== ganador[6])
        sum[w]= sum[w]+.5;
    }
      if (sum[w] >= 6)
        {cout<< endl<<  w+1<< "---Primer lugar ganaste con 6 numeros naturales";
         premio[0]++;}
      else if (sum[w] == 5.5)
        {cout<< endl<< w+1<< "---Segundo lugar ganaste con 5 numeros naturales y 1 adicional";
         premio[1]++;}
      else if (sum[w] == 5)
        {cout<< endl<< w+1<< "---Tercer lugar ganaste con 5 numeros naturales";
         premio[2]++;}
      else if (sum[w] == 4.5)
        {cout<< endl<< w+1<< "---Cuarto lugar ganaste con 4 numeros naturales y 1 adicional";
         premio[3]++;}
      else if (sum[w] == 4)
        {cout<< endl<< w+1<< "---Quinto lugar ganaste con 4 numeros naturales";
         premio[4]++;}
      else if (sum[w] == 3.5)
        {cout<< endl<< w+1<< "---Premio Fijo con 3 numeros naturales y 1 extra";
         premio[5]++;}
      else if (sum[w] == 3)
        {cout<< endl<< w+1<< "---Premio Fijo con 3 numeros naturales";
         premio[6]++;}
      else if (sum[w] == 2.5)
        {cout<< endl<< w+1<< "---Premio Fijo con 2 numeros naturales y 1 extra";
         premio[7]++;}
      else if (sum[w] == 2)
        {cout<< endl<< w+1<< "---Premio Fijo con 2 numeros naturales";
         premio[8]++;}
      else {}
    // si no hay ganador de los premios no se imprimira nada
  }

cout << endl << endl <<  "=================================================" << endl;
  return 0;
}

//función que verifica que no se repitan numeros en el arreglo de el boleto ganador
bool VerificarBoleto(int num, int ganador[7]){
  for (int g = 0; g < 7; g++){
      if(num == ganador[g]){
        return true;
      }
  }
    return false;
}
