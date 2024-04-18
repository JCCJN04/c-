#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool esFactible(vector<vector<char>> &M,int f, int c,char letra)
{
   if(M[f-1][c]==letra|| M[f+1][c]==letra || M[f][c+1]==letra || M[f][c-1]==letra)
      return false;
   return true;
}

void llena(vector<vector<char>> &M)
{
   char letra='A';
   for(int f=1;f<M.size()-1;f++)
      for(int c=1;c<M.size()-1;){
         if(M[f][c]=='.')
         {
            if(esFactible(M,f,c,letra))
            {
               M[f][c]=letra;
               c++;
               letra='A';
            }
            else
               letra++;
         }
         else
            c++;
      }
}

int main() {
   int casos;
   cin>>casos;
   for(int i=0;i<casos;i++)
   {
      int n;
      cin>>n;
      char letra;
      vector<vector<char>> M;
      vector<char> v((n+2),'*');
      M.push_back(v);
      for(int f=1;f<=n;f++)
      {
         M.push_back(v);
         for(int c=1;c<=n;c++)
         {
            cin>>letra;
            M[f][c]=letra;
         }
      }
      M.push_back(v);
      llena(M);
      cout<<"Case "<<i+1<<":"<<endl;
      for(int f=1;f<M.size()-1;f++)
      {
         for(int c=1;c<M[f].size()-1;c++)
            cout<<M[f][c];
         cout<<endl;
      }
   }
}