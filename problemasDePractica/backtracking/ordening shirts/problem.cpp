#include <iostream>
#include <vector>
#include <string>
using namespace std;

int count=0;
void generaPaquetes(int l, int limit, string &usadas)
//void generaPaquetes(int l, int limit, string &s, string &usadas)
{
   if(l==limit)
   {
      count++;
      //cout<<s<<endl;
   }
   for(char c='A';c-'A'<limit;c++)
   {
      if(usadas.find(c)!=string::npos) //Si ya está usada, la saltamos
         continue;
      if(usadas.back()<c) //Solo ponemos = si el siguiente es mayor.
      {
         usadas+=c;
         //s=s+"="+c;
         generaPaquetes(l+1,limit,usadas);
         //s.pop_back();
         //s.pop_back();
         usadas.pop_back();
      }

      usadas+=c;
      //s=s+">"+c;
      generaPaquetes(l+1,limit,usadas);
      //s.pop_back();
      //s.pop_back();
      usadas.pop_back();
   }
}

int main() {
   int limit=8;
   for(char c='A';c-'A'<limit;c++)
   {
      string s;
      s.push_back(c);
      string usadas;
      usadas.push_back(c);
      generaPaquetes(1,limit,usadas);
   }
   cout<<count<<endl;

   return 0;
}