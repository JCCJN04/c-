///*Hacer un programa que pida un numero y un simbolo Si el numero es 4 y el simbolo es * deberan dibujar
  /****
   ****
   ****
   ****
y tambien dibujar
   ****
   *  *
   *  *
   ****

*/
#include <iostream>
using namespace std;

int main() {
  int i = 1, j = 1, num;
  char sym;

  cout << "escribe un numero: ";
  cin >> num;

  cout << "escribe un simbolo";
  cin >> sym;
  char  arreglo[num][num];

  for(i = 1; i<=num; i++){
    for(j = 1; j<=num; j++){
            arreglo[num][num] = sym;
              cout << arreglo[num][num];

        }cout<<endl;
    }cout<<endl<<endl;

  cout << endl;
  cout << "=================" << endl;

  for(i = 1; i<=num; i++){
    for(j = 1; j<=num; j++){
      if(i == 1 || i == num ||j == 1 ||j == num){
        arreglo[num][num] = sym;
        cout << arreglo[num][num];
      }
        else{
          cout<<" ";
        }

    }
    cout<<endl;
  }


  return 0;
  }
