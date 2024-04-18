#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int lmax;

void catan(int nodoa, int nodos, vector<vector<bool>> &M, int lact)
{
   for (int i = 0; i < nodos; i++)
   {
      if (M[nodoa][i] == true)
      {
         // Eliminamos arista
         M[nodoa][i] = false;
         M[i][nodoa] = false;
         catan(i, nodos, M, lact + 1);
         M[nodoa][i] = true;
         M[i][nodoa] = true;
      }
   }
   if (lact > lmax)
      lmax = lact;
}

int main()
{
   int nodos, aristas;
   cin >> nodos >> aristas;
   while (!(nodos == 0 && aristas == 0))
   {
      vector<vector<bool>> M(nodos, vector<bool>(nodos, false));
      for (int i = 0; i < aristas; i++)
      {
         int a, b;
         cin >> a >> b;
         M[a][b] = true;
         M[b][a] = true;
      }
      lmax = 0;
      for (int i = 0; i < nodos; i++)
         catan(i, nodos, M, 0);
      cout << lmax << endl;
      cin>>nodos>>aristas;
   }
}