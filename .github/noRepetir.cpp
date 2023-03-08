#include <iostream>
using namespace std;
#include <cstdlib> // rand, srand
#include <ctime>   // time

int main(){
int num, g, ganador[7];

for (g = 0; g < 7; g++){
  while(verificar(num, ganador)){//lama a la funcion
     num = rand ()%57;
    }
    ganador[g] = num;
}
    for (int i = 0; )


//función que verifica que no se repitan numeros en el arreglo de el boleto ganador
bool verificar(int num, int ganador[7]){
  for (int g = 0; g < 7; g++){
      if(num == ganador[g]){
        return true;
      }
  }
    return false;
