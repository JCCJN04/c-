#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void devuelveCambio(vector<int> &M,vector<int> &S, int cantidad)
{
   int m=M.size()-1; //4
   while(m>=0 && cantidad>0)
   {
        if(M[m]<=cantidad) //Función de factibilidad: si se puede dar la moneda
        {
            int s=cantidad/M[m];
            S[m]=s; //Se guarda solución
            cantidad-=M[m]*s;
        }
        m--; //Función voraz implicita al recorrer en orden
   }

}

int main() {
   //pair<int,int> p;
   //vector<pair<int,int> > M;
   vector<int> M = {1,2,5,10,20};
   vector<int> S(5,0);
   devuelveCambio(M,S,517);
   for(int i=M.size()-1;i>=0;i--)
   {
      if(S[i]>0)
         cout<<"Dar "<<S[i]<<" monedas de "<<M[i]<<endl;
   }
}