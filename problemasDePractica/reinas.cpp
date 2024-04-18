#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>
using namespace std;
int M[15][15];
int soluciones=0;

bool sePuedeColocar(int f, int c)
{
   for(int i=0;i<c;i++) //evalua la fila
      if(M[f][i]==1)
         return false;
   for(int i=1;f-i>=0 && c-i>=0;i++) //Diagonal arriba
      if(M[f-i][c-i]==1)
         return false;
   for(int i=1;f+i<15 && c-i>=0;i++)  //Diagonal abajo
      if(M[f+i][c-i]==1)
         return false;
   return true;
}

void reinas(int col)
{
   if(col==15)
   {
      soluciones++;
      //cout<<"SOLUCION"<<endl;
      return;
   }
   for(int fil=0;fil<15;fil++)
   {
      if(sePuedeColocar(fil,col))
      {
         M[fil][col]=1; //Poner reina
         reinas(col+1);
         //   return true;
         //else
         M[fil][col]=0;  //Quitar reina
      }
   }
   return; //false;
}

int main() {
   auto start = std::chrono::high_resolution_clock::now();

   reinas(0);
   for(int f=0;f<15;f++)
   {
      for(int c=0;c<15;c++)
      {
         if(M[f][c]==1)
         {
            //cout<<"R";
            //else
            //cout<<"-";

         }
         
      }
      cout<<endl;
   }
   cout<<soluciones<<endl;
   auto end = std::chrono::high_resolution_clock::now();
   std::chrono::duration<double> duration = end - start;
   double seconds = duration.count();

   std::cout << "Tiempo de ejecución: " << seconds << " segundos" << std::endl;
}