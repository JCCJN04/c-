#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;

vector<int> M={1,8,16,30};
vector<int> C(100001,-1);

int cambio(int cantidad)
{
   if(C[cantidad]!=-1)
      return C[cantidad];
   if(cantidad==0)
      return 0;
   int m=INT_MAX;
   for(int i=0;i<M.size();i++){ //probar cada moneda
      if(M[i]<=cantidad) //Si la moneda se puede usar
      {
         int c=1+cambio(cantidad-M[i]);
         if(c<m)
            m=c;
      }
   }
   C[cantidad]=m;
   return m;
}

int main()
{
   C[0]=0;
   cout<<cambio(100000)<<endl;
   return 0;
}