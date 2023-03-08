#include <iostream>
using namespace std;

int main (){
double peso , planeta, pesop;
  cout<< "Dame tu peso en libras: ";
  cin>>peso;
  cout<< "En que planeta seseas caluclar tu peso:"<<endl;
  cout<< "  1. Mercurio"<<endl;
  cout<< "  2. Venus"<<endl;
  cout<< "  3. Marte"<<endl;
  cout<< "  4. Jupiter"<<endl;
  cout<< "  5. Saturno"<<endl;
  cout<< "  6. Urano"<<endl;
  cout<< "  7. Neptuno"<<endl;
  cout<< "  8. Luna"<<endl;
  cout<< "  9. Sol"<<endl;
  cin>>planeta;
if (planeta ==1)    //mercurio
pesop = peso * .377;

if (planeta ==2)   //venus
pesop = peso * .90;

if (planeta ==3)  //marte
pesop = peso * .378;

if (planeta ==4)  //jupitoer
pesop = peso * 2.52;

if (planeta ==5)   //saturno
pesop = peso * 1.06;

if (planeta ==6)  //urano
pesop = peso * .886;

if (planeta ==7)  //neptuno
pesop = peso * 1.13;

if (planeta ==8)  //luna
pesop = peso * .165;

if (planeta ==9)  //sol
pesop = peso * 274;

cout<< "tu peso en esa planeta es: "<<pesop<<"lbs"<<endl;
  return 0;
}
