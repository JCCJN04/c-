#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secuenciaMax(vector<int> &N,int a,int b)
{
   if(a==b)
      return N[a];
   int mitad=(a+b)/2;
   int maxladoIzq=secuenciaMax(N,a,mitad);
   int maxladoDer=secuenciaMax(N,mitad+1,b);
   int maximoizq=-999999;
   int suma=0;
   for(int i=mitad;i>=a;i--)
   {
      suma+=N[i];
      if(suma>maximoizq)
         maximoizq=suma;
   }
   suma=0;
   int maximoder=-999999;
   for(int i=mitad+1;i<=b;i++)
   {
      suma+=N[i];
      if(suma>maximoder)
         maximoder=suma;
   }
   int sumacentro=maximoder+maximoizq;
   return max(sumacentro,max(maxladoIzq,maxladoDer));
}

int main() 
{
    vector<int> N={2,-4,1,9,-6,7,30};
    cout<<secuenciaMax(N,0,N.size()-1)<<endl;
    return 0;
}