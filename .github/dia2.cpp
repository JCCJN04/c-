#include <iostream>   // lets us work with input and output objects
using namespace std;

int main(){
  int mate, esp, progra, arte, meta, prom;

  cout << "dame las calificaciones" << endl;
  cin >> mate;
//////////////////////////////////////////////
  cout << "dame las calificaciones" << endl;
  cin >> esp;
//////////////////////////////////////////////
  cout << "dame las calificaciones" << endl;
  cin >> progra;
//////////////////////////////////////////////
  cout << "dame las calificaciones" << endl;
  cin >> arte;
//////////////////////////////////////////////
  cout << "dame las calificaciones" << endl;
  cin >> meta;
//////////////////////////////////////////////
  prom = (mate + esp + progra + arte + meta)/5;
//////////////////////////////////////////////
cout<<"Tu promedio es: "<<prom<<"\n";
  if(prom >= 70){
    cout <<"conservas la beca";
//////////////////////////////////////////////
  }
  else{
    cout <<"vete a la uni";
  }


  return 0;



}
