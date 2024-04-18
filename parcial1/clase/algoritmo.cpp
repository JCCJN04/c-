#include<iostream>
#include<string>
using namespace std;

int main()
{
   int casos,tiendas;
   int T[20];
   cin>>casos;
   for(int i=0;i<casos;i++)
{
      cin>>tiendas;
      for(int t=0;t<tiendas;t++)
         cin>>T[t];
      int mayor=-1,menor=100;
      for(int t=0;t<tiendas;t++)
      {
         if(T[t]<menor)
            menor=T[t];
         if(T[t]>mayor)
            mayor=T[t];
      }
      cout<<(mayor-menor)*2<<endl;
    }
	return 0;
}